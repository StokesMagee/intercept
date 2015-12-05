#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "client\client_types.hpp"
#include<vector>

using namespace intercept::client::types;

namespace intercept {
    namespace sqf {
        float random(float max_);

        float acc_time();
        std::vector<std::string> activated_addons();
        std::vector<team_member> agents();
        //std::vector<?> airdensity_curvertd(); // no entry on the biki

        float armorypoints();
        float benchmark();
        side blufor();
        std::string briefingname();
        bool cadetmode();
        object cameraon();
        std::string cameraview();
        config campaignconfigfile();
        bool cheatsenabled();
        side civilian();
        void clearforcesrtd();
        void clearitempool();
        void clearmagazinepool();
        void clearradio();
        void clearweaponpool();
        float clientowner();
        std::string commandingmenu();
        config configfile();
        config confignull();
        control controlnull();
        std::string copyfromclipboard();
        object curatorcamera();
        object curatormouseover();
        std::vector<object> curatorselected();
        std::string current3denoperation();
        float currentchannel();
        rv_namespace currentnamespace();
        object cursortarget();
        std::vector<float> date();
        float daytime();

        std::vector<script> diag_activemissionfsms();
        std::vector<script> diag_activesqfscripts();
        std::vector<script> diag_activesqsscripts();
        float diag_fps();
        float diag_fpsmin();
        float diag_frameno();
        float diag_ticktime();

        bool dialog();
        bool didjip();
        float difficulty();
        bool difficultyenabledrtd();
        void disabledebriefingstats();
        void disableserialization();
        display displaynull();
        float distributionregion();
        side east();
        void enableenddialog();
        void endloadingscreen();
        float estimatedendservertime();
        void exit();
        void finishmissioninit();
        bool fog();
        float fogforecast();
        std::vector<float> fogparams();
        void forceend();
        void forceweatherchange();
        bool freelook();
        object get3dencamera();
        bool get3deniconsvisible();
        bool get3denlinesvisible();
        // TODO array[] get3denmouseover(); //      Array in format: [type,Eden Entity], where type can be: "Object", "Group", "Trigger", "Logic", "Waypoint" or "Marker"
        // TODO array[] getartillerycomputersettings(); // ["Semi (medium)","HE Mortar Shells",0]
        std::string getclientstate();
        // TODO not on biki getdlcassetsusage();
        float getelevationoffset();
        // TODO not on biki std::vector<std::string> getmissiondlcs();
        std::array<float, 2> getmouseposition();
        std::array<float, 2> getobjectviewdistance();
        bool getremotesensorsdisabled();
        std::array<float,6> getresolution();
        float getshadowdistance();
        float gettotaldlcusagetime();
        bool groupiconselectable();
        std::array<bool,2> groupiconsvisible();
        group grpnull();
        float gusts();
        void halt();
        bool hasinterface();
        bool hcshownbar();
        // TODO hud_movement_levels hudmovementlevels();
        float humidity();
        side independent();
        void initambientlife();
        bool is3den();
        bool is3denmultiplayer();
        bool isautotest();
        bool isdedicated();
        bool isfilepatchingenabled();
        bool isinstructorfigureenabled();
        bool ismultiplayer();
        bool ispipenabled();
        bool isserver();
        bool issteammission();
        bool isstreamfriendlyuienabled();
        bool isstressdamageenabled();
        bool istuthintsenabled();
        std::string language();
        std::vector<std::array<std::string,2>> librarycredits();
        std::vector<std::string> librarydisclaimers();
        float lightnings();
        std::string linebreak();
        void loadgame();
        location locationnull();
        void logentities();
        void mapanimclear();
        void mapanimcommit();
        bool mapanimdone();
        bool markasfinishedonsteam();
        config missionconfigfile();
        float missiondifficulty();
        std::string missionname();
        rv_namespace missionnamespace();
        std::array<float, 6> missionstart();
        float moonintensity();
        float musicvolume();
        float nextweatherchange();
        object objnull();
        void opencuratorinterface();
        side opfor();
        float overcast();
        float overcastforecast();
        rv_namespace parsingnamespace();
        float particlesquality();
        float pi();
        float pixelh();
        float pixelw();
        std::vector<object> playableunits();
        object player();
        float playerrespawntime();
        side playerside();
        // TODO implement product_version productversion();
        std::string profilename();
        rv_namespace profilenamespace();
        std::string profilenamesteam();
        float radiovolume();
        float rain();
        float rainbow();
        void resetcamshake();
        side resistance();
        bool reversedmousey();
        void runinitscript();

		bool visible_watch();
		bool visible_map();
		bool visible_gps();
		bool visible_compass();
		float view_distance();
		bool team_switch_enabled();
		void team_switch();

		float system_of_units();
		float sun_or_moon(); // BUT WHICH ONE IS IT!?!?!??!!?
		float sound_volume();
		bool sling_load_assistant_shown();
		void simul_weather_sync();
		void select_no_player();
		bool saving_enabled();
		void save_profile_namespace();

		std::vector<object> switchable_units();

        float save_zone_x();
        float save_zone_y();
        float save_zone_h();
        float save_zone_w();
        float save_zone_x_abs();
        float save_zone_w_abs();

        bool shown_artillerycomputer();
        bool shown_chat();
        bool shown_compass();
        bool shown_curatorcompass();
        bool shown_gps();
        bool shown_hud();
        bool shown_map();
        bool shown_pad();
        bool shown_radio();
        bool shown_uavfeed();
        bool shown_warrant();
        bool shown_watch();

        float abs(float value_);
        float acos(float value_);
        std::string action_name(std::string value_);
        void activate_key(std::string value_);
        void add_switchable_unit(object value_);
        float air_density_rtd(float value_);
        void airport_side(float value_);
        bool alive(object value_);
        std::string animation_state(object value_);
        float asin(float value_);
        object assigned_commander(object value_);
        object assigned_driver(object value_);
        object assigned_gunner(object value_);
        object assigned_target(object value_);
        std::string assigned_team(object value_);
        object assigned_vehicle(object value_);
        float atan(float value_);
        float atg(float value_);
        std::string backpack(object value_);
        object backpack_container(object value_);
        std::string behaviour(object value_);
        std::string binocular(object value_);
        void break_out(std::string value_);
        void break_to(std::string value_);
        void buldozer(bool value_);
        bool buldozer(std::string value_);
        std::string button_action(control value_);
        std::string button_action(float value_);
        bool cam_committed(object value_);
        void cam_destroy(object value_);
        bool cam_preloaded(object value_);
        object cam_target(object value_);
        void cam_use_nvg(bool value_);
        void camera_effect_enable_hud(bool value_);
        float camera_interest(object value_);
        bool can_fire(object value_);
        bool can_move(object value_);
        bool can_stand(object value_);
        bool can_unload_in_combat(object value_);
        bool captive(object value_);
        float captive_num(object value_);
        bool cb_checked(control value_);
        float ceil(float value_);
        bool channel_enabled(float value_);
        bool check_aifeature(std::string value_);
        void clear_all_items_from_backpack(object value_);
        void clear_backpack_cargo(object value_);
        void clear_backpack_cargo_global(object value_);
        void clear_group_icons(group value_);
        void clear_item_cargo(object value_);
        void clear_item_cargo_global(object value_);
        void clear_magazine_cargo(object value_);
        void clear_magazine_cargo_global(object value_);
        void clear_overlay(control value_);
        void clear_weapon_cargo(object value_);
        void clear_weapon_cargo_global(object value_);
        void close_dialog(float value_);
        void close_overlay(control value_);
        void collapse_object_tree(control value_);
        float collective_rtd(object value_);
        object commander(object value_);
        void comment(std::string value_);
        void commit_overlay(control value_);
        bool completed_fsm(float value_);
        void copy_to_clipboard(std::string value_);
        float cos(float value_);
        float count(std::string value_);
        side create_center(side value_);
        bool create_dialog(std::string value_);
        group create_group(side value_);
        void create_vehicle_crew(object value_);
        void ctrl_activate(control value_);
        float ctrl_auto_scroll_delay(control value_);
        bool ctrl_auto_scroll_rewind(control value_);
        float ctrl_auto_scroll_speed(control value_);
        bool ctrl_checked(control value_);
        std::string ctrl_class_name(control value_);
        bool ctrl_committed(control value_);
        bool ctrl_delete(control value_);
        bool ctrl_enabled(control value_);
        bool ctrl_enabled(float value_);
        float ctrl_fade(control value_);
        bool ctrl_htmlloaded(control value_);
        float ctrl_idc(control value_);
        float ctrl_idd(display value_);
        void ctrl_map_anim_clear(control value_);
        void ctrl_map_anim_commit(control value_);
        bool ctrl_map_anim_done(control value_);
        float ctrl_map_scale(control value_);
        std::string ctrl_model(control value_);
        float ctrl_model_scale(control value_);
        display ctrl_parent(control value_);
        control ctrl_parent_controls_group(control value_);
        float ctrl_scale(control value_);
        void ctrl_set_focus(control value_);
        bool ctrl_shown(control value_);
        std::string ctrl_text(control value_);
        std::string ctrl_text(float value_);
        float ctrl_text_height(control value_);
        std::string ctrl_text_secondary(control value_);
        float ctrl_type(control value_);
        bool ctrl_visible(float value_);
        float curator_camera_area_ceiling(object value_);
        bool curator_editing_area_type(object value_);
        float curator_points(object value_);
        float curator_waypoint_cost(object value_);
        std::string current_command(object value_);
        std::string current_magazine(object value_);
        std::string current_muzzle(object value_);
        float current_vision_mode(object value_);
        float current_waypoint(group value_);
        std::string current_weapon(object value_);
        std::string current_weapon_mode(object value_);
        float current_zeroing(object value_);
        float damage(object value_);
        void de_activate_key(std::string value_);
        float debriefing_text(std::string value_);
        float deg(float value_);
        void delete_center(side value_);
        void delete_collection(object value_);
        void delete_group(group value_);
        bool delete_identity(std::string value_);
        void delete_marker(std::string value_);
        void delete_marker_local(std::string value_);
        void delete_site(object value_);
        bool delete_status(std::string value_);
        void delete_vehicle(object value_);
        void detach(object value_);
        bool did_jipowner(object value_);
        bool difficulty_enabled(std::string value_);
        float direction(object value_);
        void disable_remote_sensors(bool value_);
        void disable_user_input(bool value_);
        void dissolve_team(std::string value_);
        object driver(object value_);
        void echo(std::string value_);
        void edit(std::string value_);
        object effective_commander(object value_);
        void enable_cam_shake(bool value_);
        void enable_caustics(bool value_);
        void enable_diag_legend(bool value_);
        void enable_engine_artillery(bool value_);
        void enable_environment(bool value_);
        void enable_radio(bool value_);
        void enable_sat_normal_on_detail(bool value_);
        void enable_sentences(bool value_);
        void enable_stress_damage(bool value_);
        void enable_team_switch(bool value_);
        void enable_traffic(bool value_);
        void end_mission(std::string value_);
        void estimated_time_left(float value_);
        float exec_fsm(std::string value_);
        float exp(float value_);
        void export_jipmessages(std::string value_);
        std::string face(object value_);
        std::string faction(object value_);
        void fail_mission(std::string value_);
        void fill_weapons_from_pool(object value_);
        display find_display(float value_);
        bool finite(float value_);
        object first_backpack(object value_);
        object flag(object value_);
        object flag_owner(object value_);
        side flag_side(object value_);
        std::string flag_texture(object value_);
        bool fleeing(object value_);
        float floor(float value_);
        void force_map(bool value_);
        void force_respawn(object value_);
        object form_leader(object value_);
        float formation_direction(object value_);
        object formation_leader(object value_);
        std::string formation_task(object value_);
        float fuel(object value_);
        float gear_idcammo_count(float value_);
        float gear_slot_ammo_count(control value_);
        std::string gear_slot_data(control value_);
        float get_3den_action_state(std::string value_);
        float get_aiming_coef(object value_);
        float get_ammo_cargo(object value_);
        float get_anim_aim_precision(object value_);
        float get_anim_speed_coef(object value_);
        object get_assigned_curator_logic(object value_);
        object get_assigned_curator_unit(object value_);
        float get_bleeding_remaining(object value_);
        float get_burning_value(object value_);
        object get_connected_uav(object value_);
        float get_custom_aim_coef(object value_);
        float get_dlcusage_time(float value_);
        float get_dammage(object value_);
        float get_dir(object value_);
        float get_dir_visual(object value_);
        object get_editor_camera(control value_);
        std::string get_editor_mode(control value_);
        float get_fatigue(object value_);
        float get_fuel_cargo(object value_);
        std::string get_marker_color(std::string value_);
        std::string get_marker_type(std::string value_);
        float get_mass(object value_);
        float get_object_dlc(object value_);
        float get_object_type(object value_);
        float get_oxygen_remaining(object value_);
        float get_player_channel(object value_);
        std::string get_player_uid(object value_);
        float get_repair_cargo(object value_);
        float get_rotor_brake_rtd(object value_);
        object get_sling_load(object value_);
        float get_stamina(object value_);
        float get_stat_value(std::string value_);
        float get_suppression(object value_);
        float get_weapon_sway(object value_);
        float get_wings_orientation_rtd(object value_);
        float get_wings_position_rtd(object value_);
        std::string goggles(object value_);
        group group_from_net_id(std::string value_);
        std::string group_id(group value_);
        float group_owner(group value_);
        object gunner(object value_);
        std::string handgun_magazine(object value_);
        std::string handgun_weapon(object value_);
        float hands_hit(object value_);
        object hc_leader(group value_);
        void hc_remove_all_groups(object value_);
        void hc_show_bar(bool value_);
        std::string headgear(object value_);
        void hide_body(object value_);
        void hide_object(object value_);
        void hide_object_global(object value_);
        void hint_c(std::string value_);
        std::string hmd(object value_);
        std::string image(std::string value_);
        void import_all_groups(control value_);
        std::string incapacitated_state(object value_);
        bool inflamed(object value_);
        float input_action(std::string value_);
        bool is_able_to_breathe(object value_);
        bool is_aim_precision_enabled(object value_);
        bool is_auto_hover_on(object value_);
        bool is_auto_trim_on_rtd(object value_);
        bool is_autonomous(object value_);
        bool is_bleeding(object value_);
        bool is_burning(object value_);
        bool is_collision_light_on(object value_);
        bool is_copilot_enabled(object value_);
        bool is_dlcavailable(float value_);
        bool is_engine_on(object value_);
        bool is_forced_walk(object value_);
        bool is_formation_leader(object value_);
        bool is_hidden(object value_);
        bool is_in_remains_collector(object value_);
        bool is_key_active(std::string value_);
        bool is_light_on(object value_);
        bool is_localized(std::string value_);
        bool is_manual_fire(object value_);
        bool is_marked_for_collection(object value_);
        bool is_null(object value_);
        bool is_null(group value_);
        bool is_null(control value_);
        bool is_null(display value_);
        bool is_object_hidden(object value_);
        bool is_object_rtd(object value_);
        bool is_player(object value_);
        bool is_real_time(control value_);
        bool is_showing(control value_);
        bool is_sprint_allowed(object value_);
        bool is_stamina_enabled(object value_);
        bool is_touching_ground(object value_);
        bool is_turned_out(object value_);
        bool is_uavconnected(object value_);
        bool is_walking(object value_);
        bool is_weapon_deployed(object value_);
        bool is_weapon_rested(object value_);
        std::string key_image(float value_);
        std::string key_name(float value_);
        std::string land_result(object value_);
        object laser_target(object value_);
        void lb_clear(control value_);
        void lb_clear(float value_);
        float lb_cur_sel(control value_);
        float lb_cur_sel(float value_);
        float lb_size(control value_);
        float lb_size(float value_);
        float lb_sort(control value_);
        float lb_sort_by_value(control value_);
        object leader(object value_);
        object leader(group value_);
        bool leaderboard_de_init(std::string value_);
        bool leaderboard_init(std::string value_);
        bool leaderboard_request_rows_friends(std::string value_);
        float leaderboard_state(std::string value_);
        std::string life_state(object value_);
        void light_detach_object(object value_);
        std::string light_is_on(object value_);
        float ln(float value_);
        void lnb_clear(control value_);
        void lnb_clear(float value_);
        float lnb_cur_sel_row(control value_);
        float lnb_cur_sel_row(float value_);
        float load(object value_);
        float load_abs(object value_);
        float load_backpack(object value_);
        std::string load_file(std::string value_);
        float load_uniform(object value_);
        float load_vest(object value_);
        bool local(object value_);
        bool local(group value_);
        std::string localize(std::string value_);
        bool lock_identity(object value_);
        float locked(object value_);
        bool locked_driver(object value_);
        float log(float value_);
        float marker_alpha(std::string value_);
        std::string marker_brush(std::string value_);
        std::string marker_color(std::string value_);
        float marker_dir(std::string value_);
        std::string marker_shape(std::string value_);
        std::string marker_text(std::string value_);
        std::string marker_type(std::string value_);
        bool mine_active(object value_);
        float morale(object value_);
        void move_out(object value_);
        float move_time(object value_);
        bool move_to_completed(object value_);
        bool move_to_failed(object value_);
        std::string name(object value_);
        std::string name_sound(object value_);
        object nearest_building(object value_);
        float need_reload(object value_);
        std::string net_id(object value_);
        std::string net_id(group value_);
        float next_menu_item_index(control value_);
        float number_of_engines_rtd(object value_);
        object object_from_net_id(std::string value_);
        object object_parent(object value_);
        void on_briefing_group(std::string value_);
        void on_briefing_notes(std::string value_);
        void on_briefing_plan(std::string value_);
        void on_briefing_team_switch(std::string value_);
        bool open_dlc_page(float value_);
        bool open_map(bool value_);
        bool open_youtube_video(std::string value_);
        float owner(object value_);
        float parse_number(std::string value_);
        float parse_number(bool value_);
        std::string parse_text(std::string value_);
        void pick_weapon_pool(object value_);
        std::string pitch(object value_);
        void play_music(std::string value_);
        void play_sound(std::string value_);
        float playable_slots_number(side value_);
        float players_number(side value_);
        bool pp_effect_committed(std::string value_);
        bool pp_effect_committed(float value_);
        void pp_effect_destroy(float value_);
        bool pp_effect_enabled(float value_);
        float precision(object value_);
        bool preload_sound(std::string value_);
        std::string preprocess_file(std::string value_);
        std::string preprocess_file_line_numbers(std::string value_);
        std::string primary_weapon(object value_);
        void process_diary_link(std::string value_);
        void progress_loading_screen(float value_);
        float progress_position(control value_);
        void public_variable(std::string value_);
        void public_variable_server(std::string value_);
        void put_weapon_pool(object value_);
        float query_items_pool(std::string value_);
        float query_magazine_pool(std::string value_);
        float query_weapon_pool(std::string value_);
        float rad(float value_);
        float random(float value_);
        std::string rank(object value_);
        float rank_id(object value_);
        float rating(object value_);
        void reload(object value_);
        bool reload_enabled(object value_);
        bool remove(float value_);
        void remove_all(std::string value_);
        void remove_all_actions(object value_);
        void remove_all_assigned_items(object value_);
        void remove_all_containers(object value_);
        void remove_all_curator_addons(object value_);
        void remove_all_curator_camera_areas(object value_);
        void remove_all_curator_editing_areas(object value_);
        void remove_all_handgun_items(object value_);
        void remove_all_items(object value_);
        void remove_all_items_with_magazines(object value_);
        void remove_all_mission_event_handlers(std::string value_);
        void remove_all_music_event_handlers(std::string value_);
        void remove_all_primary_weapon_items(object value_);
        void remove_all_weapons(object value_);
        void remove_backpack(object value_);
        void remove_backpack_global(object value_);
        void remove_goggles(object value_);
        void remove_headgear(object value_);
        void remove_switchable_unit(object value_);
        void remove_uniform(object value_);
        void remove_vest(object value_);
        bool required_version(std::string value_);
        void reset_subgroup_direction(object value_);
        void restart_editor_camera(control value_);
        std::string role_description(object value_);
        bool rope_attach_enabled(object value_);
        object rope_attached_to(object value_);
        void rope_destroy(object value_);
        float rope_length(object value_);
        bool rope_unwound(object value_);
        float round(float value_);
        void save_overlay(control value_);
        void save_var(std::string value_);
        void scope_name(std::string value_);
        float score(object value_);
        float score_side(side value_);
        void script_name(std::string value_);
        float scud_state(object value_);
        std::string secondary_weapon(object value_);
        void select_player(object value_);
        void selected_editor_objects(control value_);
        bool server_command(std::string value_);
        bool server_command_available(std::string value_);
        bool server_command_executable(std::string value_);
        void set_acc_time(float value_);
        void set_aperture(float value_);
        void set_armory_points(float value_);
        bool set_current_channel(float value_);
        void set_group_icons_selectable(bool value_);
        void set_horizon_parallax_coef(float value_);
        void set_object_view_distance(float value_);
        void set_playable(object value_);
        void set_player_respawn_time(float value_);
        void set_shadow_distance(float value_);
        void set_simul_weather_layers(float value_);
        void set_stamina_scheme(std::string value_);
        void set_system_of_units(float value_);
        void set_terrain_grid(float value_);
        void set_time_multiplier(float value_);
        void set_traffic_distance(float value_);
        void set_view_distance(float value_);
        void show_chat(bool value_);
        void show_cinema_border(bool value_);
        void show_commanding_menu(std::string value_);
        void show_compass(bool value_);
        void show_curator_compass(bool value_);
        void show_gps(bool value_);
        void show_hud(bool value_);
        void show_map(bool value_);
        void show_pad(bool value_);
        void show_radio(bool value_);
        bool show_subtitles(bool value_);
        void show_uavfeed(bool value_);
        void show_warrant(bool value_);
        void show_watch(bool value_);
        bool simulation_enabled(object value_);
        float sin(float value_);
        float size_of(std::string value_);
        float skill(object value_);
        void skip_time(float value_);
        void sleep(float value_);
        float slider_position(control value_);
        float slider_position(float value_);
        bool some_ammo(object value_);
        std::string speaker(object value_);
        float speed(object value_);
        float sqrt(float value_);
        std::string stance(object value_);
        void stop_engine_rtd(object value_);
        bool stopped(object value_);
        void system_chat(std::string value_);
        float tan(float value_);
        std::string text(std::string value_);
        float tg(float value_);
        void title_fade_out(float value_);
        std::string to_lower(std::string value_);
        std::string to_upper(std::string value_);
        bool trigger_activated(object value_);
        object trigger_attached_vehicle(object value_);
        std::string trigger_text(object value_);
        float trigger_timeout_current(object value_);
        std::string trigger_type(object value_);
        void tv_clear(float value_);
        void tv_clear(control value_);
        std::string type_of(object value_);
        void uisleep(float value_);
        void unassign_curator(object value_);
        void unassign_team(object value_);
        void unassign_vehicle(object value_);
        bool underwater(object value_);
        std::string uniform(object value_);
        object uniform_container(object value_);
        object unit_backpack(object value_);
        std::string unit_pos(object value_);
        float unit_recoil_coefficient(object value_);
        bool unlock_achievement(std::string value_);
        void update_object_tree(control value_);
        object vehicle(object value_);
        std::string vehicle_var_name(object value_);
        bool verify_signature(std::string value_);
        std::string vest(object value_);
        object vest_container(object value_);
        float waypoint_timeout_current(group value_);
        bool waypoints_enabled_uav(object value_);
        bool weapon_lowered(object value_);

    }
}
