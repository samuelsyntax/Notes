#include<stdio.h>
#include<stdlib.h>
#include<sqlite3.h>
#include "database.h" 

static sqlite3 *db = NULL;

int init_db(void){
    int rc = sqlite3_open("notes.db", &db);
    if (rc != SQLITE_OK) {
        printf("Cannot open database: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    const char *sql = "CREATE TABLE IF NOT EXISTS notes ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "title TEXT NOT NULL,"
        "content TEXT NOT NULL,"
        "created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);";
    
    rc = sqlite3_exec(db, sql, 0, 0, 0);
    if (rc != SQLITE_OK) {
        printf("Cannot create table: %s\n", sqlite3_errmsg(db));
        return 1;
    }
    return 0;
}

void close_db(void){
    if (db) {
        sqlite3_close(db);
    }
}