/* announce.c */
FILE *go_cmd(ITEM *node, int *sock);
char *nextfield(register char *data, register char *field);
FILE *my_open(char *path);
int go_proxy(char *fpath, ITEM *node, int update);
int g_additem(GMENU *pm, ITEM *myitem);
int go_menu(GMENU *pm, ITEM *node, int update);
int g_searchtitle(GMENU *pm, int rev);
int gem(char *maintitle, ITEM *path, int update);
int valid_dirname(char *fname);
int copy_stamp(char *fpath, char *fname);
void atitle(void);
int load_paste(void);
int a_copyitem(char *fpath, char *title, char *owner);
//int a_menu(char *maintitle, char *path, int lastlevel, int mode); //todo: universe the usage
int AnnounceSelect(void);
int Announce(void);
int Log(void);
int XFile(void);
int HELP(void);
int user_gem(char *uid);
int user_allpost(char *uid);
void my_gem(void);
void my_allpost(void);

/* bbs.c */
void log_board(char *board, time_t usetime);
void log_board2(char *mode, time_t usetime);
void log_board3(char *mode, char *str, int *num);
void make_blist(void);
void make_bmlist(void);
void set_board(void);
void doent(int num, fileheader *ent);
int cmpbnames(char *bname, boardheader *brec);
int cmpfilename(fileheader *fhdr);
int cmpfmode(fileheader *fhdr);
int cmpfowner(fileheader *fhdr);
int do_select(int ent, fileheader *fhdr, char *direct);
int outgo_post(fileheader *fh, char *board);
void do_reply_title(int row, char *title);
int brdperm(char *brdname, char *userid);
int do_unanonymous_post(char *fpath);
int do_all_post(char *fpath);
int getindex(char *fpath, char *fname, int size);
int do_post(void);
int edit_post(int ent, fileheader *fhdr, char *direct);
int man(void);
int cite(int ent, fileheader *fhdr, char *direct);
int Cite_post(int ent, fileheader *fhdr, char *direct);
int Cite_posts(int ent, fileheader *fhdr, char *direct);
int edit_title(int ent, fileheader *fhdr, char *direct);
