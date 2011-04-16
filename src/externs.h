/* File: externs.h */

/* Purpose: extern declarations (variables and functions) */

/*
 * Note that some files have their own header files
 * (z-virt.h, z-util.h, z-form.h, term.h, random.h)
 */


/*
 * Automatically generated "variable" declarations
 */

extern int max_macrotrigger;
extern char *macro_template;
extern char *macro_modifier_chr;
extern char *macro_modifier_name[MAX_MACRO_MOD];
extern char *macro_trigger_name[MAX_MACRO_TRIG];
extern char *macro_trigger_keycode[2][MAX_MACRO_TRIG];

/* tables.c */
extern s16b ddd[9];
extern s16b ddx[10];
extern s16b ddy[10];
extern s16b ddx_ddd[9];
extern s16b ddy_ddd[9];
extern char hexsym[16];
extern byte adj_val_min[];
extern byte adj_val_max[];
extern byte adj_mag_study[];
extern byte adj_mag_mana[];
extern byte adj_mag_fail[];
extern byte adj_mag_stat[];
extern byte adj_chr_gold[];
extern byte adj_int_dev[];
extern byte adj_wis_sav[];
extern byte adj_dex_dis[];
extern byte adj_int_dis[];
extern byte adj_dex_ta[];
extern byte adj_str_td[];
extern byte adj_dex_th[];
extern byte adj_str_th[];
extern byte adj_str_wgt[];
extern byte adj_str_hold[];
extern byte adj_str_dig[];
extern byte adj_str_blow[];
extern byte adj_dex_blow[];
extern byte adj_dex_safe[];
extern byte adj_con_fix[];
extern byte adj_con_mhp[];
extern byte blows_table[12][12];
extern s16b arena_monsters[MAX_ARENA_MONS];
extern byte extract_energy[300];
extern s32b player_exp[PY_MAX_LEVEL];
extern player_sex sex_info[MAX_SEXES];
extern deity_type deity_info_init[MAX_GODS_INIT];
extern cptr color_names[16];
extern cptr stat_names[6];
extern cptr stat_names_reduced[6];
extern cptr window_flag_desc[32];
extern option_type option_info[];
extern cptr chaos_patrons[MAX_PATRON];
extern int chaos_stats[MAX_PATRON];
extern int chaos_rewards[MAX_PATRON][20];
extern martial_arts bear_blows[MAX_BEAR];
extern martial_arts ma_blows[MAX_MA];
extern magic_power mindcraft_powers[MAX_MINDCRAFT_POWERS];
extern magic_power necro_powers[MAX_NECRO_POWERS];
extern magic_power mimic_powers[MAX_MIMIC_POWERS];
extern magic_power symbiotic_powers[MAX_SYMBIOTIC_POWERS];
extern cptr deity_rarity[2];
extern cptr deity_niceness[10];
extern cptr deity_standing[11];
extern move_info_type move_info[9];
extern tactic_info_type tactic_info[9];
extern activation activation_info[MAX_T_ACT];
extern inscription_info_type inscription_info[MAX_INSCRIPTIONS];
extern cptr sense_desc[];
extern flags_group flags_groups[MAX_FLAG_GROUP];
extern power_type powers_type_init[POWER_MAX_INIT];
extern quest_type quest_info[MAX_Q_IDX_INIT];
extern cptr artifact_names_list;
extern monster_power monster_powers[96];
extern tval_desc tval_descs[];
extern between_exit between_exits[MAX_BETWEEN_EXITS];
extern int month_day[9];
extern cptr month_name[9];
extern cli_comm *cli_info;
extern int cli_total;
extern quest_type quest_init_tome[MAX_Q_IDX_INIT];
extern int max_body_part[BODY_MAX];
extern gf_name_type gf_names[];


/* variable.c */
extern cptr copyright[5];
extern byte version_major;
extern byte version_minor;
extern byte version_patch;
extern byte version_extra;
extern byte sf_major;
extern byte sf_minor;
extern byte sf_patch;
extern byte sf_extra;
extern u32b sf_xtra;
extern u32b sf_when;
extern u16b sf_lives;
extern u16b sf_saves;
extern u32b vernum; /* Version flag */
extern bool_ arg_fiddle;
extern bool_ arg_wizard;
extern bool_ arg_sound;
extern bool_ arg_graphics;
extern bool_ arg_force_original;
extern bool_ arg_force_roguelike;
extern bool_ arg_bigtile;
extern bool_ character_generated;
extern bool_ character_dungeon;
extern bool_ character_loaded;
extern bool_ character_saved;
extern bool_ character_icky;
extern bool_ character_xtra;
extern u32b seed_flavor;
extern s16b command_cmd;
extern s16b command_arg;
extern s16b command_rep;
extern s16b command_dir;
extern s16b command_wrk;
extern s16b command_new;
extern s32b energy_use;
extern s16b choose_default;
extern bool_ create_up_stair;
extern bool_ create_down_stair;
extern bool_ create_up_shaft;
extern bool_ create_down_shaft;
extern bool_ msg_flag;
extern bool_ alive;
extern bool_ death;
extern s16b running;
extern s16b resting;
extern s16b cur_hgt;
extern s16b cur_wid;
extern s16b dun_level;
extern s16b old_dun_level;
extern s16b num_repro;
extern s16b object_level;
extern s16b monster_level;
extern s32b turn;
extern s32b old_turn;
extern bool_ wizard;
extern bool_ use_sound;
extern bool_ use_graphics;
extern bool_ use_bigtile;
extern byte graphics_mode;
extern u16b total_winner;
extern u16b has_won;
extern u16b noscore;
extern s16b signal_count;
extern bool_ inkey_base;
extern bool_ inkey_xtra;
extern bool_ inkey_scan;
extern bool_ inkey_flag;
extern s16b coin_type;
extern bool_ opening_chest;
extern bool_ shimmer_monsters;
extern bool_ shimmer_objects;
extern bool_ repair_monsters;
extern bool_ repair_objects;
extern s16b inven_nxt;
extern s16b inven_cnt;
extern s16b equip_cnt;
extern s16b o_max;
extern s16b o_cnt;
extern s16b m_max;
extern s16b m_cnt;
extern s16b hack_m_idx;
extern s16b hack_m_idx_ii;
extern int total_friends;
extern s32b total_friend_levels;
extern int leaving_quest;
extern bool_ multi_rew;
extern char summon_kin_type;
extern bool_ hack_mind;
extern bool_ hack_corruption;
extern bool_ is_autosave;
extern int artifact_bias;
extern FILE *text_out_file;
extern void (*text_out_hook)(byte a, cptr str);
extern int text_out_wrap;
extern int text_out_indent;
extern int highscore_fd;
extern bool_ show_inven_graph;
extern bool_ show_store_graph;
extern bool_ show_equip_graph;
extern bool_ rogue_like_commands;
extern bool_ quick_messages;
extern bool_ other_query_flag;
extern bool_ carry_query_flag;
extern bool_ always_pickup;
extern bool_ prompt_pickup_heavy;
extern bool_ always_repeat;
extern bool_ use_old_target;
extern bool_ depth_in_feet;
extern bool_ hilite_player;
extern bool_ ring_bell;
extern bool_ find_ignore_stairs;
extern bool_ find_ignore_doors;
extern bool_ find_cut;
extern bool_ find_examine;
extern bool_ disturb_near;
extern bool_ disturb_move;
extern bool_ disturb_panel;
extern bool_ disturb_detect;
extern bool_ disturb_state;
extern bool_ disturb_minor;
extern bool_ disturb_other;
extern bool_ avoid_abort;
extern bool_ avoid_shimmer;
extern bool_ avoid_other;
extern bool_ flush_disturb;
extern bool_ flush_failure;
extern bool_ flush_command;
extern bool_ fresh_before;
extern bool_ fresh_after;
extern bool_ fresh_message;
extern bool_ alert_hitpoint;
extern bool_ alert_failure;
extern bool_ view_yellow_lite;
extern bool_ view_bright_lite;
extern bool_ view_granite_lite;
extern bool_ view_special_lite;
extern bool_ plain_descriptions;
extern bool_ stupid_monsters;
extern bool_ auto_destroy;
extern bool_ wear_confirm;
extern bool_ confirm_stairs;
extern bool_ disturb_pets;
extern bool_ view_perma_grids;
extern bool_ view_torch_grids;
extern bool_ monster_lite;
extern bool_ flow_by_sound;
extern bool_ track_follow;
extern bool_ track_target;
extern bool_ stack_allow_items;
extern bool_ stack_allow_wands;
extern bool_ stack_force_notes;
extern bool_ stack_force_costs;
extern bool_ view_reduce_lite;
extern bool_ view_reduce_view;
extern bool_ auto_haggle;
extern bool_ auto_scum;
extern bool_ expand_look;
extern bool_ expand_list;
extern bool_ dungeon_align;
extern bool_ dungeon_stair;
extern bool_ smart_learn;
extern bool_ smart_cheat;
extern bool_ show_labels;
extern bool_ show_weights;
extern bool_ show_choices;
extern bool_ show_details;
extern bool_ testing_stack;
extern bool_ testing_carry;
extern bool_ cheat_peek;
extern bool_ cheat_hear;
extern bool_ cheat_room;
extern bool_ cheat_xtra;
extern bool_ cheat_know;
extern bool_ cheat_live;
extern bool_ last_words;              /* Zangband options */
extern bool_ speak_unique;
extern bool_ small_levels;
extern bool_ empty_levels;
extern bool_ always_small_level;
extern bool_ player_symbols;
extern byte hitpoint_warn;
extern byte delay_factor;
extern s16b autosave_freq;
extern bool_ autosave_t;
extern bool_ autosave_l;
extern s16b feeling;
extern s16b rating;
extern bool_ good_item_flag;
extern bool_ closing_flag;
extern s16b max_panel_rows, max_panel_cols;
extern s16b panel_row_min, panel_row_max;
extern s16b panel_col_min, panel_col_max;
extern s16b panel_col_prt, panel_row_prt;
extern byte feat_wall_outer;
extern byte feat_wall_inner;
extern s16b floor_type[100];
extern s16b fill_type[100];
extern s16b py;
extern s16b px;
extern s16b target_who;
extern s16b target_col;
extern s16b target_row;
extern s16b health_who;
extern s16b monster_race_idx;
extern s16b monster_ego_idx;
extern object_type *tracked_object;
extern int player_uid;
extern int player_euid;
extern int player_egid;
extern char player_name[32];
extern char player_base[32];
extern char died_from[80];
extern char history[4][60];
extern char savefile[1024];
extern s16b lite_n;
extern s16b lite_y[LITE_MAX];
extern s16b lite_x[LITE_MAX];
extern s16b view_n;
extern byte view_y[VIEW_MAX];
extern byte view_x[VIEW_MAX];
extern s16b temp_n;
extern byte temp_y[TEMP_MAX];
extern byte temp_x[TEMP_MAX];
extern s16b macro__num;
extern cptr *macro__pat;
extern cptr *macro__act;
extern bool_ *macro__cmd;
extern char *macro__buf;
extern s16b quark__num;
extern cptr *quark__str;
extern u16b message__next;
extern u16b message__last;
extern u16b message__head;
extern u16b message__tail;
extern u16b *message__ptr;
extern byte *message__color;
extern byte *message__type;
extern u16b *message__count;
extern char *message__buf;
extern u32b option_flag[8];
extern u32b option_mask[8];
extern u32b window_flag[ANGBAND_TERM_MAX];
extern u32b window_mask[ANGBAND_TERM_MAX];
extern term *angband_term[ANGBAND_TERM_MAX];
extern char angband_term_name[ANGBAND_TERM_MAX][80];
extern byte angband_color_table[256][4];
extern char angband_sound_name[SOUND_MAX][16];
extern cave_type *cave[MAX_HGT];
extern object_type *o_list;
extern monster_type *m_list;
extern monster_type *km_list;
extern u16b max_real_towns;
extern u16b max_towns;
extern town_type *town_info;
extern s16b alloc_kind_size;
extern alloc_entry *alloc_kind_table;
extern bool_ alloc_kind_table_valid;
extern s16b alloc_race_size;
extern alloc_entry *alloc_race_table;
extern byte misc_to_attr[256];
extern char misc_to_char[256];
extern byte tval_to_attr[128];
extern char tval_to_char[128];
extern cptr keymap_act[KEYMAP_MODES][256];
extern player_type p_body;
extern player_type *p_ptr;
extern player_sex *sp_ptr;
extern player_race *rp_ptr;
extern player_race_mod *rmp_ptr;
extern player_class *cp_ptr;
extern player_spec *spp_ptr;
extern u32b alchemist_known_egos[32];
extern alchemist_recipe *alchemist_recipes;
extern u32b alchemist_known_artifacts[6];
extern u32b alchemist_gained;
extern s16b player_hp[PY_MAX_LEVEL];
extern header *al_head;
extern char *al_name;
extern artifact_select_flag *a_select_flags;

extern header *ab_head;
extern ability_type *ab_info;
extern char *ab_name;
extern char *ab_text;

extern header *s_head;
extern skill_type *s_info;
extern char *s_name;
extern char *s_text;

extern header *v_head;
extern vault_type *v_info;
extern char *v_name;
extern char *v_text;
extern header *f_head;
extern feature_type *f_info;
extern char *f_name;
extern char *f_text;
extern header *k_head;
extern object_kind *k_info;
extern char *k_name;
extern char *k_text;
extern header *a_head;
extern artifact_type *a_info;
extern char *a_name;
extern char *a_text;
extern header *e_head;
extern ego_item_type *e_info;
extern char *e_name;
extern char *e_text;
extern header *ra_head;
extern randart_part_type *ra_info;
extern randart_gen_type ra_gen[30];
extern header *r_head;
extern monster_race *r_info;
extern char *r_name;
extern char *r_text;
extern header *re_head;
extern monster_ego *re_info;
extern char *re_name;
extern header *d_head;
extern dungeon_info_type *d_info;
extern char *d_name;
extern char *d_text;
extern header *c_head;
extern player_class *class_info;
extern char *c_name;
extern char *c_text;
extern meta_class_type *meta_class_info;
extern header *rp_head;
extern player_race *race_info;
extern char *rp_name;
extern char *rp_text;
extern header *rmp_head;
extern player_race_mod *race_mod_info;
extern char *rmp_name;
extern char *rmp_text;
extern header *t_head;
extern trap_type *t_info;
extern char *t_name;
extern char *t_text;
extern header *wf_head;
extern wilderness_type_info *wf_info;
extern char *wf_name;
extern char *wf_text;
extern int wildc2i[256];
extern header *st_head;
extern store_info_type *st_info;
extern char *st_name;
extern header *ba_head;
extern store_action_type *ba_info;
extern char *ba_name;
extern header *ow_head;
extern owner_type *ow_info;
extern char *ow_name;
extern header *set_head;
extern set_type *set_info;
extern char *set_name;
extern char *set_text;
extern cptr ANGBAND_SYS;
extern cptr ANGBAND_KEYBOARD;
extern cptr ANGBAND_GRAF;
extern cptr ANGBAND_DIR;
extern cptr ANGBAND_DIR_APEX;
extern cptr ANGBAND_DIR_CORE;
extern cptr ANGBAND_DIR_DNGN;
extern cptr ANGBAND_DIR_DATA;
extern cptr ANGBAND_DIR_EDIT;
extern cptr ANGBAND_DIR_FILE;
extern cptr ANGBAND_DIR_HELP;
extern cptr ANGBAND_DIR_INFO;
extern cptr ANGBAND_DIR_MODULES;
extern cptr ANGBAND_DIR_NOTE;
extern cptr ANGBAND_DIR_SAVE;
extern cptr ANGBAND_DIR_SCPT;
extern cptr ANGBAND_DIR_PATCH;
extern cptr ANGBAND_DIR_PREF;
extern cptr ANGBAND_DIR_USER;
extern cptr ANGBAND_DIR_XTRA;
extern cptr ANGBAND_DIR_CMOV;
extern char pref_tmp_value[8];
extern bool_ item_tester_full;
extern byte item_tester_tval;
extern bool_ (*item_tester_hook)(object_type *o_ptr);
extern bool_ (*ang_sort_comp)(vptr u, vptr v, int a, int b);
extern void (*ang_sort_swap)(vptr u, vptr v, int a, int b);
extern bool_ (*get_mon_num_hook)(int r_idx);
extern bool_ (*get_mon_num2_hook)(int r_idx);
extern bool_ (*get_obj_num_hook)(int k_idx);
extern bool_ monk_armour_aux;
extern bool_ monk_notify_aux;
extern u16b max_wild_x;
extern u16b max_wild_y;
extern wilderness_map **wild_map;
extern u16b old_max_s_idx;
extern u16b max_ab_idx;
extern u16b max_s_idx;
extern u16b max_al_idx;
extern u16b max_r_idx;
extern u16b max_re_idx;
extern u16b max_k_idx;
extern u16b max_v_idx;
extern u16b max_f_idx;
extern u16b max_a_idx;
extern u16b max_e_idx;
extern u16b max_ra_idx;
extern u16b max_d_idx;
extern u16b max_o_idx;
extern u16b max_m_idx;
extern u16b max_t_idx;
extern u16b max_rp_idx;
extern u16b max_c_idx;
extern u16b max_mc_idx;
extern u16b max_rmp_idx;
extern u16b max_st_idx;
extern u16b max_ba_idx;
extern u16b max_ow_idx;
extern u16b max_wf_idx;
extern s16b max_set_idx;
extern int init_flags;
extern bool_ ambush_flag;
extern bool_ fate_flag;
extern s16b no_breeds;
extern bool_ carried_monster_hit;
extern random_artifact random_artifacts[MAX_RANDARTS];
extern s32b RANDART_WEAPON;
extern s32b RANDART_ARMOR;
extern s32b RANDART_JEWEL;
extern s16b bounties[MAX_BOUNTIES][2];
extern random_spell random_spells[MAX_SPELLS];
extern s16b spell_num;
extern rune_spell rune_spells[MAX_RUNES];
extern s16b rune_num;
extern fate fates[MAX_FATES];
extern byte vanilla_town;
extern byte dungeon_type;
extern s16b *max_dlv;
extern u32b total_bounties;
extern s16b doppleganger;
extern bool_ generate_encounter;
extern bool_ autoroll;
extern bool_ point_based;
extern bool_ maximize, preserve, special_lvls, ironman_rooms;
extern bool_ inventory_no_move;
extern bool_ take_notes, auto_notes;
extern bool_ *m_allow_special;
extern bool_ *k_allow_special;
extern bool_ *a_allow_special;
extern bool_ rand_birth;
extern bool_ fast_autoroller;
extern bool_ joke_monsters;
extern bool_ munchkin_multipliers;
extern bool_ center_player;
extern s16b plots[MAX_PLOTS];
extern random_quest random_quests[MAX_RANDOM_QUEST];
extern bool_ exp_need;
extern bool_ autoload_old_colors;
extern bool_ fate_option;
extern bool_ *special_lvl[MAX_DUNGEON_DEPTH];
extern bool_ generate_special_feeling;
extern bool_ auto_more;
extern u32b dungeon_flags1;
extern u32b dungeon_flags2;
extern birther previous_char;
extern hist_type *bg;
extern int max_bg_idx;
extern power_type *powers_type;
extern s16b power_max;
extern s32b extra_savefile_parts;
extern s16b max_q_idx;
extern quest_type *quest;
extern bool_ player_char_health;
extern s16b max_spells;
extern spell_type *school_spells;
extern s16b max_schools;
extern school_type *schools;
extern int project_time;
extern s32b project_time_effect;
extern effect_type effects[MAX_EFFECTS];
extern char gen_skill_basem[MAX_SKILLS];
extern u32b gen_skill_base[MAX_SKILLS];
extern char gen_skill_modm[MAX_SKILLS];
extern s16b gen_skill_mod[MAX_SKILLS];
extern bool_ linear_stats;
extern int max_bact;
extern s16b max_corruptions;
extern bool_ option_ingame_help;
extern bool_ automatizer_enabled;
extern s16b last_teleportation_y;
extern s16b last_teleportation_x;
extern cptr game_module;
extern s32b VERSION_MAJOR;
extern s32b VERSION_MINOR;
extern s32b VERSION_PATCH;
extern s32b max_plev;
extern s32b DUNGEON_DEATH;
extern deity_type *deity_info;
extern s32b max_gods;
extern timer_type *gl_timers;
extern const char *get_version_string();

/* plots.c */
extern FILE *hook_file;
extern bool_ check_hook(int h_idx);
extern void wipe_hooks(void);
extern void dump_hooks(int h_idx);
extern void init_hooks(void);
extern hooks_chain* add_hook(int h_idx, hook_type hook, cptr name);
extern void add_hook_script(int h_idx, char *script, cptr name);
extern void del_hook(int h_idx, hook_type hook);
extern void del_hook_name(int h_idx, cptr name);
extern s32b get_next_arg(char *fmt);
extern int process_hooks_restart;
extern hook_return process_hooks_return[20];
extern bool_ process_hooks_ret(int h_idx, char *ret, char *fmt, ...);
extern bool_ process_hooks(int h_idx, char *fmt, ...);

/* help.c */
extern void ingame_help(bool_ enable);

/* birth.c */
extern void print_desc_aux(cptr txt, int y, int x);
extern void save_savefile_names(void);
extern bool_ no_begin_screen;
extern bool_ begin_screen(void);
extern errr init_randart(void);
extern void get_height_weight(void);
extern void player_birth(void);

/* cave.c */
extern int distance(int y1, int x1, int y2, int x2);
extern bool_ los(int y1, int x1, int y2, int x2);
extern bool_ cave_valid_bold(int y, int x);
extern bool_ no_lite(void);
#ifdef USE_TRANSPARENCY
#ifdef USE_EGO_GRAPHICS
extern void map_info(int y, int x, byte *ap, char *cp, byte *tap, char *tcp, byte *eap, char *ecp);
#else /* USE_EGO_GRAPHICS */
extern void map_info(int y, int x, byte *ap, char *cp, byte *tap, char *tcp);
#endif /* USE_EGO_GRAPHICS */
#else /* USE_TRANSPARENCY */
extern void map_info(int y, int x, byte *ap, char *cp);
#endif /* USE_TRANSPARENCY */
extern void map_info_default(int y, int x, byte *ap, char *cp);
extern void move_cursor_relative(int row, int col);
extern void print_rel(char c, byte a, int y, int x);
extern void note_spot(int y, int x);
extern void lite_spot(int y, int x);
extern void prt_map(void);
extern void display_map(int *cy, int *cx);
extern void do_cmd_view_map(void);
extern errr vinfo_init(void);
extern void forget_view(void);
extern void update_view(void);
extern void forget_mon_lite(void);
extern void update_mon_lite(void);
extern void forget_flow(void);
extern void update_flow(void);
extern void map_area(void);
extern void wiz_lite(void);
extern void wiz_lite_extra(void);
extern void wiz_dark(void);
extern void cave_set_feat(int y, int x, int feat);
extern void place_floor(int y, int x);
extern void place_floor_convert_glass(int y, int x);
extern void place_filler(int y, int x);
extern void mmove2(int *y, int *x, int y1, int x1, int y2, int x2);
extern bool_ projectable(int y1, int x1, int y2, int x2);
extern void scatter(int *yp, int *xp, int y, int x, int d, int m);
extern void health_track(int m_idx);
extern void monster_race_track(int r_idx, int ego);
extern void object_track(object_type *o_ptr);
extern void disturb(int stop_search, int flush_output);
extern int is_quest(int level);
extern int random_quest_number(void);
extern int new_effect(int type, int dam, int time, int cy, int cx, int rad, s32b flags);

/* cmovie.c */
extern void cmovie_init_second(void);
extern s16b do_play_cmovie(cptr cmov_file);
extern void do_record_cmovie(cptr cmovie);
extern void do_stop_cmovie(void);
extern void do_start_cmovie(void);
extern void cmovie_clean_line(int y, char *abuf, char *cbuf);
extern void cmovie_record_line(int y);
extern void do_cmovie_insert(void);

/* cmd1.c */
extern void attack_special(monster_type *m_ptr, s32b special, int dam);
extern bool_ test_hit_fire(int chance, int ac, int vis);
extern bool_ test_hit_norm(int chance, int ac, int vis);
extern s16b critical_shot(int weight, int plus, int dam, int skill);
extern s16b critical_norm(int weight, int plus, int dam, int weapon_tval, bool_ *done_crit);
extern s16b tot_dam_aux(object_type *o_ptr, int tdam, monster_type *m_ptr, s32b *special);
extern void search(void);
extern void carry(int pickup);
extern void py_attack(int y, int x, int max_blow);
extern bool_ player_can_enter(byte feature);
extern void move_player(int dir, int do_pickup, bool_ disarm);
extern void move_player_aux(int dir, int do_pickup, int run, bool_ disarm);
extern void run_step(int dir);
extern void step_effects(int y, int x, int do_pickup);
extern void do_cmd_pet(void);
extern bool_ do_cmd_integrate_body(void);
extern bool_ do_cmd_leave_body(bool_ drop_body);
extern bool_ execute_inscription(byte i, byte y, byte x);
extern void do_cmd_engrave(void);
extern void do_spin(void);

/* cmd2.c */
extern byte show_monster_inven(int m_idx, int *monst_list);
extern int breakage_chance(object_type *o_ptr);
extern void do_cmd_go_up(void);
extern void do_cmd_go_down(void);
extern void do_cmd_search(void);
extern void do_cmd_toggle_search(void);
extern void do_cmd_open(void);
extern void do_cmd_close(void);
extern void do_cmd_chat(void);
extern void do_cmd_give(void);
extern bool_ do_cmd_tunnel_aux(int y, int x, int dir);
extern void do_cmd_tunnel(void);
extern void do_cmd_disarm(void);
extern void do_cmd_disarm(void);
extern void do_cmd_bash(void);
extern void do_cmd_alter(void);
extern void do_cmd_spike(void);
extern void do_cmd_walk(int pickup, bool_ disarm);
extern void do_cmd_stay(int pickup);
extern void do_cmd_run(void);
extern void do_cmd_rest(void);
extern int get_shooter_mult(object_type *o_ptr);
extern void do_cmd_fire(void);
extern void do_cmd_throw(void);
extern void do_cmd_boomerang(void);
extern void do_cmd_unwalk(void);
extern void do_cmd_immovable_special(void);
extern void fetch(int dir, int wgt, bool_ require_los);
extern void do_cmd_sacrifice(void);
extern void do_cmd_create_artifact(object_type *q_ptr);
extern void do_cmd_steal(void);
extern void do_cmd_racial_power(void);

/* cmd3.c */
extern void do_cmd_html_dump(void);
extern void cli_add(cptr active, cptr trigger, cptr descr);
extern void do_cmd_cli(void);
extern void do_cmd_cli_help(void);
extern void do_cmd_inven(void);
extern void do_cmd_equip(void);
extern void do_cmd_wield(void);
extern void do_cmd_takeoff(void);
extern void do_cmd_drop(void);
extern void do_cmd_destroy(void);
extern void do_cmd_observe(void);
extern void do_cmd_uninscribe(void);
extern void do_cmd_inscribe(void);
extern void do_cmd_refill(void);
extern void do_cmd_target(void);
extern void do_cmd_look(void);
extern void do_cmd_locate(void);
extern void do_cmd_query_symbol(void);
extern bool_ do_cmd_sense_grid_mana(void);
extern bool_ research_mon(void);
extern s32b portable_hole_weight(void);
extern void set_portable_hole_weight(void);
extern void do_cmd_portable_hole(void);

/* cmd4.c */
extern bool_ change_option(cptr name, bool_ value);
extern void macro_recorder_start(void);
extern void macro_recorder_add(char c);
extern void macro_recorder_stop(void);
extern void do_cmd_macro_recorder(void);
extern void do_cmd_redraw(void);
extern void do_cmd_change_name(void);
extern void do_cmd_message_one(void);
extern void do_cmd_messages(void);
extern void do_cmd_options(void);
extern void do_cmd_pref(void);
extern void do_cmd_macros(void);
extern void do_cmd_visuals(void);
extern void do_cmd_colors(void);
extern void do_cmd_note(void);
extern void do_cmd_version(void);
extern void do_cmd_feeling(void);
extern void do_cmd_load_screen(void);
extern void do_cmd_save_screen(void);
extern void do_cmd_knowledge(void);
extern void plural_aux(char * Name);
extern void do_cmd_checkquest(void);
extern void do_cmd_change_tactic(int i);
extern void do_cmd_change_movement(int i);
extern void do_cmd_time(void);
extern void do_cmd_options_aux(int page, cptr info, bool_ read_only);


/* cmd5.c */
extern bool_ is_magestaff(void);
extern void calc_magic_bonus(void);
extern void do_cmd_browse_aux(object_type *o_ptr);
extern void do_cmd_browse(void);
extern void do_cmd_cast(void);
extern void do_cmd_pray(void);
extern void do_cmd_rerate(void);
extern void corrupt_player(void);
extern bool_ item_tester_hook_armour(object_type *o_ptr);
extern void fetch(int dir, int wgt, bool_ require_los);
extern void do_poly_self(void);
extern void brand_weapon(int brand_type);
extern cptr symbiote_name(bool_ capitalize);
extern int use_symbiotic_power(int r_idx, bool_ great, bool_ only_number, bool_ no_cost);
extern s32b get_school_spell(cptr do_what, cptr check_fct, s16b force_book);
extern void do_cmd_copy_spell(void);
extern void cast_school_spell(void);
extern void browse_school_spell(int book, int pval, object_type *o_ptr);
extern int find_spell(char *name);
extern bool_ is_school_book(object_type *o_ptr);

/* cmd6.c */
extern void set_stick_mode(object_type *o_ptr);
extern void unset_stick_mode(void);
extern void do_cmd_eat_food(void);
extern void do_cmd_quaff_potion(void);
extern void do_cmd_read_scroll(void);
extern void do_cmd_aim_wand(void);
extern void do_cmd_use_staff(void);
extern void do_cmd_zap_rod(void);
extern const char *activation_aux(object_type *o_ptr, bool_ desc, int item);
extern void do_cmd_activate(void);
extern void do_cmd_rerate(void);
extern void do_cmd_cut_corpse(void);
extern void do_cmd_cure_meat(void);
extern void do_cmd_drink_fountain(void);
extern void do_cmd_fill_bottle(void);

/* cmd7.c */
extern void do_cmd_create_boulder(void);
extern int rune_exec(rune_spell *spell, int cost);
extern void necro_info(char *p, int power);
extern void mindcraft_info(char *p, int power);
extern void symbiotic_info(char *p, int power);
extern void mimic_info(char *p, int power);
extern random_spell* select_spell(bool_ quick);
extern void cast_magic_spell(int spell, byte level);
extern void do_cmd_summoner(void);
extern void do_cmd_mindcraft(void);
extern void do_cmd_mimic(void);
extern void do_cmd_blade(void);
extern void use_ability_blade(void);
extern bool_ alchemist_exists(int tval, int sval, int ego, int artifact);
extern void rod_tip_extract(object_type *o_ptr);
extern void do_cmd_toggle_artifact(object_type *o_ptr);
extern bool_ alchemist_items_check(int tval, int sval, int ego, int tocreate, bool_ message);
extern void alchemist_display_recipe(int tval, int sval, int ego);
extern void alchemist_recipe_book(void);
extern int alchemist_recipe_select(int *tval, int sval, int ego, bool_ recipe);
extern int alchemist_learn_object(object_type *o_ptr);
extern void alchemist_gain_level(int lev);
extern void do_cmd_alchemist(void);
extern void do_cmd_beastmaster(void);
extern void do_cmd_powermage(void);
extern void do_cmd_possessor(void);
extern void do_cmd_archer(void);
extern void do_cmd_set_piercing(void);
extern void do_cmd_necromancer(void);
extern void do_cmd_unbeliever(void);
extern void cast_daemon_spell(int spell, byte level);
extern void do_cmd_unbeliever(void);
extern void do_cmd_runecrafter(void);
extern void do_cmd_symbiotic(void);
extern s32b sroot(s32b n);

/* dungeon.c */
extern byte value_check_aux1(object_type *o_ptr);
extern byte value_check_aux1_magic(object_type *o_ptr);
extern byte value_check_aux2(object_type *o_ptr);
extern byte value_check_aux2_magic(object_type *o_ptr);
extern void play_game(bool_ new_game);
extern void sense_inventory();

/* files.c */
extern void html_screenshot(cptr name);
extern void help_file_screenshot(cptr name);
extern void player_flags(u32b* f1, u32b* f2, u32b* f3, u32b* f4, u32b* f5, u32b* esp);
extern void wipe_saved(void);
extern s16b tokenize(char *buf, s16b num, char **tokens, char delim1, char delim2);
extern void display_player(int mode);
extern cptr describe_player_location(void);
extern errr file_character(cptr name, bool_ full);
extern errr process_pref_file_aux(char *buf);
extern errr process_pref_file(cptr name);
extern void read_times(void);
extern bool_ txt_to_html(cptr head, cptr food, cptr base, cptr ext, bool_ force, bool_ recur);
extern bool_ show_file(cptr name, cptr what, int line, int mode);
extern void do_cmd_help(void);
extern void process_player_base(void);
extern void process_player_name(bool_ sf);
extern void get_name(void);
extern void do_cmd_suicide(void);
extern void do_cmd_save_game(void);
extern long total_points(void);
extern void display_scores(int from, int to);
extern errr predict_score(void);
extern void close_game(void);
extern void signals_ignore_tstp(void);
extern void signals_handle_tstp(void);
extern void signals_init(void);
extern errr get_rnd_line(char * file_name, char * output);
extern char *get_line(char* fname, cptr fdir, char *linbuf, int line);
extern void do_cmd_knowledge_corruptions(void);
extern void race_legends(void);
extern void show_highclass(int building);
extern errr get_xtra_line(char * file_name, monster_type *m_ptr, char * output);

/* gen_maze.c */
extern bool_ level_generate_maze(cptr name);

/* gen_life.c */
extern bool_ level_generate_life(cptr name);
extern void evolve_level(bool_ noise);

/* generate.c */
extern bool_ new_player_spot(int branch);
extern void add_level_generator(cptr name, bool_ (*generator)(cptr), bool_ stairs, bool_ monsters, bool_ objects, bool_ miscs);
extern bool_ level_generate_dungeon(cptr name);
extern bool_ generate_fracave(int y0, int x0,int xsize,int ysize,int cutoff,bool_ light,bool_ room);
extern void generate_hmap(int y0, int x0,int xsiz,int ysiz,int grd,int roug,int cutoff);
extern bool_ room_alloc(int x,int y,bool_ crowded,int by0,int bx0,int *xx,int *yy);
extern void generate_grid_mana(void);
extern byte calc_dungeon_type(void);
extern void generate_cave(void);
extern void build_rectangle(int y1, int x1, int y2, int x2, int feat, int info);


/* wild.c */
extern int generate_area(int y, int x, bool_ border, bool_ corner, bool_ refresh);
extern void wilderness_gen(int refresh);
extern void wilderness_gen_small(void);
extern void reveal_wilderness_around_player(int y, int x, int h, int w);
extern void town_gen(int t_idx);


/* init1.c */
extern int color_char_to_attr(char c);
extern byte conv_color[16];
extern errr init_player_info_txt(FILE *fp, char *buf);
extern errr init_ab_info_txt(FILE *fp, char *buf);
extern errr init_s_info_txt(FILE *fp, char *buf);
extern errr init_set_info_txt(FILE *fp, char *buf);
extern errr init_v_info_txt(FILE *fp, char *buf, bool_ start);
extern errr init_f_info_txt(FILE *fp, char *buf);
extern errr init_k_info_txt(FILE *fp, char *buf);
extern errr init_a_info_txt(FILE *fp, char *buf);
extern errr init_al_info_txt(FILE *fp, char *buf);
extern errr init_ra_info_txt(FILE *fp, char *buf);
extern errr init_e_info_txt(FILE *fp, char *buf);
extern errr init_r_info_txt(FILE *fp, char *buf);
extern errr init_re_info_txt(FILE *fp, char *buf);
extern errr grab_one_dungeon_flag(u32b *flags1, u32b *flags2, cptr what);
extern errr init_d_info_txt(FILE *fp, char *buf);
extern errr init_t_info_txt(FILE *fp, char *buf);
extern errr init_ba_info_txt(FILE *fp, char *buf);
extern errr init_st_info_txt(FILE *fp, char *buf);
extern errr init_ow_info_txt(FILE *fp, char *buf);
extern errr init_wf_info_txt(FILE *fp, char *buf);
extern bool_ process_dungeon_file_full;
extern errr process_dungeon_file(cptr full_text, cptr name, int *yval, int *xval, int ymax, int xmax, bool_ init);

/* init2.c */
extern void init_corruptions(s16b new_size);
extern void init_spells(s16b new_size);
extern void init_schools(s16b new_size);
extern void reinit_gods(s16b new_size);
extern void reinit_quests(s16b new_size);
extern void reinit_powers_type(s16b new_size);
extern void create_stores_stock(int t);
extern errr init_v_info(void);
extern void init_file_paths(char *path);
extern void init_angband(void);
extern errr init_buildings(void);
extern s16b error_idx;
extern s16b error_line;
extern u32b fake_name_size;
extern u32b fake_text_size;

/* loadsave.c */
extern void register_savefile(int num);
extern bool_ file_exist(char *buf);
extern s16b rd_variable(void);
extern void wr_variable(s16b *var);
extern void wr_scripts(void);
extern bool_ load_dungeon(char *ext);
extern void save_dungeon(void);
extern bool_ save_player(void);
extern bool_ load_player(void);
extern errr rd_savefile_new(void);
extern void load_number_key(char *key, u32b *val);
extern void save_number_key(char *key, u32b val);

/* melee1.c */
/* melee2.c */
extern int monst_spell_monst_spell;
extern bool_ mon_take_hit_mon(int s_idx, int m_idx, int dam, bool_ *fear, cptr note);
extern int check_hit2(int power, int level, int ac);
extern bool_ carried_make_attack_normal(int r_idx);
extern bool_ make_attack_normal(int m_idx, byte divis);
extern bool_ make_attack_spell(int m_idx);
extern void process_monsters(void);
extern void curse_equipment(int chance, int heavy_chance);
extern void curse_equipment_dg(int chance, int heavy_chance);

/* monster1.c */
extern void screen_roff(int r_idx, int ego, int remember);
extern void display_roff(int r_idx, int ego);
extern void monster_description_out(int r_idx, int ego);

/* monster2.c */
extern void monster_set_level(int m_idx, int level);
extern s32b modify_aux(s32b a, s32b b, char mod);
extern void monster_msg(cptr fmt, ...);
extern void cmonster_msg(char a, cptr fmt, ...);
extern bool_ mego_ok(int r_idx, int ego);
extern void monster_check_experience(int m_idx, bool_ silent);
extern void monster_gain_exp(int m_idx, u32b exp, bool_ silent);
extern monster_race* race_info_idx(int r_idx, int ego);
extern int get_wilderness_flag(void);
extern void sanity_blast(monster_type * m_ptr, bool_ necro);
extern void delete_monster_idx(int i);
extern void delete_monster(int y, int x);
extern void compact_monsters(int size);
extern void wipe_m_list(void);
extern s16b m_pop(void);
extern errr get_mon_num_prep(void);
extern s16b get_mon_num(int level);
extern void monster_desc(char *desc, monster_type *m_ptr, int mode);
extern void monster_race_desc(char *desc, int r_idx, int ego);
extern void lore_do_probe(int m_idx);
extern void lore_treasure(int m_idx, int num_item, int num_gold);
extern void update_mon(int m_idx, bool_ full);
extern void update_monsters(bool_ full);
extern void monster_carry(monster_type *m_ptr, int m_idx, object_type *q_ptr);
extern bool_ bypass_r_ptr_max_num ;
extern bool_ place_monster_aux(int y, int x, int r_idx, bool_ slp, bool_ grp, int status);
extern bool_ place_monster(int y, int x, bool_ slp, bool_ grp);
extern bool_ alloc_horde(int y, int x);
extern bool_ alloc_monster(int dis, bool_ slp);
extern bool_ summon_specific_okay(int r_idx);
extern int summon_specific_level;
extern bool_ summon_specific(int y1, int x1, int lev, int type);
extern void monster_swap(int y1, int x1, int y2, int x2);
extern bool_ multiply_monster(int m_idx, bool_ charm, bool_ clone);
extern bool_ hack_message_pain_may_silent;
extern void message_pain(int m_idx, int dam);
extern void update_smart_learn(int m_idx, int what);
extern bool_ summon_specific_friendly(int y1, int x1, int lev, int type, bool_ Group_ok);
extern bool_ place_monster_one_no_drop;
extern monster_race *place_monster_one_race;
extern s16b place_monster_one(int y, int x, int r_idx, int ego, bool_ slp, int status);
extern s16b player_place(int y, int x);
extern void monster_drop_carried_objects(monster_type *m_ptr);
extern bool_ monster_dungeon(int r_idx);
extern bool_ monster_quest(int r_idx);
extern bool_ monster_ocean(int r_idx);
extern bool_ monster_shore(int r_idx);
extern bool_ monster_town(int r_idx);
extern bool_ monster_wood(int r_idx);
extern bool_ monster_volcano(int r_idx);
extern bool_ monster_mountain(int r_idx);
extern bool_ monster_grass(int r_idx);
extern bool_ monster_deep_water(int r_idx);
extern bool_ monster_shallow_water(int r_idx);
extern bool_ monster_lava(int r_idx);
extern void set_mon_num_hook(void);
extern void set_mon_num2_hook(int y, int x);
extern bool_ monster_can_cross_terrain(byte feat, monster_race *r_ptr);
extern void corrupt_corrupted(void);

/* monster3.c */
extern void dump_companions(FILE *outfile);
extern void do_cmd_companion(void);
extern bool_ do_control_reconnect(void);
extern bool_ do_control_drop(void);
extern bool_ do_control_magic(void);
extern bool_ do_control_pickup(void);
extern bool_ do_control_inven(void);
extern bool_ do_control_walk(void);
extern bool_ can_create_companion(void);
extern void ai_deincarnate(int m_idx);
extern bool_ ai_possessor(int m_idx, int o_idx);
extern bool_ ai_multiply(int m_idx);
extern bool_ change_side(monster_type *m_ptr);
extern int is_friend(monster_type *m_ptr);
extern bool_ is_enemy(monster_type *m_ptr, monster_type *t_ptr);

/* object1.c */
/* object2.c */
extern byte get_item_letter_color(object_type *o_ptr);
extern void describe_device(object_type *o_ptr);
extern void object_pickup(int this_o_idx);
extern int get_slot(int slot);
extern bool_ apply_flags_set(s16b a_idx, s16b set_idx, u32b *f1, u32b *f2, u32b *f3, u32b *f4, u32b *f5, u32b *esp);
extern bool_ apply_set(s16b a_idx, s16b set_idx);
extern bool_ takeoff_set(s16b a_idx, s16b set_idx);
extern bool_ wield_set(s16b a_idx, s16b set_idx, bool_ silent);
extern object_type *get_object(int item);
extern s32b calc_total_weight(void);
extern void add_random_ego_flag(object_type *o_ptr, int fego, bool_ *limit_blows);
extern bool_ info_spell;
extern char spell_txt[50];
extern bool_ grab_tval_desc(int tval);
extern void init_match_theme(obj_theme theme);
extern bool_ kind_is_artifactable(int k_idx);
extern bool_ kind_is_good(int k_idx);
extern int kind_is_legal_special;
extern bool_ kind_is_legal(int k_idx);
extern bool_ verify(cptr prompt, int item);
extern void flavor_init(void);
extern void reset_visuals(void);
extern int object_power(object_type *o_ptr);
extern bool_ object_flags_no_set;
extern void object_flags(object_type *o_ptr, u32b *f1, u32b *f2, u32b *f3, u32b *f4, u32b *f5, u32b *esp);
extern void object_flags_known(object_type *o_ptr, u32b *f1, u32b *f2, u32b *f3, u32b *f4, u32b *f5, u32b *esp);
extern void object_desc(char *buf, object_type *o_ptr, int pref, int mode);
extern void object_desc_store(char *buf, object_type *o_ptr, int pref, int mode);
extern bool_ object_out_desc(object_type *o_ptr, FILE *fff, bool_ trim_down, bool_ wait_for_it);
extern char index_to_label(int i);
extern s16b label_to_inven(int c);
extern s16b label_to_equip(int c);
extern s16b wield_slot_ideal(object_type *o_ptr, bool_ ideal);
extern s16b wield_slot(object_type *o_ptr);
extern cptr mention_use(int i);
extern cptr describe_use(int i);
extern void inven_item_charges(int item);
extern void inven_item_describe(int item);
extern void inven_item_increase(int item, int num);
extern bool_ inven_item_optimize(int item);
extern void floor_item_charges(int item);
extern void floor_item_describe(int item);
extern void floor_item_increase(int item, int num);
extern void floor_item_optimize(int item);
extern bool_ inven_carry_okay(object_type *o_ptr);
extern s16b inven_carry(object_type *o_ptr, bool_ final);
extern s16b inven_takeoff(int item, int amt, bool_ force_drop);
extern void inven_drop(int item, int amt, int dy, int dx, bool_ silent);
extern bool_ item_tester_okay(object_type *o_ptr);
extern void display_inven(void);
extern void display_equip(void);
extern void show_inven();
extern void show_equip();
extern void toggle_inven_equip(void);
extern bool_ (*get_item_extra_hook)(int *cp);
extern bool_ get_item(int *cp, cptr pmt, cptr str, int mode);
extern void excise_object_idx(int o_idx);
extern void delete_object_idx(int o_idx);
extern void delete_object(int y, int x);
extern void compact_objects(int size);
extern void wipe_o_list(void);
extern s16b o_pop(void);
extern errr get_obj_num_prep(void);
extern s16b get_obj_num(int level);
extern void object_known(object_type *o_ptr);
extern void object_aware(object_type *o_ptr);
extern void object_tried(object_type *o_ptr);
extern s32b object_value(object_type *o_ptr);
extern s32b object_value_real(object_type *o_ptr);
extern bool_ object_similar(object_type *o_ptr, object_type *j_ptr);
extern void object_absorb(object_type *o_ptr, object_type *j_ptr);
extern s16b lookup_kind(int tval, int sval);
extern void object_wipe(object_type *o_ptr);
extern void object_prep(object_type *o_ptr, int k_idx);
extern void object_copy(object_type *o_ptr, object_type *j_ptr);
extern int hack_apply_magic_power;
extern void apply_magic(object_type *o_ptr, int lev, bool_ okay, bool_ good, bool_ great);
extern bool_ make_object(object_type *j_ptr, bool_ good, bool_ great, obj_theme theme);
extern void place_object(int y, int x, bool_ good, bool_ great, int where);
extern bool_ make_gold(object_type *j_ptr);
extern void place_gold(int y, int x);
extern void process_objects(void);
extern s16b drop_near(object_type *o_ptr, int chance, int y, int x);
extern void acquirement(int y1, int x1, int num, bool_ great, bool_ known);
extern void pick_trap(int y, int x);
extern cptr item_activation(object_type *o_ptr,byte num);
extern void combine_pack(void);
extern void reorder_pack(void);
extern void display_koff(int k_idx);
extern void random_artifact_resistance (object_type * o_ptr);
extern void random_resistance (object_type * o_ptr, bool_ is_scroll, int specific);
extern s16b floor_carry(int y, int x, object_type *j_ptr);
extern void pack_decay(int item);
extern void floor_decay(int item);
extern bool_ scan_floor(int *items, int *item_num, int y, int x, int mode);
extern void show_floor(int y, int x);
extern bool_ get_item_floor(int *cp, cptr pmt, cptr str, int mode);
extern void py_pickup_floor(int pickup);
extern s16b m_bonus(int max, int level);
extern void object_gain_level(object_type *o_ptr);
extern void gain_flag_group_flag(object_type *o_ptr, bool_ silent);
extern void gain_flag_group(object_type *o_ptr, bool_ silent);
extern void get_table_name(char * out_string);
extern s32b flag_cost(object_type * o_ptr, int plusses);

/* powers.c */
extern void do_cmd_power(void);

/* traps.c */
extern bool_ player_activate_trap_type(s16b y, s16b x, object_type *i_ptr, s16b item);
extern void player_activate_door_trap(s16b y, s16b x);
extern void place_trap(int y, int x);
extern void place_trap_object(object_type *o_ptr);
extern void wiz_place_trap(int y, int x, int idx);
extern void do_cmd_set_trap(void);
extern bool_ mon_hit_trap(int);

/* spells1.c */
extern byte spell_color(int type);
extern s16b poly_r_idx(int r_idx);
extern void get_pos_player(int dis, int *ny, int *nx);
extern bool_ teleport_player_bypass;
extern void teleport_to_player(int m_idx);
extern void teleport_player_directed(int rad, int dir);
extern void teleport_away(int m_idx, int dis);
extern void teleport_player(int dis);
extern void teleport_player_to(int ny, int nx);
extern void teleport_monster_to(int m_idx, int ny, int nx);
extern void teleport_player_level(void);
extern void recall_player(int d, int f);
extern void take_hit(int damage, cptr kb_str);
extern void take_sanity_hit(int damage, cptr hit_from);
extern void acid_dam(int dam, cptr kb_str);
extern void elec_dam(int dam, cptr kb_str);
extern void fire_dam(int dam, cptr kb_str);
extern void cold_dam(int dam, cptr kb_str);
extern bool_ inc_stat(int stat);
extern bool_ dec_stat(int stat, int amount, int mode);
extern bool_ res_stat(int stat, bool_ full);
extern bool_ apply_disenchant(int mode);
extern bool_ project_m(int who, int r, int y, int x, int dam, int typ);
extern sint project_path(u16b *gp, int range, int y1, int x1, int y2, int x2, int flg);
extern bool_ project(int who, int rad, int y, int x, int dam, int typ, int flg);
extern bool_ potion_smash_effect(int who, int y, int x, int o_sval);
extern void do_poly_self(void);
extern void corrupt_player(void);
extern void generate_spell(int plev);
extern bool_ unsafe;
extern void describe_attack_fully(int type, char* r);
extern s16b do_poly_monster(int y, int x);


/* spells2.c */
extern bool_ remove_curse_object(object_type *o_ptr, bool_ all);
extern void curse_artifact(object_type * o_ptr);
extern void grow_things(s16b type, int rad);
extern void grow_grass(int rad);
extern void grow_trees(int rad);
extern bool_ hp_player(int num);
extern bool_ heal_insanity(int val);
extern void warding_glyph(void);
extern void explosive_rune(void);
extern bool_ do_dec_stat(int stat, int mode);
extern bool_ do_res_stat(int stat, bool_ full);
extern bool_ do_inc_stat(int stat);
extern void identify_pack(void);
extern void identify_pack_fully(void);
extern bool_ remove_curse(void);
extern bool_ remove_all_curse(void);
extern bool_ restore_level(void);
extern void self_knowledge(FILE *fff);
extern bool_ lose_all_info(void);
extern bool_ detect_traps(int rad);
extern bool_ detect_doors(int rad);
extern bool_ detect_stairs(int rad);
extern bool_ detect_treasure(int rad);
extern bool_ hack_no_detect_message;
extern bool_ detect_objects_gold(int rad);
extern bool_ detect_objects_normal(int rad);
extern bool_ detect_objects_magic(int rad);
extern bool_ detect_monsters_normal(int rad);
extern bool_ detect_monsters_invis(int rad);
extern bool_ detect_monsters_evil(int rad);
extern bool_ detect_monsters_good(int rad);
extern bool_ detect_monsters_xxx(u32b match_flag, int rad);
extern bool_ detect_monsters_string(cptr chars, int rad);
extern bool_ detect_monsters_nonliving(int rad);
extern bool_ detect_all(int rad);
extern void stair_creation(void);
extern bool_ wall_stone(int y, int x);
extern bool_ enchant(object_type *o_ptr, int n, int eflag);
extern bool_ enchant_spell(int num_hit, int num_dam, int num_ac, int num_pval);
extern bool_ ident_spell(void);
extern bool_ ident_all(void);
extern bool_ identify_fully(void);
extern bool_ recharge(int num);
extern bool_ speed_monsters(void);
extern bool_ slow_monsters(void);
extern bool_ sleep_monsters(void);
extern bool_ conf_monsters(void);
extern void aggravate_monsters(int who);
extern bool_ genocide_aux(bool_ player_cast, char typ);
extern bool_ genocide(bool_ player_cast);
extern bool_ mass_genocide(bool_ player_cast);
extern void do_probe(int m_idx);
extern bool_ probing(void);
extern void change_wild_mode(void);
extern bool_ banish_evil(int dist);
extern bool_ dispel_evil(int dam);
extern bool_ dispel_good(int dam);
extern bool_ dispel_undead(int dam);
extern bool_ dispel_monsters(int dam);
extern bool_ dispel_living(int dam);
extern bool_ dispel_demons(int dam);
extern bool_ turn_undead(void);
extern void wipe(int y1, int x1, int r);
extern void destroy_area(int y1, int x1, int r, bool_ full, bool_ bypass);
extern void earthquake(int cy, int cx, int r);
extern void lite_room(int y1, int x1);
extern void unlite_room(int y1, int x1);
extern bool_ lite_area(int dam, int rad);
extern bool_ unlite_area(int dam, int rad);
extern bool_ fire_ball_beam(int typ, int dir, int dam, int rad);
extern bool_ fire_cloud(int typ, int dir, int dam, int rad, int time);
extern bool_ fire_wave(int typ, int dir, int dam, int rad, int time, s32b eff);
extern bool_ fire_wall(int typ, int dir, int dam, int time);
extern bool_ fire_ball(int typ, int dir, int dam, int rad);
extern bool_ fire_bolt(int typ, int dir, int dam);
extern bool_ fire_beam(int typ, int dir, int dam);
extern bool_ fire_druid_ball(int typ, int dir, int dam, int rad);
extern bool_ fire_druid_bolt(int typ, int dir, int dam);
extern bool_ fire_druid_beam(int typ, int dir, int dam);
extern void call_chaos(void);
extern bool_ fire_bolt_or_beam(int prob, int typ, int dir, int dam);
extern bool_ lite_line(int dir);
extern bool_ drain_life(int dir, int dam);
extern bool_ death_ray(int dir, int plev);
extern bool_ wall_to_mud(int dir);
extern bool_ destroy_door(int dir);
extern bool_ disarm_trap(int dir);
extern bool_ wizard_lock(int dir);
extern bool_ heal_monster(int dir);
extern bool_ speed_monster(int dir);
extern bool_ slow_monster(int dir);
extern bool_ sleep_monster(int dir);
extern bool_ stasis_monster(int dir);
extern bool_ confuse_monster(int dir, int plev);
extern bool_ stun_monster(int dir, int plev);
extern bool_ fear_monster(int dir, int plev);
extern bool_ scare_monsters(void);
extern bool_ poly_monster(int dir);
extern bool_ clone_monster(int dir);
extern bool_ teleport_monster(int dir);
extern bool_ door_creation(void);
extern bool_ trap_creation(void);
extern bool_ glyph_creation(void);
extern bool_ destroy_doors_touch(void);
extern bool_ destroy_traps_touch(void);
extern bool_ sleep_monsters_touch(void);
extern bool_ alchemy(void);
extern void activate_ty_curse(void);
extern void activate_dg_curse(void);
extern void activate_hi_summon(void);
extern void summon_cyber(void);
extern void wall_breaker(void);
extern void bless_weapon(void);
extern bool_ confuse_monsters(int dam);
extern bool_ charm_monsters(int dam);
extern bool_ charm_animals(int dam);
extern bool_ charm_demons(int dam);
extern bool_ stun_monsters(int dam);
extern bool_ stasis_monsters(int dam);
extern bool_ banish_monsters(int dist);
extern bool_ turn_monsters(int dam);
extern bool_ turn_evil(int dam);
extern bool_ deathray_monsters(void);
extern bool_ charm_monster(int dir, int plev);
extern bool_ star_charm_monster(int dir, int plev);
extern bool_ control_one_undead(int dir, int plev);
extern bool_ charm_animal(int dir, int plev);
extern bool_ mindblast_monsters(int dam);
extern void alter_reality(void);
extern void report_magics(void);
extern void teleport_swap(int dir);
extern void swap_position(int lty, int ltx);
extern bool_ item_tester_hook_recharge(object_type *o_ptr);
extern bool_ fire_explosion(int y, int x, int typ, int rad, int dam);
extern bool_ fire_godly_wrath(int y, int x, int typ, int dir, int dam);
extern bool_ invoke(int dam, int typ);
extern bool_ project_hack(int typ, int dam);
extern void project_meteor(int radius, int typ, int dam, u32b flg);
extern bool_ item_tester_hook_artifactable(object_type *o_ptr);
extern bool_ passwall(int dir, bool_ safe);
extern bool_ project_hook(int typ, int dir, int dam, int flg);
extern void random_misc (object_type * o_ptr, bool_ is_scroll);
extern void random_plus(object_type * o_ptr, bool_ is_scroll);
extern bool_ reset_recall(bool_ no_trepas_max_depth);
extern void remove_dg_curse(void);

/* randart.c */
extern int get_activation_power(void);
extern void build_prob(cptr learn);
extern bool_ create_artifact(object_type *o_ptr, bool_ a_scroll, bool_ get_name);
extern bool_ artifact_scroll(void);

/* store.c */
extern bool_ is_blessed(object_type *o_ptr);
extern void do_cmd_store(void);
extern void store_shuffle(int which);
extern void store_maint(int town_num, int store_num);
extern void store_init(int town_num, int store_num);
extern void move_to_black_market(object_type * o_ptr);
extern void do_cmd_home_trump(void);
extern void store_sell(void);
extern void store_purchase(void);
extern void store_examine(void);
extern void store_stole(void);
extern void store_prt_gold(void);
extern void store_request_item(void);

/* bldg.c -KMW- */
extern bool_ bldg_process_command(store_type *s_ptr, int i);
extern void show_building(store_type *s_ptr);
extern bool_ is_state(store_type *s_ptr, int state);
extern void do_cmd_bldg(void);
extern bool_ show_god_info(bool_ ext);
extern void enter_quest(void);
extern void select_bounties(void);

/* util.c */
extern void scansubdir(cptr dir);
extern s32b rescale(s32b x, s32b max, s32b new_max);
extern bool_ input_box(cptr text, int y, int x, char *buf, int max);
extern void draw_box(int y, int x, int h, int w);
extern void display_list(int y, int x, int h, int w, cptr title, cptr *list, int max, int begin, int sel, byte sel_color);
extern s32b value_scale(int value, int vmax, int max, int min);
extern int ask_menu(cptr ask, char **items, int max);
extern cptr get_player_race_name(int pr, int ps);
extern cptr get_month_name(int month, bool_ full, bool_ compact);
extern cptr get_day(int day);
extern s32b bst(s32b what, s32b t);
extern errr path_parse(char *buf, int max, cptr file);
extern errr path_temp(char *buf, int max);
extern errr path_build(char *buf, int max, cptr path, cptr file);
extern FILE *my_fopen(cptr file, cptr mode);
extern errr my_str_fgets(cptr full_text, char *buf, huge n);
extern errr my_fgets(FILE *fff, char *buf, huge n);
extern errr my_fputs(FILE *fff, cptr buf, huge n);
extern errr my_fclose(FILE *fff);
extern errr fd_kill(cptr file);
extern errr fd_move(cptr file, cptr what);
extern errr fd_copy(cptr file, cptr what);
extern int fd_make(cptr file, int mode);
extern int fd_open(cptr file, int flags);
extern errr fd_lock(int fd, int what);
extern errr fd_seek(int fd, huge n);
extern errr fd_chop(int fd, huge n);
extern errr fd_read(int fd, char *buf, huge n);
extern errr fd_write(int fd, cptr buf, huge n);
extern errr fd_close(int fd);
extern void flush(void);
extern void bell(void);
extern void sound(int num);
extern void move_cursor(int row, int col);
extern void text_to_ascii(char *buf, cptr str);
extern void ascii_to_text(char *buf, cptr str);
extern void keymap_init(void);
extern errr macro_add(cptr pat, cptr act);
extern sint macro_find_exact(cptr pat);
extern char inkey(void);
extern cptr quark_str(s16b num);
extern s16b quark_add(cptr str);
extern s16b message_num(void);
extern cptr message_str(int age);
extern byte message_color(int age);
extern byte message_type(int age);
extern void message_add(byte type, cptr msg, byte color);
extern void display_message(int x, int y, int split, byte color, cptr t);
extern void cmsg_print(byte color, cptr msg);
extern void msg_print(cptr msg);
extern void cmsg_format(byte color, cptr fmt, ...);
extern void msg_format(cptr fmt, ...);
extern void screen_save(void);
extern void screen_load(void);
extern void c_put_str(byte attr, cptr str, int row, int col);
extern void put_str(cptr str, int row, int col);
extern void c_prt(byte attr, cptr str, int row, int col);
extern void prt(cptr str, int row, int col);
extern void text_out_to_screen(byte a, cptr str);
extern void text_out_to_file(byte a, cptr str);
extern void text_out(cptr str);
extern void text_out_c(byte a, cptr str);
extern void clear_screen(void);
extern void clear_from(int row);
extern bool_ askfor_aux_complete;
extern bool_ askfor_aux(char *buf, int len);
extern bool_ get_string(cptr prompt, char *buf, int len);
extern bool_ get_check(cptr prompt);
extern bool_ get_com(cptr prompt, char *command);
extern s32b get_quantity(cptr prompt, s32b max);
extern void pause_line(int row);
extern char request_command_ignore_keymaps[];
extern bool_ request_command_inven_mode;
extern void request_command(int shopping);
extern bool_ is_a_vowel(int ch);
extern int get_keymap_dir(char ch);
extern byte count_bits(u32b array);
extern void strlower(char *buf);
extern int test_monster_name(cptr name);
extern int test_mego_name(cptr name);
extern int test_item_name(cptr name);
extern char msg_box(cptr text, int y, int x);
extern timer_type *new_timer(cptr callback, s32b delay);
extern void del_timer(timer_type *t_ptr);

/* main.c */
extern bool_ private_check_user_directory(cptr dirpath);

/* xtra1.c */
extern void fix_message(void);
extern void apply_flags(u32b f1, u32b f2, u32b f3, u32b f4, u32b f5, u32b esp, s16b pval, s16b tval, s16b to_h, s16b to_d, s16b to_a);
extern int luck(int min, int max);
extern int weight_limit(void);
extern bool_ calc_powers_silent;
extern void cnv_stat(int i, char *out_val);
extern s16b modify_stat_value(int value, int amount);
extern void calc_hitpoints(void);
extern void notice_stuff(void);
extern void update_stuff(void);
extern void redraw_stuff(void);
extern void window_stuff(void);
extern void handle_stuff(void);
extern bool_ monk_empty_hands(void);
extern bool_ monk_heavy_armor(void);
extern bool_ beastmaster_whip(void);
extern void calc_bonuses(bool_ silent);
extern void calc_sanity(void);
extern void gain_fate(byte fate);
extern void fate_desc(char *desc, int fate);
extern void dump_fates(FILE *OutFile);

/* xtra2.c */
extern int resolve_mimic_name(cptr name);
extern void do_rebirth(void);
extern cptr get_subrace_title(int racem);
extern void set_subrace_title(int racem, cptr name);
extern void switch_subrace(int racem, bool_ copy_old);
extern void switch_class(int sclass);
extern void switch_subclass(int sclass);
extern void drop_from_wild(void);
extern void clean_wish_name(char *buf, char *name);
extern bool_ test_object_wish(char *name, object_type *o_ptr, object_type *forge, char *what);
extern bool_ set_roots(int v, s16b ac, s16b dam);
extern bool_ set_project(int v, s16b gf, s16b dam, s16b rad, s16b flag);
extern bool_ set_rush(int v);
extern bool_ set_parasite(int v, int r);
extern bool_ set_disrupt_shield(int v);
extern bool_ set_prob_travel(int v);
extern bool_ set_absorb_soul(int v);
extern bool_ set_tim_breath(int v, bool_ magical);
extern bool_ set_tim_deadly(int v);
extern bool_ set_tim_res_time(int v);
extern bool_ set_tim_reflect(int v);
extern bool_ set_tim_thunder(int v, int p1, int p2);
extern bool_ set_meditation(int v);
extern bool_ set_strike(int v);
extern bool_ set_walk_water(int v);
extern bool_ set_tim_regen(int v, int p);
extern bool_ set_tim_ffall(int v);
extern bool_ set_tim_fly(int v);
extern bool_ set_poison(int v);
extern bool_ set_tim_fire_aura(int v);
extern bool_ set_holy(int v);
extern void set_grace(s32b v);
extern bool_ set_mimic(int v, int p, int level);
extern bool_ set_no_breeders(int v);
extern bool_ set_invis(int v,int p);
extern bool_ set_lite(int v);
extern bool_ set_blind(int v);
extern bool_ set_confused(int v);
extern bool_ set_poisoned(int v);
extern bool_ set_afraid(int v);
extern bool_ set_paralyzed(int v);
extern bool_ set_image(int v);
extern bool_ set_fast(int v, int p);
extern bool_ set_light_speed(int v);
extern bool_ set_slow(int v);
extern bool_ set_shield(int v, int p, s16b o, s16b d1, s16b d2);
extern bool_ set_blessed(int v);
extern bool_ set_hero(int v);
extern bool_ set_shero(int v);
extern bool_ set_protevil(int v);
extern bool_ set_protgood(int v);
extern bool_ set_protundead(int v);
extern bool_ set_invuln(int v);
extern bool_ set_tim_invis(int v);
extern bool_ set_tim_infra(int v);
extern bool_ set_mental_barrier(int v);
extern bool_ set_oppose_acid(int v);
extern bool_ set_oppose_elec(int v);
extern bool_ set_oppose_fire(int v);
extern bool_ set_oppose_cold(int v);
extern bool_ set_oppose_pois(int v);
extern bool_ set_oppose_ld(int v);
extern bool_ set_oppose_cc(int v);
extern bool_ set_oppose_ss(int v);
extern bool_ set_oppose_nex(int v);
extern bool_ set_stun(int v);
extern bool_ set_cut(int v);
extern bool_ set_food(int v);
extern void check_experience(void);
extern void check_experience_obj(object_type *o_ptr);
extern void gain_exp(s32b amount);
extern void lose_exp(s32b amount);
extern int get_coin_type(monster_race *r_ptr);
extern void monster_death(int m_idx);
extern bool_ mon_take_hit(int m_idx, int dam, bool_ *fear, cptr note);
extern bool_ change_panel(int dy, int dx);
extern void verify_panel(void);
extern void resize_map(void);
extern void resize_window(void);
extern cptr look_mon_desc(int m_idx);
extern void ang_sort_aux(vptr u, vptr v, int p, int q);
extern void ang_sort(vptr u, vptr v, int n);
extern bool_ target_able(int m_idx);
extern bool_ target_okay(void);
extern bool_ target_set(int mode);
extern bool_ get_aim_dir(int *dp);
extern bool_ get_hack_dir(int *dp);
extern bool_ get_rep_dir(int *dp);
extern int get_chaos_patron(void);
extern void gain_level_reward(int chosen_reward);
extern bool_ set_shadow(int v);
extern bool_ set_tim_esp(int v);
extern bool_ tgp_pt(int *x, int * y);
extern bool_ tgt_pt (int *x, int *y);
extern bool_ gain_random_corruption(int choose_mut);
extern bool_ got_corruptions(void);
extern void dump_corruptions(FILE *OutFile, bool_ color);
extern void do_poly_self(void);
extern void do_poly_wounds(void);
extern bool_ curse_weapon(void);
extern bool_ curse_armor(void);
extern void random_resistance(object_type * q_ptr, bool_ is_scroll, int specific);
extern bool_ lose_corruption(int choose_mut);
extern bool_ lose_all_corruptions(void);
extern void great_side_effect(void);
extern void nasty_side_effect(void);
extern void deadly_side_effect(bool_ god);
extern void godly_wrath_blast(void);
extern int interpret_grace(void);
extern int interpret_favor(void);
extern void make_wish(void);
extern bool_ set_sliding(s16b v);
extern void create_between_gate(int dist, int y, int x);

/* levels.c */
extern bool_ get_dungeon_generator(char *buf);
extern bool_ get_level_desc(char *buf);
extern void get_level_flags(void);
extern bool_ get_dungeon_name(char *buf);
extern bool_ get_dungeon_special(char *buf);
extern bool_ get_command(const char *file, char comm, char *param);
extern int get_branch(void);
extern int get_fbranch(void);
extern int get_flevel(void);
extern bool_ get_dungeon_save(char *buf);

/* wizard2.c */
extern void do_cmd_wiz_cure_all(void);
extern void do_cmd_wiz_named_friendly(int r_idx, bool_ slp);
extern tval_desc2 tvals[];

/* notes.c */
extern void show_notes_file(void);
extern void output_note(char *final_note);
extern void add_note(char *note, char code);
extern void add_note_type(int note_number);

/* squeltch.c */
extern void squeltch_inventory(void);
extern void squeltch_grid(void);
extern void do_cmd_automatizer(void);
extern void automatizer_add_rule(object_type *o_ptr, bool_ destroy);
extern bool_ automatizer_create;



/*
 * Hack -- conditional (or "bizarre") externs
 */

#ifdef SET_UID
/* util.c */
extern void user_name(char *buf, int id);
#endif

#ifndef HAS_MEMSET
/* util.c */
extern char *memset(char*, int, huge);
#endif

#ifndef HAS_STRICMP
/* util.c */
extern int stricmp(cptr a, cptr b);
#endif

#ifndef HAS_USLEEP
/* util.c */
extern int usleep(huge usecs);
#endif

#ifdef SUPPORT_GAMMA
/* util.c */
extern void build_gamma_table(int gamma);
extern byte gamma_table[256];

/* variable.c */
extern u16b gamma_val;
#endif

#ifdef MACINTOSH
/* main-mac.c */
/* extern void main(void); */
#endif

#ifdef MACH_O_CARBON
/* main-crb.c */
extern int fsetfileinfo(char *path, u32b fcreator, u32b ftype);
extern u32b _fcreator;
extern u32b _ftype;
#endif /* MACH_O_CARBON */

#ifdef WINDOWS
/* main-win.c */
/* extern int FAR PASCAL WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, ...); */
#endif

#if !defined(WINDOWS) && !defined(MACINTOSH)
/* files.c */
extern bool_ chg_to_txt(cptr base, cptr newname);
#endif /* !WINDOWS && !MACINTOSH */

/* util.c */
extern void repeat_push(int what);
extern bool_ repeat_pull(int *what);
extern void repeat_check(void);
extern void get_count(int number, int max);

/* variable.c */
extern bool_ easy_open;
extern bool_ easy_tunnel;
extern bool_ easy_disarm;

/* cmd2.c */
extern bool_ easy_open_door(int y, int x);

/* cmd2.c */
extern bool_ do_cmd_disarm_aux(int y, int x, int dir, int do_pickup);

extern bool_ easy_floor;


/* script.c */
extern void init_lua(void);
extern void init_lua_init(void);
extern int exec_lua(char *file);
extern cptr string_exec_lua(char *file);
extern bool_ tome_dofile(char *file);
extern bool_ tome_dofile_anywhere(cptr dir, char *file, bool_ test_exist);
extern void dump_lua_stack(int min, int max);
extern bool_ call_lua(cptr function, cptr args, cptr ret, ...);
extern bool_ get_lua_var(cptr name, char type, void *arg);

/* modules.c */
extern void module_reset_dir(cptr dir, cptr new_path);
extern cptr force_module;
extern bool_ select_module(void);


/* lua_bind.c */
extern magic_power *grab_magic_power(magic_power *m_ptr, int num);
extern bool_ get_magic_power(int *sn, magic_power *powers, int max_powers, void (*power_info)(char *p, int power), int plev, int cast_stat);
extern bool_ lua_spell_success(magic_power *spell, int stat, char *oups_fct);

extern object_type *new_object(void);
extern void end_object(object_type *o_ptr);
extern void lua_set_item_tester(int tval, char *fct);
extern char *lua_object_desc(object_type *o_ptr, int pref, int mode);

extern s16b    add_new_power(cptr name, cptr desc, cptr gain, cptr lose, byte level, byte cost, byte stat, byte diff);

extern void find_position(int y, int x, int *yy, int *xx);
extern bool_ summon_lua_okay(int r_idx);
extern bool_ lua_summon_monster(int y, int x, int lev, bool_ ffriend, char *fct);

extern s16b    add_new_quest(char *name);
extern void    desc_quest(int q_idx, int d, char *desc);

extern s16b    add_new_gods(char *name);
extern void    desc_god(int g_idx, int d, char *desc);

extern bool_    get_com_lua(cptr promtp, int *com);

extern s16b new_school(int i, cptr name, s16b skill);
extern s16b new_spell(int i, cptr name);
extern spell_type *grab_spell_type(s16b num);
extern school_type *grab_school_type(s16b num);
extern s32b lua_get_level(s32b s, s32b lvl, s32b max, s32b min, s32b bonus);
extern s32b lua_spell_chance(s32b chance, int level, int skill_level, int mana, int cur_mana, int stat);
extern s32b lua_spell_device_chance(s32b chance, int level, int base_level);

extern cave_type *lua_get_cave(int y, int x);
extern void set_target(int y, int x);
extern void get_target(int dir, int *y, int *x);

extern void get_map_size(bool_ full_text, char *name, int *ysize, int *xsize);
extern void load_map(bool_ full_text, char *name, int *y, int *x);
extern bool_ alloc_room(int by0, int bx0, int ysize, int xsize, int *y1, int *x1, int *y2, int *x2);

extern void lua_print_hook(cptr str);

extern int lua_get_new_bounty_monster(int lev);

extern char *lua_input_box(cptr title, int max);
extern char lua_msg_box(cptr title);

extern list_type *lua_create_list(int size);
extern void lua_delete_list(list_type *, int size);
extern void lua_add_to_list(list_type *, int idx, cptr str);
extern void lua_display_list(int y, int x, int h, int w, cptr title, list_type *list, int max, int begin, int sel, byte sel_color);

extern void add_scripted_generator(cptr name, bool_ stairs, bool_ monsters, bool_ objects, bool_ miscs);

/* skills.c */
extern void dump_skills(FILE *fff);
extern s16b find_skill(cptr name);
extern s16b find_skill_i(cptr name);
extern s16b get_skill(int skill);
extern s16b get_skill_scale(int skill, u32b scale);
extern void do_cmd_skill(void);
extern void do_cmd_activate_skill(void);
extern s16b melee_skills[MAX_MELEE];
extern char *melee_names[MAX_MELEE];
extern s16b get_melee_skills(void);
extern s16b get_melee_skill(void);
extern bool_ forbid_gloves(void);
extern bool_ forbid_non_blessed(void);
extern void compute_skills(s32b *v, s32b *m, int i);
extern void select_default_melee(void);
extern void do_get_new_skill(void);
extern void init_skill(s32b value, s32b mod, int i);
extern s16b find_ability(cptr name);
extern void dump_abilities(FILE *fff);
extern void do_cmd_ability(void);
extern bool_ has_ability(int ab);
extern void apply_level_abilities(int level);
extern void recalc_skills(bool_ init);

/* gods.c */
extern void inc_piety(int god, s32b amt);
extern void abandon_god(int god);
extern int wisdom_scale(int max);
extern int find_god(cptr name);
extern void follow_god(int god, bool_ silent);
