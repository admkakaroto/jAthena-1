#ifndef _INT_GUILD_H_
#define _INT_GUILD_H_

int inter_guild_init();
int inter_guild_save();
int inter_guild_parse_frommap(int fd);
struct guild *inter_guild_search(int guild_id);
int inter_guild_mapif_init(int fd);

int inter_guild_leave(int guild_id,int account_id,int char_id);

void do_final_int_guild(void);

extern char guild_txt[1024];
extern char castle_txt[1024];

#endif
