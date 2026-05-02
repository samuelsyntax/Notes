#ifndef DATABASE_H 
#define DATABASE_H

#include <sqlite3.h>

int init_db(void); 
void close_db(void); 
void add_note(const char *title, const char *content); 
void list_notes(void);
void view_note(int id);
void delete_note(int id);   
void edit_note(int id, const char *new_title, const char *new_content);





#endif 