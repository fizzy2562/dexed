#ifndef dexed_ttl_h
#define dexed_ttl_h


#ifndef PEG_STRUCT
#define PEG_STRUCT
typedef struct {
  float min;
  float max;
  float default_value;
  char toggled;
  char integer;
  char logarithmic;
} peg_data_t;
#endif

/* <https://github.com/dcoredump/dexed.lv2> */

static const char p_uri[] = "https://github.com/dcoredump/dexed.lv2";

enum p_port_enum {
  p_midi_in,
  p_audio_out,
  p_cutoff,
  p_resonance,
  p_output,
  p_engine,
  p_number_of_voices,
  p_polymono,
  p_pitch_bend_range,
  p_pitch_bend_step,
  p_mod_wheel_range,
  p_mod_wheel_assign,
  p_foot_ctrl_range,
  p_foot_ctrl_assign,
  p_breath_ctrl_range,
  p_breath_ctrl_assign,
  p_aftertouch_range,
  p_aftertouch_assign,
  p_master_tune,
  p_algorithm_num,
  p_feedback,
  p_oscillator_sync,
  p_lfo_speed,
  p_lfo_delay,
  p_lfo_pitch_mod_depth,
  p_lfo_amp_mod_depth,
  p_lfo_sync,
  p_lfo_waveform,
  p_transpose,
  p_pitch_mod_sensitivity,
  p_pitch_eg_rate_1,
  p_pitch_eg_rate_2,
  p_pitch_eg_rate_3,
  p_pitch_eg_rate_4,
  p_pitch_eg_level_1,
  p_pitch_eg_level_2,
  p_pitch_eg_level_3,
  p_pitch_eg_level_4,
  p_op1_eg_rate_1,
  p_op1_eg_rate_2,
  p_op1_eg_rate_3,
  p_op1_eg_rate_4,
  p_op1_eg_level_1,
  p_op1_eg_level_2,
  p_op1_eg_level_3,
  p_op1_eg_level_4,
  p_op1_operator_output_level,
  p_op1_osc_mode,
  p_op1_osc_freq_coarse,
  p_op1_osc_freq_fine,
  p_op1_osc_detune,
  p_op1_kbd_lev_scl_brk_pt,
  p_op1_kbd_lev_scl_lft_depth,
  p_op1_kbd_lev_scl_rht_depth,
  p_op1_kbd_lev_scl_lft_curve,
  p_op1_kbd_lev_scl_rht_curve,
  p_op1_kbd_rate_scaling,
  p_op1_amp_mod_sensitivity,
  p_op1_key_vel_sensitivity,
  p_op2_eg_rate_1,
  p_op2_eg_rate_2,
  p_op2_eg_rate_3,
  p_op2_eg_rate_4,
  p_op2_eg_level_1,
  p_op2_eg_level_2,
  p_op2_eg_level_3,
  p_op2_eg_level_4,
  p_op2_operator_output_level,
  p_op2_osc_mode,
  p_op2_osc_freq_coarse,
  p_op2_osc_freq_fine,
  p_op2_osc_detune,
  p_op2_kbd_lev_scl_brk_pt,
  p_op2_kbd_lev_scl_lft_depth,
  p_op2_kbd_lev_scl_rht_depth,
  p_op2_kbd_lev_scl_lft_curve,
  p_op2_kbd_lev_scl_rht_curve,
  p_op2_kbd_rate_scaling,
  p_op2_amp_mod_sensitivity,
  p_op2_key_vel_sensitivity,
  p_op3_eg_rate_1,
  p_op3_eg_rate_2,
  p_op3_eg_rate_3,
  p_op3_eg_rate_4,
  p_op3_eg_level_1,
  p_op3_eg_level_2,
  p_op3_eg_level_3,
  p_op3_eg_level_4,
  p_op3_operator_output_level,
  p_op3_osc_mode,
  p_op3_osc_freq_coarse,
  p_op3_osc_freq_fine,
  p_op3_osc_detune,
  p_op3_kbd_lev_scl_brk_pt,
  p_op3_kbd_lev_scl_lft_depth,
  p_op3_kbd_lev_scl_rht_depth,
  p_op3_kbd_lev_scl_lft_curve,
  p_op3_kbd_lev_scl_rht_curve,
  p_op3_kbd_rate_scaling,
  p_op3_amp_mod_sensitivity,
  p_op3_key_vel_sensitivity,
  p_op4_eg_rate_1,
  p_op4_eg_rate_2,
  p_op4_eg_rate_3,
  p_op4_eg_rate_4,
  p_op4_eg_level_1,
  p_op4_eg_level_2,
  p_op4_eg_level_3,
  p_op4_eg_level_4,
  p_op4_operator_output_level,
  p_op4_osc_mode,
  p_op4_osc_freq_coarse,
  p_op4_osc_freq_fine,
  p_op4_osc_detune,
  p_op4_kbd_lev_scl_brk_pt,
  p_op4_kbd_lev_scl_lft_depth,
  p_op4_kbd_lev_scl_rht_depth,
  p_op4_kbd_lev_scl_lft_curve,
  p_op4_kbd_lev_scl_rht_curve,
  p_op4_kbd_rate_scaling,
  p_op4_amp_mod_sensitivity,
  p_op4_key_vel_sensitivity,
  p_op5_eg_rate_1,
  p_op5_eg_rate_2,
  p_op5_eg_rate_3,
  p_op5_eg_rate_4,
  p_op5_eg_level_1,
  p_op5_eg_level_2,
  p_op5_eg_level_3,
  p_op5_eg_level_4,
  p_op5_operator_output_level,
  p_op5_osc_mode,
  p_op5_osc_freq_coarse,
  p_op5_osc_freq_fine,
  p_op5_osc_detune,
  p_op5_kbd_lev_scl_brk_pt,
  p_op5_kbd_lev_scl_lft_depth,
  p_op5_kbd_lev_scl_rht_depth,
  p_op5_kbd_lev_scl_lft_curve,
  p_op5_kbd_lev_scl_rht_curve,
  p_op5_kbd_rate_scaling,
  p_op5_amp_mod_sensitivity,
  p_op5_key_vel_sensitivity,
  p_op6_eg_rate_1,
  p_op6_eg_rate_2,
  p_op6_eg_rate_3,
  p_op6_eg_rate_4,
  p_op6_eg_level_1,
  p_op6_eg_level_2,
  p_op6_eg_level_3,
  p_op6_eg_level_4,
  p_op6_operator_output_level,
  p_op6_osc_mode,
  p_op6_osc_freq_coarse,
  p_op6_osc_freq_fine,
  p_op6_osc_detune,
  p_op6_kbd_lev_scl_brk_pt,
  p_op6_kbd_lev_scl_lft_depth,
  p_op6_kbd_lev_scl_rht_depth,
  p_op6_kbd_lev_scl_lft_curve,
  p_op6_kbd_lev_scl_rht_curve,
  p_op6_kbd_rate_scaling,
  p_op6_amp_mod_sensitivity,
  p_op6_key_vel_sensitivity,
  p_op1_enable,
  p_op2_enable,
  p_op3_enable,
  p_op4_enable,
  p_op5_enable,
  p_op6_enable,
  p_n_ports
};

static const peg_data_t p_ports[] = {
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 2, 1, 0, 0, 0 }, 
  { 0, 2, 0, 0, 1, 0 }, 
  { 1, 32, 16, 0, 1, 0 }, 
  { 0, 1, 0, 1, 1, 0 }, 
  { 0, 12, 1, 0, 1, 0 }, 
  { 0, 12, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 7, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 7, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 7, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 7, 0, 0, 1, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 32, 5, 0, 1, 0 }, 
  { 0, 7, 6, 0, 1, 0 }, 
  { 0, 1, 0, 1, 1, 0 }, 
  { 0, 99, 34, 0, 1, 0 }, 
  { 0, 99, 33, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 1, 0, 1, 1, 0 }, 
  { 0, 5, 4, 0, 1, 0 }, 
  { 0, 48, 24, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 99, 94, 0, 1, 0 }, 
  { 0, 99, 67, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 60, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 96, 0, 1, 0 }, 
  { 0, 99, 25, 0, 1, 0 }, 
  { 0, 99, 25, 0, 1, 0 }, 
  { 0, 99, 67, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 75, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 1, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { -7, 7, 3, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 2, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 35, 0, 1, 0 }, 
  { 0, 99, 78, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 75, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 58, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 14, 0, 1, 0 }, 
  { 0, 100, 0, 0, 1, 0 }, 
  { -7, 7, 0, 0, 1, 0 }, 
  { 0, 100, 0, 0, 1, 0 }, 
  { 0, 100, 0, 0, 1, 0 }, 
  { 0, 100, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 7, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 1, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { -7, 7, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 2, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 29, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 89, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 1, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { -7, 7, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 6, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 1, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { -7, 7, -7, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 0, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 29, 0, 1, 0 }, 
  { 0, 99, 20, 0, 1, 0 }, 
  { 0, 99, 50, 0, 1, 0 }, 
  { 0, 99, 99, 0, 1, 0 }, 
  { 0, 99, 95, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 79, 0, 1, 0 }, 
  { 0, 1, 0, 0, 1, 0 }, 
  { 0, 31, 1, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { -7, 7, 7, 0, 1, 0 }, 
  { 0, 99, 41, 0, 1, 0 }, 
  { 0, 99, 0, 0, 1, 0 }, 
  { 0, 99, 19, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 3, 0, 1, 0 }, 
  { 0, 3, 0, 0, 1, 0 }, 
  { 0, 7, 6, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
  { 0, 1, 1, 0, 1, 0 }, 
};


#endif /* dexed_ttl_h */
