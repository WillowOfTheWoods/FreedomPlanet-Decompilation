#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20786()
{
    // event 154_85
    {
        if (!(group_main_engine_1)) goto event_154_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (-1))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_154_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_154_85_end: ;
}
void Frames::event_func_20787()
{
    // event 155_85
    {
        if (!(group_main_engine_1)) goto event_155_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_155_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.5, 8));
        }
    }
    event_155_85_end: ;
}
void Frames::event_func_20788()
{
    // event 156_85
    {
        if (!(group_main_engine_1)) goto event_156_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (8))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_156_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        FrameObject * single_instance_156_85_0; single_instance_156_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemythundercarrier_4153_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemythundercarrierbolt_3294(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_156_85_0 == NULL)
                    single_instance_156_85_0 = new_obj;
            }
        }
    }
    event_156_85_end: ;
}
void Frames::event_func_20789()
{
    // event 157_85
    {
        if (!(group_main_engine_1)) goto event_157_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (100))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_157_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_157_85_end: ;
}
void Frames::event_func_20790()
{
    // event 158_85
    {
        if (!(group_main_engine_1)) goto event_158_85_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_158_85_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_158_85_end: ;
}
void Frames::event_func_20791()
{
    // event 160_85
    {
        if (!(group_main_engine_1)) goto event_160_85_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) == (((Active*)get_instance(enemythundercarrier_4153_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (40))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_160_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_160_85_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 40);
        }
    }
    event_160_85_end: ;
}
void Frames::event_func_20792()
{
    // event 162_85
    {
        if (!(group_main_engine_1)) goto event_162_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)) <= (0))) goto event_162_85_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        playerdragonrider_3985_instances.clear_selection();
        if (!check_overlap(enemythundercarrierbolt_3294_instances, playerdragonrider_3985_instances)) goto event_162_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_162_85_end;
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(5);
    }
    event_162_85_end: ;
}
void Frames::event_func_20793()
{
    // event 163_85
    {
        if (!(group_main_engine_1)) goto event_163_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (100))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_163_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)-0.5, 0));
        }
    }
    event_163_85_end: ;
}
void Frames::event_func_20794()
{
    // event 164_85
    {
        if (!(group_main_engine_1)) goto event_164_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_164_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_164_85_end: ;
}
void Frames::event_func_20795()
{
    // event 165_85
    {
        if (!(group_main_engine_1)) goto event_165_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (101))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_165_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 0.1);
        }
    }
    event_165_85_end: ;
}
void Frames::event_func_20796()
{
    // event 166_85
    {
        if (!(group_main_engine_1)) goto event_166_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (101))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (-48))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_166_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_166_85_end: ;
}
void Frames::event_func_20797()
{
    // event 167_85
    {
        if (!(group_main_engine_1)) goto event_167_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_167_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(9, 6);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_167_85_end: ;
}
void Frames::event_func_20798()
{
    // event 169_85
    {
        if (!(group_main_engine_1)) goto event_169_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_169_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_169_85_end: ;
}
void Frames::event_func_20799()
{
    // event 170_85
    {
        if (!(group_main_engine_1)) goto event_170_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-32))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_170_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_170_85_end: ;
}
void Frames::event_func_20800()
{
    // event 171_85
    {
        if (!(group_main_engine_1)) goto event_171_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_171_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_171_85_end: ;
}
void Frames::event_func_20801()
{
    // event 172_85
    {
        if (!(group_main_engine_1)) goto event_172_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_172_85_end: ;
}
void Frames::event_func_20802()
{
    // event 173_85
    {
        if (!(group_main_engine_1)) goto event_173_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_173_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_173_85_end: ;
}
void Frames::event_func_20803()
{
    // event 174_85
    {
        if (!(group_main_engine_1)) goto event_174_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (25))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_174_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_174_85_end: ;
}
void Frames::event_func_20804()
{
    // event 175_85
    {
        if (!(group_main_engine_1)) goto event_175_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_175_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_175_85_end: ;
}
void Frames::event_func_20805()
{
    // event 176_85
    {
        if (!(group_main_engine_1)) goto event_176_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (60))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_176_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_176_85_end: ;
}
void Frames::event_func_20806()
{
    // event 177_85
    {
        if (!(group_main_engine_1)) goto event_177_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (60))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_177_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, -2);
        }
    }
    event_177_85_end: ;
}
void Frames::event_func_20807()
{
    // event 178_85
    {
        if (!(group_main_engine_1)) goto event_178_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)-20+30))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_178_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_178_85_end: ;
}
void Frames::event_func_20808()
{
    // event 179_85
    {
        if (!(group_main_engine_1)) goto event_179_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)-20-30))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_179_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_179_85_end: ;
}
void Frames::event_func_20809()
{
    // event 180_85
    {
        if (!(group_main_engine_1)) goto event_180_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (75))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_180_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(5, -8);
        }
        FrameObject * single_instance_180_85_0; single_instance_180_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyufo_4156_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_180_85_0 == NULL)
                    single_instance_180_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_180_85_0))->set_x_scale(0.25);
    }
    event_180_85_end: ;
}
void Frames::event_func_20810()
{
    // event 181_85
    {
        if (!(group_main_engine_1)) goto event_181_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-120))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_181_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_181_85_end: ;
}
void Frames::event_func_20811()
{
    // event 182_85
    {
        if (!(group_main_engine_1)) goto event_182_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_182_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(9, 6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_182_85_end: ;
}
void Frames::event_func_20812()
{
    // event 184_85
    {
        if (!(group_main_engine_1)) goto event_184_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_184_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_184_85_end: ;
}
void Frames::event_func_20813()
{
    // event 185_85
    {
        if (!(group_main_engine_1)) goto event_185_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-32))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_185_85_end;
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_185_85_end: ;
}
void Frames::event_func_20814()
{
    // event 187_85
    {
        if (!(group_main_engine_1)) goto event_187_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (0))) goto event_187_85_end;
        if (!((global_values->get(4)) < (2))) goto event_187_85_end;
        if (once_condition_187_85) goto event_187_85_end;
        once_condition_187_85 = true;
        global_values->set(4, 2);
        media.play(str_data_bgm_m_midboss_ogg_50, 32-1, 0);
    }
    event_187_85_end: ;
}
void Frames::event_func_20815()
{
    // event 188_85
    {
        if (!(group_main_engine_1)) goto event_188_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (0))) goto event_188_85_end;
        if (once_condition_188_85) goto event_188_85_end;
        once_condition_188_85 = true;
        ((Counter*)get_instance(guidistance_4172_instances))->set_visible(false);
        ((Active*)get_instance(guimeters_4173_instances))->set_direction(8);
        ((Active*)get_instance(guimeters_4173_instances))->set_y(frame_top()+60);
        ((Active*)get_instance(guimeters_4173_instances))->set_x(frame_left()+global_values->get(16)*0.5);
        if (!group_main_engine_bosses_boss_syntax_1) {
            group_main_engine_bosses_boss_syntax_1 = true;
        }
            group_main_engine_enemies_enemy_spawning_1 = false;
    
    }
    event_188_85_end: ;
}
void Frames::event_func_20816()
{
    // event 189_85
    {
        if (!(group_main_engine_1)) goto event_189_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+40))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_189_85_end;
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_189_85_end: ;
}
void Frames::event_func_20817()
{
    // event 190_85
    {
        if (!(group_main_engine_1)) goto event_190_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(3, 352);
    }
    event_190_85_end: ;
}
void Frames::event_func_20818()
{
    // event 191_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_191_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_191_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.add(25, 1);
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_191_85_end: ;
}
void Frames::event_func_20819()
{
    // event 192_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_192_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (width))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_192_85_end;
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.1, 0));
        }
    }
    event_192_85_end: ;
}
void Frames::event_func_20820()
{
    // event 193_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_193_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(25)) > (10))) goto event_193_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(25, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->flags.toggle(1);
    }
    event_193_85_end: ;
}
void Frames::event_func_20821()
{
    // event 194_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_194_85_end;
        if (!(((Active*)get_instance(guimeters_4173_instances))->alterables->flags.is_off(1))) goto event_194_85_end;
        if (not_always_194_85 > loop_count) {
            not_always_194_85 = loop_count + 2;
            goto event_194_85_end;
        }
        not_always_194_85 = loop_count + 2;
        ((Active*)get_instance(guimeters_4173_instances))->set_visible(true);
    }
    event_194_85_end: ;
}
void Frames::event_func_20822()
{
    // event 195_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_195_85_end;
        if (!(((Active*)get_instance(guimeters_4173_instances))->alterables->flags.is_on(1))) goto event_195_85_end;
        if (not_always_195_85 > loop_count) {
            not_always_195_85 = loop_count + 2;
            goto event_195_85_end;
        }
        not_always_195_85 = loop_count + 2;
        ((Active*)get_instance(guimeters_4173_instances))->set_visible(false);
    }
    event_195_85_end: ;
}
void Frames::event_func_20823()
{
    // event 196_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_196_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_196_85_end;
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        ((Active*)get_instance(guimeters_4173_instances))->alterables->flags.enable(1);
    }
    event_196_85_end: ;
}
void Frames::event_func_20824()
{
    // event 197_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_197_85_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_197_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_197_85_end;
        FrameObject * single_instance_197_85_0; single_instance_197_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(syntax_4163_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectparticleabsorb_4157(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_197_85_0 == NULL)
                    single_instance_197_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_197_85_0))->set_x(((Active*)get_single(syntax_4163_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(syntax_4163_instances, default_active_instance))->alterables->values.get(2))*200);
        ((Active*)((Active*)single_instance_197_85_0))->set_y(((Active*)get_single(syntax_4163_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(syntax_4163_instances, default_active_instance))->alterables->values.get(2))*200);
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 150);
        }
    }
    event_197_85_end: ;
}
void Frames::event_func_20825()
{
    // event 198_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_198_85_end;
        effectparticleabsorb_4157_instances.clear_selection();
        for (ObjectIterator it(effectparticleabsorb_4157_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*9+((Active*)get_instance(syntax_4163_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*9+((Active*)get_instance(syntax_4163_instances, it.current_index, default_active_instance))->get_y())*0.1);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_198_85_end: ;
}
void Frames::event_func_20826()
{
    // event 199_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_199_85_end;
        effectparticleabsorb_4157_instances.clear_selection();
        for (ObjectIterator it(effectparticleabsorb_4157_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!effectparticleabsorb_4157_instances.has_selection()) goto event_199_85_end;
        for (ObjectIterator it(effectparticleabsorb_4157_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_199_85_end: ;
}
void Frames::event_func_20827()
{
    // event 200_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_200_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_200_85_end;
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_200_85_end: ;
}
void Frames::event_func_20828()
{
    // event 201_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_201_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_201_85_end;
        if (!((levelcardfade_461_instances.size()) == (0))) goto event_201_85_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 3);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_201_85_end: ;
}
void Frames::event_func_20829()
{
    // event 202_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_202_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (30))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_202_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 3);
        }
    }
    event_202_85_end: ;
}
void Frames::event_func_20830()
{
    // event 203_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_203_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_203_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_203_85_end;
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_y(-80);
        }
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, 120);
        effectparticleabsorb_4157_instances.clear_selection();
        for (ObjectIterator it(effectparticleabsorb_4157_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_main_engine_bosses_boss_syntax_boss_main_1) {
            group_main_engine_bosses_boss_syntax_boss_main_1 = true;
        }
    }
    event_203_85_end: ;
}
void Frames::event_func_20831()
{
    // event 204_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_204_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_204_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 3);
        }
    }
    event_204_85_end: ;
}
void Frames::event_func_20832()
{
    // event 205_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_intro_1)) goto event_205_85_end;
        syntax_4163_instances.clear_selection();
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!syntax_4163_instances.has_selection()) goto event_205_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_205_85_end;
            group_main_engine_bosses_boss_syntax_boss_intro_1 = false;
    
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(syntax_4163_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_205_85_end: ;
}
void Frames::event_func_20833()
{
    // event 206_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_206_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(5, (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)+2)%math_helper%360);
    }
    event_206_85_end: ;
}
void Frames::event_func_20834()
{
    // event 207_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_207_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(3));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_y(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 180);
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 180);
        }
    }
    event_207_85_end: ;
}
void Frames::event_func_20835()
{
    // event 208_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_208_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->get_x()+sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)*2)*10*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)*2-90)*10*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)*2-90)*10*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6));
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6));
        }
    }
    event_208_85_end: ;
}
void Frames::event_func_20836()
{
    // event 209_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_209_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->get_x()+sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)*2)*5*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5))*60+180)*56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5))*60+180)*56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5))*60+180)*56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5))*60+180)*-56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)+(0-sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)-30)*45)*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)+(sin_deg(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(5)-30)*45)*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7));
        }
    }
    event_209_85_end: ;
}
void Frames::event_func_20837()
{
    // event 210_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_210_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->get_x()+24*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-48*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8));
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8));
        }
    }
    event_210_85_end: ;
}
void Frames::event_func_20838()
{
    // event 211_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_211_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_x(((Active*)get_instance(bosscancerforcehead_4170_instances))->get_x()+24*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-48*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-56*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9));
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9));
        }
    }
    event_211_85_end: ;
}
void Frames::event_func_20839()
{
    // event 212_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_212_85_end;
        bosscancerforceclawtop1_4166_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index));
            if (parent == NULL) goto pos_end_212_85_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_212_85_0: ;
        }
        bosscancerforceclawtop2_4168_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index));
            if (parent == NULL) goto pos_end_212_85_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_212_85_1: ;
        }
        bosscancerforceclawbottom1_4167_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index));
            if (parent == NULL) goto pos_end_212_85_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_212_85_2: ;
        }
        bosscancerforceclawbottom2_4169_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index));
            if (parent == NULL) goto pos_end_212_85_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_212_85_3: ;
        }
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index, default_active_instance))->alterables->values.get(5)-180+((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-1, 0);
        }
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index, default_active_instance))->alterables->values.get(5)-180+((Active*)get_instance(bosscancerforcehandtop_4164_instances, it.current_index, default_active_instance))->alterables->values.get(6), 0);
        }
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index, default_active_instance))->alterables->values.get(5)-180+((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index, default_active_instance))->alterables->values.get(6), 0);
        }
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index, default_active_instance))->alterables->values.get(5)-180+((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-1, 0);
        }
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(180-((Active*)get_instance(bosscancerforcehandbottom_4165_instances, it.current_index, default_active_instance))->alterables->values.get(5), 0);
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(180-((Active*)get_single(bosscancerforcehandtop_4164_instances, it.current_index, default_active_instance))->alterables->values.get(5), 0);
        }
    }
    event_212_85_end: ;
}
void Frames::event_func_20840()
{
    // event 213_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_213_85_end;
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (45))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandtop_4164_instances.has_selection()) goto event_213_85_end;
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_213_85_end: ;
}
void Frames::event_func_20841()
{
    // event 214_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_214_85_end;
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (45))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandtop_4164_instances.has_selection()) goto event_214_85_end;
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_214_85_end: ;
}
void Frames::event_func_20842()
{
    // event 215_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_215_85_end;
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (45))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandbottom_4165_instances.has_selection()) goto event_215_85_end;
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_215_85_end: ;
}
void Frames::event_func_20843()
{
    // event 216_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_216_85_end;
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (45))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandbottom_4165_instances.has_selection()) goto event_216_85_end;
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_216_85_end: ;
}
void Frames::event_func_20844()
{
    // event 217_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_217_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (0))) goto event_217_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4)*19+((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1))*0.05);
    }
    event_217_85_end: ;
}
void Frames::event_func_20845()
{
    // event 218_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_218_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (3))) goto event_218_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) < (40))) goto event_218_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4)*9+((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1))*0.1);
    }
    event_218_85_end: ;
}
void Frames::event_func_20846()
{
    // event 219_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_219_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_219_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) < (40))) goto event_219_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4)*9+((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)-30)*0.1);
    }
    event_219_85_end: ;
}
void Frames::event_func_20847()
{
    // event 220_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_220_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (0))) goto event_220_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
    }
    event_220_85_end: ;
}
void Frames::event_func_20848()
{
    // event 221_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_221_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (0))) goto event_221_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (60))) goto event_221_85_end;
        if (!(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.is_off(1))) goto event_221_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.toggle(1);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 3);
    }
    event_221_85_end: ;
}
void Frames::event_func_20849()
{
    // event 222_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_222_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (0))) goto event_222_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (60))) goto event_222_85_end;
        if (!(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.is_on(1))) goto event_222_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.toggle(1);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 1);
    }
    event_222_85_end: ;
}
void Frames::event_func_20850()
{
    // event 223_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_223_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (1))) goto event_223_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6)-0.05, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(7, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)+0.05, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(4)*19+120)*0.05);
    }
    event_223_85_end: ;
}
void Frames::event_func_20851()
{
    // event 224_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_224_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)) == (1))) goto event_224_85_end;
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, 45));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, 45));
        }
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_224_85_end: ;
}
void Frames::event_func_20852()
{
    // event 225_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_225_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)) == (1))) goto event_225_85_end;
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (60))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandtop_4164_instances.has_selection()) goto event_225_85_end;
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 45);
        }
        FrameObject * single_instance_225_85_0; single_instance_225_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandtop_4164_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcelaser_4158(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_225_85_0 == NULL)
                    single_instance_225_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_225_85_0))->alterables->values.set(3, ((Active*)single_instance_225_85_0)->get_x());
        ((Active*)((Active*)single_instance_225_85_0))->alterables->values.set(4, ((Active*)single_instance_225_85_0)->get_y());
        ((Active*)((Active*)single_instance_225_85_0))->set_angle(((Active*)get_single(bosscancerforcehandtop_4164_instances, default_active_instance))->alterables->values.get(5), 0);
        ((Active*)((Active*)single_instance_225_85_0))->alterables->values.set(5, cos_deg(((Active*)get_single(bosscancerforcehandtop_4164_instances, default_active_instance))->alterables->values.get(5))*4);
        ((Active*)((Active*)single_instance_225_85_0))->alterables->values.set(6, sin_deg(((Active*)get_single(bosscancerforcehandtop_4164_instances, default_active_instance))->alterables->values.get(5))*-4);
        ((Active*)single_instance_225_85_0)->move_back(((Active*)get_single(bosscancerforcehandtop_4164_instances)));
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
    }
    event_225_85_end: ;
}
void Frames::event_func_20853()
{
    // event 226_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_226_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)) == (1))) goto event_226_85_end;
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (60))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandbottom_4165_instances.has_selection()) goto event_226_85_end;
        FrameObject * single_instance_226_85_0; single_instance_226_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandbottom_4165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcelaser_4158(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_226_85_0 == NULL)
                    single_instance_226_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_226_85_0))->alterables->values.set(3, ((Active*)single_instance_226_85_0)->get_x());
        ((Active*)((Active*)single_instance_226_85_0))->alterables->values.set(4, ((Active*)single_instance_226_85_0)->get_y());
        ((Active*)((Active*)single_instance_226_85_0))->set_angle(((Active*)get_single(bosscancerforcehandbottom_4165_instances, default_active_instance))->alterables->values.get(5), 0);
        ((Active*)((Active*)single_instance_226_85_0))->alterables->values.set(5, cos_deg(((Active*)get_single(bosscancerforcehandbottom_4165_instances, default_active_instance))->alterables->values.get(5))*4);
        ((Active*)((Active*)single_instance_226_85_0))->alterables->values.set(6, sin_deg(((Active*)get_single(bosscancerforcehandbottom_4165_instances, default_active_instance))->alterables->values.get(5))*-4);
        ((Active*)single_instance_226_85_0)->move_back(((Active*)get_single(bosscancerforcehandbottom_4165_instances)));
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 45);
        }
    }
    event_226_85_end: ;
}
void Frames::event_func_20854()
{
    // event 227_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_227_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (1))) goto event_227_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (450))) goto event_227_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(10, 1);
    }
    event_227_85_end: ;
}
void Frames::event_func_20855()
{
    // event 228_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_228_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (2))) goto event_228_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6)+0.05, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)-0.05, 0));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
    }
    event_228_85_end: ;
}
void Frames::event_func_20856()
{
    // event 229_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_229_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (2))) goto event_229_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)) <= (0))) goto event_229_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 0);
    }
    event_229_85_end: ;
}
void Frames::event_func_20857()
{
    // event 230_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_230_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (3))) goto event_230_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(8, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8)+0.1, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, 45));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
    }
    event_230_85_end: ;
}
void Frames::event_func_20858()
{
    // event 231_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_231_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (3))) goto event_231_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (40))) goto event_231_85_end;
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
    }
    event_231_85_end: ;
}
void Frames::event_func_20859()
{
    // event 232_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_232_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (3))) goto event_232_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (40))) goto event_232_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) < (80))) goto event_232_85_end;
        FrameObject * single_instance_232_85_0; single_instance_232_85_0 = NULL;
        // select single: true false false
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator p_it(bosscancerforcehandtop_4164_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcelaser_4158(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_232_85_0 == NULL)
                    single_instance_232_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_232_85_0))->alterables->values.set(3, ((Active*)single_instance_232_85_0)->get_x());
        ((Active*)((Active*)single_instance_232_85_0))->alterables->values.set(4, ((Active*)single_instance_232_85_0)->get_y());
        ((Active*)((Active*)single_instance_232_85_0))->alterables->values.set(5, -31);
        ((Active*)single_instance_232_85_0)->move_back(((Active*)get_single(bosscancerforcehandtop_4164_instances)));
        ((Active*)((Active*)single_instance_232_85_0))->set_direction(8);
    }
    event_232_85_end: ;
}
void Frames::event_func_20860()
{
    // event 233_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_233_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (3))) goto event_233_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (80))) goto event_233_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(10, 1);
    }
    event_233_85_end: ;
}
void Frames::event_func_20861()
{
    // event 234_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_234_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_234_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(8, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9)+0.1, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, 45));
        }
    }
    event_234_85_end: ;
}
void Frames::event_func_20862()
{
    // event 235_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_235_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_235_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (40))) goto event_235_85_end;
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
    }
    event_235_85_end: ;
}
void Frames::event_func_20863()
{
    // event 236_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_236_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_236_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (40))) goto event_236_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) < (80))) goto event_236_85_end;
        FrameObject * single_instance_236_85_0; single_instance_236_85_0 = NULL;
        // select single: true false false
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator p_it(bosscancerforcehandbottom_4165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcelaser_4158(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_236_85_0 == NULL)
                    single_instance_236_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_236_85_0))->alterables->values.set(3, ((Active*)single_instance_236_85_0)->get_x());
        ((Active*)((Active*)single_instance_236_85_0))->alterables->values.set(4, ((Active*)single_instance_236_85_0)->get_y());
        ((Active*)((Active*)single_instance_236_85_0))->alterables->values.set(5, -31);
        ((Active*)single_instance_236_85_0)->move_back(((Active*)get_single(bosscancerforcehandbottom_4165_instances)));
        ((Active*)((Active*)single_instance_236_85_0))->set_direction(8);
    }
    event_236_85_end: ;
}
void Frames::event_func_20864()
{
    // event 237_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_237_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_237_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (80))) goto event_237_85_end;
        if (!(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.is_off(2))) goto event_237_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 3);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.enable(2);
    }
    event_237_85_end: ;
}
void Frames::event_func_20865()
{
    // event 238_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_238_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (4))) goto event_238_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (80))) goto event_238_85_end;
        if (!(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.is_on(2))) goto event_238_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(10, 1);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->flags.disable(2);
    }
    event_238_85_end: ;
}
void Frames::event_func_20866()
{
    // event 239_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_239_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (5))) goto event_239_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6)+0.05, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9)-0.05, 0));
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-3, 0));
        }
    }
    event_239_85_end: ;
}
void Frames::event_func_20867()
{
    // event 240_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_240_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (5))) goto event_240_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9)) <= (0))) goto event_240_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 0);
    }
    event_240_85_end: ;
}
void Frames::event_func_20868()
{
    // event 241_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_241_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(13)) < (1))) goto event_241_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(0)) < (((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(12)))) goto event_241_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(12, ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(13, 5);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_direction(1);
    }
    event_241_85_end: ;
}
void Frames::event_func_20869()
{
    // event 242_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_242_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(13)) == (2))) goto event_242_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_direction(0);
    }
    event_242_85_end: ;
}
void Frames::event_func_20870()
{
    // event 243_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_243_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->force_frame(get_floor(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(0)/math_helper/150));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(13, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(13)-1, 0));
    }
    event_243_85_end: ;
}
void Frames::event_func_20871()
{
    // event 244_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_244_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(0)) <= (0))) goto event_244_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) < (9))) goto event_244_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(10, 9);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(11, 0);
    }
    event_244_85_end: ;
}
void Frames::event_func_20872()
{
    // event 245_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_245_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_245_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(7)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(8, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(8)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(9)-0.1, 0));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(6)+0.1, 1));
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->force_animation(7);
        bosscancerforceclawbottom2_4169_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosscancerforceclawtop2_4168_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosscancerforceclawbottom1_4167_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosscancerforceclawtop1_4166_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
        media.set_channel_volume(32-1, get_max(media.get_channel_volume(-1 +32)-1, 0));
    }
    event_245_85_end: ;
}
void Frames::event_func_20873()
{
    // event 246_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_246_85_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_246_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_246_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) < (160))) goto event_246_85_end;
        FrameObject * single_instance_246_85_0; single_instance_246_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehead_4170_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_246_85_0 == NULL)
                    single_instance_246_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_246_85_0))->set_x(((Active*)single_instance_246_85_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_246_85_0))->set_y(((Active*)single_instance_246_85_0)->get_y()-60+randrange(121));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_246_85_1_end;
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
        dynamic_246_85_1_end: ;
    }
    event_246_85_end: ;
}
void Frames::event_func_20874()
{
    // event 247_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_247_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_247_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (160))) goto event_247_85_end;
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosscancerforceclawtop1_4166_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosscancerforceclawtop2_4168_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_247_85_end: ;
}
void Frames::event_func_20875()
{
    // event 248_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_248_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_248_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (180))) goto event_248_85_end;
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosscancerforceclawbottom1_4167_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosscancerforceclawbottom2_4169_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_248_85_end: ;
}
void Frames::event_func_20876()
{
    // event 249_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_249_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_249_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (200))) goto event_249_85_end;
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_visible(false);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, -200);
    }
    event_249_85_end: ;
}
void Frames::event_func_20877()
{
    // event 253_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_253_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(25)) >= (8))) goto event_253_85_end;
        bosscancerforcedebris_4159_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcedebris_4159_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforceclawbottom2_4169_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom2_4169_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforceclawbottom1_4167_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawbottom1_4167_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforceclawtop2_4168_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop2_4168_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscancerforceclawtop1_4166_instances.clear_selection();
        for (ObjectIterator it(bosscancerforceclawtop1_4166_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->set_visible(false);
    }
    event_253_85_end: ;
}
void Frames::event_func_20878()
{
    // event 254_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_254_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_254_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (300))) goto event_254_85_end;
        if (!((global_values->get(1)) == (0))) goto event_254_85_end;
        media.play_id(SOUND_DRAGONROAR_6_334, -1, 1);
    }
    event_254_85_end: ;
}
void Frames::event_func_20879()
{
    // event 255_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_255_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_255_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (300))) goto event_255_85_end;
        if (!((global_values->get(1)) != (0))) goto event_255_85_end;
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_255_85_end: ;
}
void Frames::event_func_20880()
{
    // event 256_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_256_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_256_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (300))) goto event_256_85_end;
            group_main_engine_player_player_ship_dragon_dragon_movement_1 = false;
    
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.enable(12);
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
            group_pause_1 = false;
    
            group_main_engine_player_player_ship_tank_tank_movement_1 = false;
    
    }
    event_256_85_end: ;
}
void Frames::event_func_20881()
{
    // event 257_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_257_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_on(12))) goto event_257_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(0, get_min((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)-300)*0.2, 6));
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.add(0, get_min((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)-300)*0.2, 6));
    }
    event_257_85_end: ;
}
void Frames::event_func_20882()
{
    // event 258_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_258_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (400))) goto event_258_85_end;
        if (!((global_values->get(1)) > (0))) goto event_258_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 99);
    }
    event_258_85_end: ;
}
void Frames::event_func_20883()
{
    // event 259_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_259_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) == (500))) goto event_259_85_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(11, 1);
    }
    event_259_85_end: ;
}
void Frames::event_func_20884()
{
    // event 260_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_260_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (500))) goto event_260_85_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_260_85_end: ;
}
void Frames::event_func_20885()
{
    // event 261_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_261_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) > (500))) goto event_261_85_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_261_85_end;
        next_frame = 59 + 0;    
    
        global_values->set(4, 0);
    }
    event_261_85_end: ;
}
