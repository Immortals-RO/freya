// Copyright (c) Freya Development Team - Licensed under GNU GPL
// For more information, see License.txt in the main folder

#ifndef _STORAGE_H_
#define _STORAGE_H_

#include <mmo.h>

int storage_storageopen(struct map_session_data *sd);
void storage_storageadd(struct map_session_data *sd, short idx, int amount);
void storage_storageget(struct map_session_data *sd, short idx, int amount);
void storage_storageaddfromcart(struct map_session_data *sd, short idx, int amount);
void storage_storagegettocart(struct map_session_data *sd, short idx, int amount);
void storage_storageclose(struct map_session_data *sd);
int storage_guild_storagesave(struct map_session_data *sd);
int do_init_storage(void);
void do_final_storage(void);
struct storage *account2storage(int account_id);
struct storage *account2storage2(int account_id);
void storage_delete(int account_id);
int storage_storage_quit(struct map_session_data *sd);
int storage_storage_save(struct map_session_data *sd);

struct guild_storage *guild2storage(int guild_id);
int guild_storage_delete(int guild_id);
int storage_guild_storageopen(struct map_session_data *sd);
int guild_storage_additem(struct map_session_data *sd, struct guild_storage *stor, struct item *item_data, int amount);
int guild_storage_delitem(struct map_session_data *sd, struct guild_storage *stor, int n, int amount);
void storage_guild_storageadd(struct map_session_data *sd, short idx, int amount);
void storage_guild_storageget(struct map_session_data *sd, short idx, int amount);
void storage_guild_storageaddfromcart(struct map_session_data *sd, short idx, int amount);
void storage_guild_storagegettocart(struct map_session_data *sd, short idx, int amount);
void storage_guild_storageclose(struct map_session_data *sd);
int storage_guild_storage_quit(struct map_session_data *sd);

int storage_comp_item(const void *_i1, const void *_i2);
//int storage_comp_item(const struct item* i1, const struct item* i2);
void sortage_sortitem(struct storage* stor);
void sortage_gsortitem(struct guild_storage* gstor);

#endif // _STORAGE_H_
