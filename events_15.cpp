#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1214()
{
    // event 1556_13
    {
        if (!(group_main_engine_1)) goto event_1556_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_secret_ogg_51, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1556_13_end: ;
}
void Frames::loop_play_music_6_13()
{
    event_func_1214();
}
void Frames::event_func_1215()
{
    // event 1558_13
    {
        if (!(group_main_engine_1)) goto event_1558_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_gameover_ogg_53, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1558_13_end: ;
}
void Frames::loop_play_music_8_13()
{
    event_func_1215();
}
void Frames::event_func_1216()
{
    // event 1565_13
    {
        if (!(group_main_engine_1)) goto event_1565_13_end;
        stringparser_427_instances.clear_selection();
        for (ObjectIterator it(stringparser_427_instances); !it.end(); ++it) {
            ((StringParser*)*it)->set(((ArrayObject*)get_instance(functionmusic_231_instances, it.current_index))->get_string(((ArrayObject*)get_instance(functionmusic_231_instances, it.current_index))->data.x_pos));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_process_call_54+((StringParser*)get_single(stringparser_427_instances))->get_element(1));
            if (dyn_it == (*loops).end()) goto dynamic_1565_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1565_13_0_end: ;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1565_13_end: ;
}
void Frames::loop_process_call_me_13()
{
    event_func_1216();
}
void Frames::event_func_1217()
{
    // event 116_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_116_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectsensorangles_55);
    }
    event_116_13_end: ;
}
void Frames::loop_player01detectsensorangles_13()
{
    event_func_1217();
}
void Frames::event_func_1218()
{
    // event 1094_13
    {
        if (!(group_main_engine_1)) goto event_1094_13_end;
        FrameObject * single_instance_1094_13_0; single_instance_1094_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectscolordot_308(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1094_13_0 == NULL)
                    single_instance_1094_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1094_13_0))->alterables->values.set(0, loop_color_dots_index*90);
        ((Active*)((Active*)single_instance_1094_13_0))->set_direction(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10+loop_color_dots_index)-1);
        ((Active*)((Active*)single_instance_1094_13_0))->set_layer(5-1);
    }
    event_1094_13_end: ;
}
void Frames::loop_color_dots_13()
{
    event_func_1218();
}
void Frames::event_func_1219()
{
    // event 153_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_153_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_153_13_end;
        if (!((((Active*)get_instance(playersensortop_394_instances))->alterables->values.get(25)) == (1))) goto event_153_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+1);
    }
    event_153_13_end: ;
}
void Frames::event_func_1220()
{
    // event 154_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_154_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_154_13_end;
        if (!((((Active*)get_instance(playersensortop_394_instances))->alterables->values.get(25)) == (0))) goto event_154_13_end;
            loop_player01up_running = false;
    
    }
    event_154_13_end: ;
}
void Frames::loop_player01up_13()
{
    event_func_1219();
    event_func_1220();
}
void Frames::event_func_1221()
{
    // event 1572_13
    {
        if (!(group_main_engine_1)) goto event_1572_13_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(controllermusic_128_instances, default_active_instance))->alterables->values.get(7)*(global_values->get(25)*0.01));
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_play_music_56+number_to_string(((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos-1, 0)));
            if (dyn_it == (*loops).end()) goto dynamic_1572_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1572_13_0_end: ;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos-1, 0));
        }
        media.set_channel_position(32-1, ((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos-1, 1));
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos-1, 2));
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((ArrayObject*)*it)->data.x_pos-1;
        }
    }
    event_1572_13_end: ;
}
void Frames::loop_process_call_resume_music_13()
{
    event_func_1221();
}
void Frames::event_func_1222()
{
    // event 1192_13
    {
        if (!(group_main_engine_1)) goto event_1192_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (7))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1192_13_end;
        FrameObject * single_instance_1192_13_0; single_instance_1192_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 16, parent->y + 10), parent->layer);
                if (single_instance_1192_13_0 == NULL)
                    single_instance_1192_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1192_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1192_13_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1192_13_0))->set_direction(5+loop_spawn_crystals_index);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1192_13_end: ;
}
void Frames::event_func_1223()
{
    // event 1219_13
    {
        if (!(group_main_engine_1)) goto event_1219_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (7))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1219_13_end;
        FrameObject * single_instance_1219_13_0; single_instance_1219_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 16, parent->y + 10), parent->layer);
                if (single_instance_1219_13_0 == NULL)
                    single_instance_1219_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1219_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1219_13_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1219_13_0))->set_direction(5+loop_spawn_crystals_index);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1219_13_end: ;
}
void Frames::loop_spawn_crystals_13()
{
    event_func_1222();
    event_func_1223();
}
void Frames::event_func_1224()
{
    // event 111_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_111_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(5, str_player01detectsensorslope_57);
    }
    event_111_13_end: ;
}
void Frames::loop_player01detectsensorslope_13()
{
    event_func_1224();
}
void Frames::event_func_1225()
{
    // event 28_13
    {
        if (!(group_main_engine_1)) goto event_28_13_end;
        if (!group_main_engine_global_methods_player_1) {
            group_main_engine_global_methods_player_1 = true;
        }
    }
    event_28_13_end: ;
}
void Frames::loop_start_player_13()
{
    event_func_1225();
}
void Frames::event_func_1226()
{
    // event 1357_13
    {
        if (!(group_main_engine_1)) goto event_1357_13_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
    }
    event_1357_13_end: ;
}
void Frames::loop_cutscene_start_13()
{
    event_func_1226();
}
void Frames::event_func_1227()
{
    // event 157_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_157_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_157_13_end;
        if (!((((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.get(25)) == (1))) goto event_157_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-1);
    }
    event_157_13_end: ;
}
void Frames::event_func_1228()
{
    // event 158_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_158_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_158_13_end;
        if (!((((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.get(25)) == (0))) goto event_158_13_end;
            loop_player01down_running = false;
    
    }
    event_158_13_end: ;
}
void Frames::loop_player01down_13()
{
    event_func_1227();
    event_func_1228();
}
void Frames::event_func_1229()
{
    // event 1491_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1491_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1491_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+6+get_min(get_abs(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 4)+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))/math_helper/1.5, ((Active*)get_instance(player_389_instances))->get_x()));
    }
    event_1491_13_end: ;
}
void Frames::event_func_1230()
{
    // event 1492_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1492_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1492_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-6+get_max(0-get_abs(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), -4)-get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))/math_helper/1.5, ((Active*)get_instance(player_389_instances))->get_x()));
    }
    event_1492_13_end: ;
}
void Frames::event_func_1231()
{
    // event 1493_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1493_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1493_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))/math_helper/2.0, ((Active*)get_instance(player_389_instances))->get_y()));
    }
    event_1493_13_end: ;
}
void Frames::event_func_1232()
{
    // event 1494_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1494_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1494_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-6-get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))/math_helper/2.0, ((Active*)get_instance(player_389_instances))->get_y()));
    }
    event_1494_13_end: ;
}
void Frames::event_func_1233()
{
    // event 1495_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1495_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) == (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1495_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) == (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1495_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_1495_13_end: ;
}
void Frames::loop_camera_mode2_13()
{
    event_func_1229();
    event_func_1230();
    event_func_1231();
    event_func_1232();
    event_func_1233();
}
void Frames::event_func_1234()
{
    // event 1486_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1486_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 1);
    }
    event_1486_13_end: ;
}
void Frames::loop_camera_mode1_13()
{
    event_func_1234();
}
void Frames::event_func_1235()
{
    // event 1460_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1460_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) != (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(21)))) goto event_1460_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1460_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1460_13_end: ;
}
void Frames::event_func_1236()
{
    // event 1461_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1461_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1461_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)) > (0.0))) goto event_1461_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)-4.0, 0.0));
    }
    event_1461_13_end: ;
}
void Frames::event_func_1237()
{
    // event 1462_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1462_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1462_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)) < (0.0))) goto event_1462_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)+4.0, 0.0));
    }
    event_1462_13_end: ;
}
void Frames::event_func_1238()
{
    // event 1463_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1463_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1463_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1463_13_end: ;
}
void Frames::event_func_1239()
{
    // event 1464_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1464_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(8)))) goto event_1464_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1464_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(8));
    }
    event_1464_13_end: ;
}
void Frames::event_func_1240()
{
    // event 1465_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1465_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(9)))) goto event_1465_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1465_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(9));
    }
    event_1465_13_end: ;
}
void Frames::event_func_1241()
{
    // event 1466_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1466_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1466_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(10)))) goto event_1466_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1466_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(10));
    }
    event_1466_13_end: ;
}
void Frames::event_func_1242()
{
    // event 1467_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1467_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1467_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(11)))) goto event_1467_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1467_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(11));
    }
    event_1467_13_end: ;
}
void Frames::event_func_1243()
{
    // event 1468_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1468_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.disable(0);
    }
    event_1468_13_end: ;
}
void Frames::event_func_1244()
{
    // event 1469_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1469_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1469_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1469_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (2))) goto event_1469_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1469_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1469_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_1469_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(13, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)+1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.enable(0);
    }
    event_1469_13_end: ;
}
void Frames::event_func_1245()
{
    // event 1470_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1470_13_end;
        if (!(((Active*)get_instance(mastercamera_430_instances))->alterables->flags.is_off(0))) goto event_1470_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(13, 0);
    }
    event_1470_13_end: ;
}
void Frames::event_func_1246()
{
    // event 1471_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1471_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1471_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1471_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) < (0))) goto event_1471_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+2, 0));
    }
    event_1471_13_end: ;
}
void Frames::event_func_1247()
{
    // event 1472_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1472_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1472_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(17)));
    }
    event_1472_13_end: ;
}
void Frames::event_func_1248()
{
    // event 1473_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1473_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.disable(1);
    }
    event_1473_13_end: ;
}
void Frames::event_func_1249()
{
    // event 1474_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1474_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1474_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1474_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (3))) goto event_1474_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1474_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1474_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_1474_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)+1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.enable(1);
    }
    event_1474_13_end: ;
}
void Frames::event_func_1250()
{
    // event 1475_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1475_13_end;
        if (!(((Active*)get_instance(mastercamera_430_instances))->alterables->flags.is_off(1))) goto event_1475_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_1475_13_end: ;
}
void Frames::event_func_1251()
{
    // event 1476_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1476_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1476_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1476_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) > (0))) goto event_1476_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-2, 0));
    }
    event_1476_13_end: ;
}
void Frames::event_func_1252()
{
    // event 1477_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1477_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1477_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(17)));
    }
    event_1477_13_end: ;
}
void Frames::event_func_1253()
{
    // event 1478_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1478_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (5))) goto event_1478_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1478_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1478_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1478_13_end: ;
}
void Frames::event_func_1254()
{
    // event 1479_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1479_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (-5))) goto event_1479_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1479_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1479_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1479_13_end: ;
}
void Frames::event_func_1255()
{
    // event 1480_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1480_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1480_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1480_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2.5, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1480_13_end: ;
}
void Frames::event_func_1256()
{
    // event 1481_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1481_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1481_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1481_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2.5, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1481_13_end: ;
}
void Frames::event_func_1257()
{
    // event 1482_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1482_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (19))) goto event_1482_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1482_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1482_13_end: ;
}
void Frames::event_func_1258()
{
    // event 1483_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1483_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (19))) goto event_1483_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1483_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1483_13_end: ;
}
void Frames::event_func_1259()
{
    // event 1484_13
    bool or_result_1484_13 = false;
    bool or_temp_result_1484_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1484_13_0_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto or_event_1484_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (5))) goto or_event_1484_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-5))) goto or_event_1484_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto or_event_1484_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (19))) goto or_event_1484_13_0_end;
        or_result_1484_13 = true;
        or_temp_result_1484_13_0 = true;
    }
    or_event_1484_13_0_end: ;
    // event 1484_13
    bool or_temp_result_1484_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1484_13_1_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto or_event_1484_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1484_13_1_end;
        or_result_1484_13 = true;
        or_temp_result_1484_13_1 = true;
        or_event_1484_13_1_end: ;
        if (!or_result_1484_13) goto or_final_or_event_1484_13_1_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0));
    }
    or_final_or_event_1484_13_1_end: ;
}
void Frames::event_func_1260()
{
    // event 1485_13
    bool or_result_1485_13 = false;
    bool or_temp_result_1485_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1485_13_0_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto or_event_1485_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (5))) goto or_event_1485_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-5))) goto or_event_1485_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto or_event_1485_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (19))) goto or_event_1485_13_0_end;
        or_result_1485_13 = true;
        or_temp_result_1485_13_0 = true;
    }
    or_event_1485_13_0_end: ;
    // event 1485_13
    bool or_temp_result_1485_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1485_13_1_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto or_event_1485_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1485_13_1_end;
        or_result_1485_13 = true;
        or_temp_result_1485_13_1 = true;
        or_event_1485_13_1_end: ;
        if (!or_result_1485_13) goto or_final_or_event_1485_13_1_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, 0));
    }
    or_final_or_event_1485_13_1_end: ;
}
void Frames::loop_camera_mode0_13()
{
    event_func_1235();
    event_func_1236();
    event_func_1237();
    event_func_1238();
    event_func_1239();
    event_func_1240();
    event_func_1241();
    event_func_1242();
    event_func_1243();
    event_func_1244();
    event_func_1245();
    event_func_1246();
    event_func_1247();
    event_func_1248();
    event_func_1249();
    event_func_1250();
    event_func_1251();
    event_func_1252();
    event_func_1253();
    event_func_1254();
    event_func_1255();
    event_func_1256();
    event_func_1257();
    event_func_1258();
    event_func_1259();
    event_func_1260();
}
void Frames::event_func_1261()
{
    // event 21_13
    {
        if (!(group_main_engine_1)) goto event_21_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, 0-atan_deg(((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(1))*1.0)/math_helper/((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(0))*1.0)));
    }
    event_21_13_end: ;
}
void Frames::event_func_1262()
{
    // event 22_13
    {
        if (!(group_main_engine_1)) goto event_22_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)) < (0))) goto event_22_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)+180);
    }
    event_22_13_end: ;
}
void Frames::event_func_1263()
{
    // event 23_13
    {
        if (!(group_main_engine_1)) goto event_23_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(1)) < (0.0))) goto event_23_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)+180);
    }
    event_23_13_end: ;
}
void Frames::event_func_1264()
{
    // event 24_13
    {
        if (!(group_main_engine_1)) goto event_24_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)) == (0))) goto event_24_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(0)) > (0.0))) goto event_24_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, 180);
    }
    event_24_13_end: ;
}
void Frames::event_func_1265()
{
    // event 25_13
    {
        if (!(group_main_engine_1)) goto event_25_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)) == (0))) goto event_25_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(1)) > (0.0))) goto event_25_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, 90);
    }
    event_25_13_end: ;
}
void Frames::event_func_1266()
{
    // event 26_13
    {
        if (!(group_main_engine_1)) goto event_26_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2)) == (180))) goto event_26_13_end;
        if (!((((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(1)) < (0.0))) goto event_26_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(2, 270);
    }
    event_26_13_end: ;
}
void Frames::loop_toolsanglecalculator_13()
{
    event_func_1261();
    event_func_1262();
    event_func_1263();
    event_func_1264();
    event_func_1265();
    event_func_1266();
}
void Frames::event_func_1267()
{
    // event 1154_13
    {
        if (!(group_main_engine_1)) goto event_1154_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1154_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1154_13_end: ;
}
void Frames::event_func_1268()
{
    // event 1155_13
    {
        if (!(group_main_engine_1)) goto event_1155_13_end;
        qualifier_19.clear_selection();
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        enemyrocketpunchershield_3162_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_7)) goto event_1155_13_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1155_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1155_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1155_13_end: ;
}
void Frames::event_func_1269()
{
    // event 1156_13
    {
        if (!(group_main_engine_1)) goto event_1156_13_end;
        qualifier_19.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_8)) goto event_1156_13_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1156_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1156_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1156_13_end: ;
}
void Frames::event_func_1270()
{
    // event 1157_13
    {
        if (!(group_main_engine_1)) goto event_1157_13_end;
        qualifier_19.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(qualifier_19, player_389_instances)) goto event_1157_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1157_13_end: ;
}
void Frames::loop_monitorsunstuckfromground_13()
{
    event_func_1267();
    event_func_1268();
    event_func_1269();
    event_func_1270();
}
void Frames::event_func_1271()
{
    // event 77_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_77_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01detectsensorleft_58);
    }
    event_77_13_end: ;
}
void Frames::loop_player01detectsensorleft_13()
{
    event_func_1271();
}
void Frames::event_func_1272()
{
    // event 698_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_698_13_end;
        media.play_id(SOUND_CAROL_BIKELAND_161, -1, 1);
    }
    event_698_13_end: ;
}
void Frames::event_func_1273()
{
    // event 699_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_699_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_699_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_699_13_end: ;
}
void Frames::event_func_1274()
{
    // event 876_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_876_13_end;
        media.play_id(SOUND_COIL_STEP_164, -1, 1);
    }
    event_876_13_end: ;
}
void Frames::loop_action_land_13()
{
    event_func_1272();
    event_func_1273();
    event_func_1274();
}
void Frames::event_func_1275()
{
    // event 1123_13
    {
        if (!(group_main_engine_1)) goto event_1123_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1123_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1123_13_end: ;
}
void Frames::loop_extralife_floor_13()
{
    event_func_1275();
}
void Frames::event_func_1276()
{
    // event 27_13
    {
        if (!(group_main_engine_1)) goto event_27_13_end;
            group_main_engine_global_methods_player_1 = false;
    
    }
    event_27_13_end: ;
}
void Frames::loop_stop_player_13()
{
    event_func_1276();
}
void Frames::event_func_1277()
{
    // event 1530_13
    {
        if (!(group_main_engine_1)) goto event_1530_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1530_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()-1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()-1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()-1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
        ((Counter*)get_instance(guicrystal_121_instances))->set_y(((Counter*)get_instance(guicrystal_121_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()-1);
    }
    event_1530_13_end: ;
}
void Frames::loop_gui_shiftup_13()
{
    event_func_1277();
}
void Frames::event_func_1278()
{
    // event 149_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_149_13_end;
        if (!((((Active*)get_instance(playersensorright_392_instances))->alterables->values.get(25)) == (1))) goto event_149_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
    }
    event_149_13_end: ;
}
void Frames::event_func_1279()
{
    // event 150_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_150_13_end;
        if (!((((Active*)get_instance(playersensorleft_390_instances))->alterables->values.get(25)) == (1))) goto event_150_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
    }
    event_150_13_end: ;
}
void Frames::event_func_1280()
{
    // event 151_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_151_13_end;
        if (!((((Active*)get_instance(playersensorleft_390_instances))->alterables->values.get(25)) == (0))) goto event_151_13_end;
        if (!((((Active*)get_instance(playersensorright_392_instances))->alterables->values.get(25)) == (0))) goto event_151_13_end;
            loop_player01wallcollision_running = false;
    
    }
    event_151_13_end: ;
}
void Frames::loop_player01wallcollision_13()
{
    event_func_1278();
    event_func_1279();
    event_func_1280();
}
void Frames::event_func_1281()
{
    // event 887_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_887_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_887_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_887_13_end: ;
}
void Frames::event_func_1282()
{
    // event 888_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_888_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_888_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_888_13_end: ;
}
void Frames::event_func_1283()
{
    // event 889_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_889_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_889_13_end;
        FrameObject * single_instance_889_13_0; single_instance_889_13_0 = NULL;
        // select single: true false false
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator p_it(playerskintorquearm_449_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_889_13_0 == NULL)
                    single_instance_889_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(0, ((Active*)single_instance_889_13_0)->get_x());
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(1, ((Active*)single_instance_889_13_0)->get_y());
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(2, cos_deg(0-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(3, sin_deg(0-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_889_13_0))->set_layer(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_889_13_0))->force_animation(10);
        ((Active*)((Active*)single_instance_889_13_0))->force_frame(0);
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(8, 2-get_min(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*0.5, 0.5));
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(10, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(4)*2);
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(7, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*5);
        ((Active*)((Active*)single_instance_889_13_0))->alterables->values.set(12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
    }
    event_889_13_end: ;
}
void Frames::event_func_1284()
{
    // event 890_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_890_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_890_13_end;
        FrameObject * single_instance_890_13_0; single_instance_890_13_0 = NULL;
        // select single: true false false
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator p_it(playerskintorquearm_449_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_890_13_0 == NULL)
                    single_instance_890_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(0, ((Active*)single_instance_890_13_0)->get_x());
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(1, ((Active*)single_instance_890_13_0)->get_y());
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(2, cos_deg(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*8-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.75)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(3, sin_deg(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*8-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.75)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_890_13_0))->set_layer(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_890_13_0))->force_animation(10);
        ((Active*)((Active*)single_instance_890_13_0))->force_frame(0);
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(8, 2-get_min(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*0.5, 0.5));
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(10, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(7, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*5);
        ((Active*)((Active*)single_instance_890_13_0))->alterables->values.set(12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
    }
    event_890_13_end: ;
}
void Frames::event_func_1285()
{
    // event 891_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_891_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_891_13_end;
        FrameObject * single_instance_891_13_0; single_instance_891_13_0 = NULL;
        // select single: true false false
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator p_it(playerskintorquearm_449_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_891_13_0 == NULL)
                    single_instance_891_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(0, ((Active*)single_instance_891_13_0)->get_x());
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(1, ((Active*)single_instance_891_13_0)->get_y());
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(2, cos_deg(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*-8-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.75)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(3, sin_deg(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*-8-((Active*)get_single(playerskintorquearm_449_instances, default_active_instance))->get_angle())*(8+((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*4+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.75)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_891_13_0))->set_layer(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_891_13_0))->force_animation(10);
        ((Active*)((Active*)single_instance_891_13_0))->force_frame(0);
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(8, 2-get_min(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(3)*0.5, 0.5));
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(10, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(7, ((Active*)get_single(playerskintorque_450_instances, default_active_instance))->alterables->values.get(7)*5);
        ((Active*)((Active*)single_instance_891_13_0))->alterables->values.set(12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
    }
    event_891_13_end: ;
}
void Frames::loop_weapon_13()
{
    event_func_1281();
    event_func_1282();
    event_func_1283();
    event_func_1284();
    event_func_1285();
}
void Frames::event_func_1286()
{
    // event 85_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_85_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01detectsensorright_59);
    }
    event_85_13_end: ;
}
void Frames::loop_player01detectsensorright_13()
{
    event_func_1286();
}
void Frames::event_func_1287()
{
    // event 1067_13
    {
        if (!(group_main_engine_1)) goto event_1067_13_end;
        if (!((((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(4)) == (0))) goto event_1067_13_end;
        FrameObject * single_instance_1067_13_0; single_instance_1067_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1067_13_0 == NULL)
                    single_instance_1067_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1067_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1067_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1067_13_0))->alterables->values.set(1, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1067_13_0))->alterables->values.set(2, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1067_13_0))->set_direction(8-(((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(5)/math_helper/11.25)*loop_rings_ringloss_creation_index);
        ((Active*)((Active*)single_instance_1067_13_0))->set_x(((Active*)single_instance_1067_13_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1067_13_0))->set_y(((Active*)single_instance_1067_13_0)->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1067_13_0))->alterables->values.set(5, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(9));
        ((Active*)((Active*)single_instance_1067_13_0))->set_angle(randrange(360), 0);
    }
    event_1067_13_end: ;
}
void Frames::event_func_1288()
{
    // event 1068_13
    {
        if (!(group_main_engine_1)) goto event_1068_13_end;
        if (!((((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(4)) == (1))) goto event_1068_13_end;
        FrameObject * single_instance_1068_13_0; single_instance_1068_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1068_13_0 == NULL)
                    single_instance_1068_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1068_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1068_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1068_13_0))->alterables->values.set(1, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1068_13_0))->alterables->values.set(2, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1068_13_0))->set_direction(8+(((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(5)/math_helper/11.25)*loop_rings_ringloss_creation_index);
        ((Active*)((Active*)single_instance_1068_13_0))->set_x(((Active*)single_instance_1068_13_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1068_13_0))->set_y(((Active*)single_instance_1068_13_0)->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1068_13_0))->alterables->values.set(5, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(9));
        ((Active*)((Active*)single_instance_1068_13_0))->set_angle(randrange(360), 0);
    }
    event_1068_13_end: ;
}
