#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19421()
{
    // event 1757_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1757_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1757_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1757_83_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_01_05_ogg_320, 18-1);
    }
    event_1757_83_end: ;
}
void Frames::event_func_19422()
{
    // event 1758_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1758_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1758_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1758_83_end;
        media.play_id(SOUND_SHADEBEAST_VORTEX_2_350, 17-1);
    }
    event_1758_83_end: ;
}
void Frames::event_func_19423()
{
    // event 1759_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1759_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1759_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1759_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_cutscenes_intro_scene_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1) {
            group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1 = true;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        global_values->set(4, 3);
    }
    event_1759_83_end: ;
}
void Frames::event_func_19424()
{
    // event 1760_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1760_83_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1760_83_end: ;
}
void Frames::event_func_19425()
{
    // event 1761_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1761_83_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1761_83_end;
        lightspark2_577_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_lightspark2_577(-44, 3164), 2);
            lightspark2_577_instances.add_back();
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, randrange(360));
            ((Active*)*it)->alterables->values.set(2, 0.4+randrange(20)*0.1);
        }
    }
    event_1761_83_end: ;
}
void Frames::event_func_19426()
{
    // event 1762_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1762_83_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (400))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1762_83_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1762_83_end: ;
}
void Frames::event_func_19427()
{
    // event 1763_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1763_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (34))) goto event_1763_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1763_83_end;
        if (not_always_1763_83 > loop_count) {
            not_always_1763_83 = loop_count + 2;
            goto event_1763_83_end;
        }
        not_always_1763_83 = loop_count + 2;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)-31));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1763_83_end: ;
}
void Frames::event_func_19428()
{
    // event 1764_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1764_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1764_83_end;
        if (!((media.get_channel_position(-1 +20)) > (5800))) goto event_1764_83_end;
        if (not_always_1764_83 > loop_count) {
            not_always_1764_83 = loop_count + 2;
            goto event_1764_83_end;
        }
        not_always_1764_83 = loop_count + 2;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)-30));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1764_83_end: ;
}
void Frames::event_func_19429()
{
    // event 1765_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1765_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) > (34))) goto event_1765_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1765_83_end;
        if (not_always_1765_83 > loop_count) {
            not_always_1765_83 = loop_count + 2;
            goto event_1765_83_end;
        }
        not_always_1765_83 = loop_count + 2;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)-30));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1765_83_end: ;
}
void Frames::event_func_19430()
{
    // event 1766_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1766_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (-1))) goto event_1766_83_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(0, (((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+357)%math_helper%360);
    }
    event_1766_83_end: ;
}
void Frames::event_func_19431()
{
    // event 1767_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1767_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1767_83_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(0, (((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+3)%math_helper%360);
    }
    event_1767_83_end: ;
}
void Frames::event_func_19432()
{
    // event 1768_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1768_83_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1768_83_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1768_83_end: ;
}
void Frames::event_func_19433()
{
    // event 1769_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1769_83_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1769_83_0: ;
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1769_83_1: ;
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1769_83_2: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechfrontarm_2548_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_3: ;
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontknee_2542_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_4: ;
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg2_2541_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_5: ;
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg_2539_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_6;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_6: ;
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackarm_2516_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_7: ;
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_8;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1769_83_8: ;
        }
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->alterables->values.get(3)+56);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1769_83_9;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1769_83_9: ;
        }
    }
    event_1769_83_end: ;
}
void Frames::event_func_19434()
{
    // event 1770_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1770_83_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1770_83_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1770_83_0: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1770_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1770_83_1: ;
        }
    }
    event_1770_83_end: ;
}
void Frames::event_func_19435()
{
    // event 1771_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1771_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (-1))) goto event_1771_83_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1771_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + 17);
            pos_end_1771_83_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1771_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 86, parent->get_y() + 17);
            pos_end_1771_83_1: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        brevonmechabdomen_2540_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1771_83_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 74, parent->get_y() + -10);
            pos_end_1771_83_2: ;
        }
    }
    event_1771_83_end: ;
}
void Frames::event_func_19436()
{
    // event 1772_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1772_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1772_83_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1772_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 20, parent->get_y() + 17);
            pos_end_1772_83_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1772_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -86, parent->get_y() + 17);
            pos_end_1772_83_1: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        brevonmechabdomen_2540_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1772_83_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -74, parent->get_y() + -10);
            pos_end_1772_83_2: ;
        }
    }
    event_1772_83_end: ;
}
void Frames::event_func_19437()
{
    // event 1773_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1773_83_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1773_83_end: ;
}
void Frames::event_func_19438()
{
    // event 1774_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1774_83_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)-60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+120*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*-12)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
    }
    event_1774_83_end: ;
}
void Frames::event_func_19439()
{
    // event 1775_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1775_83_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 353*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 335*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 75*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 194*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
    }
    event_1775_83_end: ;
}
void Frames::event_func_19440()
{
    // event 1776_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1776_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1776_83_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1776_83_end: ;
}
void Frames::event_func_19441()
{
    // event 1777_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1777_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) > (0))) goto event_1777_83_end;
        if (not_always_1777_83 > loop_count) {
            not_always_1777_83 = loop_count + 2;
            goto event_1777_83_end;
        }
        not_always_1777_83 = loop_count + 2;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1777_83_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1777_83_0_end: ;
    }
    event_1777_83_end: ;
}
void Frames::event_func_19442()
{
    // event 1778_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1778_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) < (1))) goto event_1778_83_end;
        if (not_always_1778_83 > loop_count) {
            not_always_1778_83 = loop_count + 2;
            goto event_1778_83_end;
        }
        not_always_1778_83 = loop_count + 2;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1778_83_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1778_83_0_end: ;
    }
    event_1778_83_end: ;
}
void Frames::event_func_19443()
{
    // event 1779_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1779_83_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1779_83_end: ;
}
void Frames::event_func_19444()
{
    // event 1780_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1780_83_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1780_83_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)*it)->alterables->values.get(2)));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)-8));
        }
    }
    event_1780_83_end: ;
}
void Frames::event_func_19445()
{
    // event 1782_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1782_83_end;
        {
            enemyelite_2510_instances.clear_selection();
            SavedSelection extra_enemyelite_2510_instances(enemyelite_2510_instances);
            for (SavedIterator it(extra_enemyelite_2510_instances); !it.end(); ++it) {
                foreach_instance_elite = ((Active*)*it);
                foreach_elite_83();
            }
        }
    }
    event_1782_83_end: ;
}
void Frames::event_func_19446()
{
    // event 1783_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1783_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1783_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 30);
        }
    }
    event_1783_83_end: ;
}
void Frames::event_func_19447()
{
    // event 1784_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1784_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1784_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1784_83_end: ;
}
void Frames::event_func_19448()
{
    // event 1785_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1785_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1785_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1785_83_end: ;
}
void Frames::event_func_19449()
{
    // event 1786_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1786_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1786_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1786_83_end: ;
}
void Frames::event_func_19450()
{
    // event 1788_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1788_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1788_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1788_83_end: ;
}
void Frames::event_func_19451()
{
    // event 1789_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1789_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1789_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1789_83_end: ;
}
void Frames::event_func_19452()
{
    // event 1790_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1790_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1790_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1790_83_end: ;
}
void Frames::event_func_19453()
{
    // event 1792_83
    bool or_result_1792_83 = false;
    bool or_temp_result_1792_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1792_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1792_83_0_end;
        or_result_1792_83 = true;
        or_temp_result_1792_83_0 = true;
    }
    or_event_1792_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1792_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1792_83
    bool or_temp_result_1792_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1792_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1792_83_1_end;
        or_result_1792_83 = true;
        or_temp_result_1792_83_1 = true;
    }
    or_event_1792_83_1_end: ;
    if (or_temp_result_1792_83_1) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1792_83
    bool or_temp_result_1792_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1792_83_2_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1792_83_2_end;
        or_result_1792_83 = true;
        or_temp_result_1792_83_2 = true;
        or_event_1792_83_2_end: ;
        if (or_temp_result_1792_83_2) {
            enemyelitemask_2511_instances.save_selection();
        }
        if (!or_result_1792_83) goto or_final_or_event_1792_83_2_end;
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1792_83_0 || or_temp_result_1792_83_1 || or_temp_result_1792_83_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_instance(player_389_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    or_final_or_event_1792_83_2_end: ;
}
void Frames::event_func_19454()
{
    // event 1793_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1793_83_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1793_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)+60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1793_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1793_83_end: ;
}
void Frames::event_func_19455()
{
    // event 1794_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1794_83_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1794_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)+80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1794_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1794_83_end: ;
}
void Frames::event_func_19456()
{
    // event 1795_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1795_83_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1795_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)-60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1795_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1795_83_end: ;
}
void Frames::event_func_19457()
{
    // event 1796_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1796_83_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1796_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)-80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1796_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1796_83_end: ;
}
void Frames::event_func_19458()
{
    // event 1797_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1797_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1797_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1797_83_end: ;
}
void Frames::event_func_19459()
{
    // event 1798_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1798_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1798_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1798_83_end: ;
}
void Frames::event_func_19460()
{
    // event 1799_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1799_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1799_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1799_83_end: ;
}
void Frames::event_func_19461()
{
    // event 1800_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1800_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1800_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1800_83_end: ;
}
void Frames::event_func_19462()
{
    // event 1801_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1801_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1801_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1801_83_end: ;
}
void Frames::event_func_19463()
{
    // event 1802_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1802_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1802_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1802_83_end: ;
}
void Frames::event_func_19464()
{
    // event 1803_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1803_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1803_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, -70);
            ((Active*)*it)->alterables->values.set(15, 1);
        }
    }
    event_1803_83_end: ;
}
void Frames::event_func_19465()
{
    // event 1804_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1804_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1804_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1804_83_end: ;
}
void Frames::event_func_19466()
{
    // event 1805_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1805_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1805_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1805_83_end: ;
}
void Frames::event_func_19467()
{
    // event 1806_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1806_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1806_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1806_83_end: ;
}
void Frames::event_func_19468()
{
    // event 1807_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1807_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1807_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1807_83_end: ;
}
void Frames::event_func_19469()
{
    // event 1808_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1808_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1808_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 2));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1808_83_end: ;
}
void Frames::event_func_19470()
{
    // event 1809_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1809_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1809_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -2));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1809_83_end: ;
}
void Frames::event_func_19471()
{
    // event 1810_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1810_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1810_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 5));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1810_83_end: ;
}
void Frames::event_func_19472()
{
    // event 1811_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1811_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1811_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -5));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1811_83_end: ;
}
void Frames::event_func_19473()
{
    // event 1812_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1812_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1812_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, 0));
        }
    }
    event_1812_83_end: ;
}
void Frames::event_func_19474()
{
    // event 1813_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1813_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1813_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 0));
        }
    }
    event_1813_83_end: ;
}
void Frames::event_func_19475()
{
    // event 1814_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1814_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1814_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1814_83_end: ;
}
void Frames::event_func_19476()
{
    // event 1815_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1815_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1815_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1815_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1815_83_end: ;
}
void Frames::event_func_19477()
{
    // event 1816_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1816_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1816_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1816_83_end: ;
}
void Frames::event_func_19478()
{
    // event 1817_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1817_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (6))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1817_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(21, 0);
        }
    }
    event_1817_83_end: ;
}
void Frames::event_func_19479()
{
    // event 1818_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1818_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1818_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1818_83_end: ;
}
void Frames::event_func_19480()
{
    // event 1819_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1819_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1819_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1819_83_end: ;
}
void Frames::event_func_19481()
{
    // event 1820_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1820_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1820_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1820_83_end: ;
}
void Frames::event_func_19482()
{
    // event 1823_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1823_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1823_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1823_83_end: ;
}
void Frames::event_func_19483()
{
    // event 1824_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1824_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1824_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1824_83_end: ;
}
void Frames::event_func_19484()
{
    // event 1825_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1825_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1825_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1825_83_end: ;
}
void Frames::event_func_19485()
{
    // event 1826_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1826_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1826_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1826_83_end: ;
}
void Frames::event_func_19486()
{
    // event 1827_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1827_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1827_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1827_83_end: ;
}
void Frames::event_func_19487()
{
    // event 1828_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1828_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1828_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1828_83_0; single_instance_1828_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1828_83_0 == NULL)
                    single_instance_1828_83_0 = new_obj;
            }
        }
    }
    event_1828_83_end: ;
}
void Frames::event_func_19488()
{
    // event 1829_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1829_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (25))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1829_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1829_83_end: ;
}
void Frames::event_func_19489()
{
    // event 1830_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1830_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1830_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1830_83_end: ;
}
void Frames::event_func_19490()
{
    // event 1831_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1831_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1831_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1831_83_end: ;
}
void Frames::event_func_19491()
{
    // event 1832_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1832_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1832_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1832_83_end: ;
}
void Frames::event_func_19492()
{
    // event 1833_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1833_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1833_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1833_83_end: ;
}
void Frames::event_func_19493()
{
    // event 1834_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1834_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1834_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1834_83_end: ;
}
void Frames::event_func_19494()
{
    // event 1835_83
    bool or_result_1835_83 = false;
    bool or_temp_result_1835_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1835_83_0_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1835_83_0_end;
        or_result_1835_83 = true;
        or_temp_result_1835_83_0 = true;
    }
    or_event_1835_83_0_end: ;
    enemyelite_2510_instances.clear_saved_selection();
    if (or_temp_result_1835_83_0) {
        enemyelite_2510_instances.save_selection();
    }
    // event 1835_83
    bool or_temp_result_1835_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1835_83_1_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1835_83_1_end;
        or_result_1835_83 = true;
        or_temp_result_1835_83_1 = true;
        or_event_1835_83_1_end: ;
        if (or_temp_result_1835_83_1) {
            enemyelite_2510_instances.save_selection();
        }
        if (!or_result_1835_83) goto or_final_or_event_1835_83_1_end;
        enemyelite_2510_instances.empty_selection();
        if (or_temp_result_1835_83_0 || or_temp_result_1835_83_1) {
            enemyelite_2510_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_1835_83_1_end: ;
}
void Frames::event_func_19495()
{
    // event 1836_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1836_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1836_83_end;
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_1836_83_end: ;
}
void Frames::event_func_19496()
{
    // event 1837_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1837_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1837_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(8, -10);
        }
        FrameObject * single_instance_1837_83_0; single_instance_1837_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1837_83_0 == NULL)
                    single_instance_1837_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1837_83_0))->move_back();
        ((Active*)((Active*)single_instance_1837_83_0))->set_y_scale(0.25);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1837_83_end: ;
}
void Frames::event_func_19497()
{
    // event 1838_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1838_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (16))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1838_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1838_83_end: ;
}
void Frames::event_func_19498()
{
    // event 1839_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1839_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1839_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.5, 15));
        }
    }
    event_1839_83_end: ;
}
void Frames::event_func_19499()
{
    // event 1840_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1840_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1840_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(0, ((Active*)*it)->alterables->values.get(8)));
        }
    }
    event_1840_83_end: ;
}
void Frames::event_func_19500()
{
    // event 1841_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1841_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1841_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1841_83_end: ;
}
void Frames::event_func_19501()
{
    // event 1842_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1842_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1842_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -2);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(8, -1+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.sub(6, 12);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1842_83_end: ;
}
void Frames::event_func_19502()
{
    // event 1843_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1843_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1843_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1843_83_end: ;
}
void Frames::event_func_19503()
{
    // event 1844_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1844_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1844_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -3);
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->alterables->values.add(20, 1);
        }
    }
    event_1844_83_end: ;
}
void Frames::event_func_19504()
{
    // event 1845_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1845_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1845_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1845_83_end: ;
}
void Frames::event_func_19505()
{
    // event 1846_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1846_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1846_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1846_83_end: ;
}
void Frames::event_func_19506()
{
    // event 1847_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1847_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1847_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1847_83_end: ;
}
void Frames::event_func_19507()
{
    // event 1848_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1848_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1848_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1848_83_end: ;
}
void Frames::event_func_19508()
{
    // event 1849_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1849_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (22))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1849_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 20);
        }
    }
    event_1849_83_end: ;
}
void Frames::event_func_19509()
{
    // event 1850_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1850_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1850_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1850_83_end: ;
}
void Frames::event_func_19510()
{
    // event 1851_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1851_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1851_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1851_83_end: ;
}
void Frames::event_func_19511()
{
    // event 1853_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1853_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1853_83_end: ;
}
void Frames::event_func_19512()
{
    // event 1854_83
    bool or_result_1854_83 = false;
    bool or_temp_result_1854_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1854_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1854_83_0_end;
        or_result_1854_83 = true;
        or_temp_result_1854_83_0 = true;
    }
    or_event_1854_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1854_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1854_83
    bool or_temp_result_1854_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1854_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1854_83_1_end;
        or_result_1854_83 = true;
        or_temp_result_1854_83_1 = true;
    }
    or_event_1854_83_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1854_83_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1854_83
    bool or_temp_result_1854_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1854_83_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1854_83_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1854_83_2_end;
        or_result_1854_83 = true;
        or_temp_result_1854_83_2 = true;
        or_event_1854_83_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1854_83_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1854_83) goto or_final_or_event_1854_83_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1854_83_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1854_83_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1854_83_0 || or_temp_result_1854_83_1 || or_temp_result_1854_83_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    or_final_or_event_1854_83_2_end: ;
}
void Frames::event_func_19513()
{
    // event 1855_83
    bool or_result_1855_83 = false;
    bool or_temp_result_1855_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1855_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1855_83_0_end;
        or_result_1855_83 = true;
        or_temp_result_1855_83_0 = true;
    }
    or_event_1855_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1855_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1855_83
    bool or_temp_result_1855_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1855_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1855_83_1_end;
        or_result_1855_83 = true;
        or_temp_result_1855_83_1 = true;
    }
    or_event_1855_83_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1855_83_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1855_83
    bool or_temp_result_1855_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1855_83_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1855_83_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1855_83_2_end;
        or_result_1855_83 = true;
        or_temp_result_1855_83_2 = true;
        or_event_1855_83_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1855_83_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1855_83) goto or_final_or_event_1855_83_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1855_83_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1855_83_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1855_83_0 || or_temp_result_1855_83_1 || or_temp_result_1855_83_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1855_83_2_end: ;
}
void Frames::event_func_19514()
{
    // event 1858_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1858_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1858_83_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_7)) goto event_1858_83_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_8)) goto event_1858_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1858_83_end: ;
}
void Frames::event_func_19515()
{
    // event 1862_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1862_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1862_83_end: ;
}
void Frames::event_func_19516()
{
    // event 1863_83
    bool or_result_1863_83 = false;
    bool or_temp_result_1863_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1863_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1863_83_0_end;
        or_result_1863_83 = true;
        or_temp_result_1863_83_0 = true;
    }
    or_event_1863_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1863_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1863_83
    bool or_temp_result_1863_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1863_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1863_83_1_end;
        or_result_1863_83 = true;
        or_temp_result_1863_83_1 = true;
        or_event_1863_83_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1863_83_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1863_83) goto or_final_or_event_1863_83_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1863_83_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1863_83_0 || or_temp_result_1863_83_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1863_83_1_end: ;
}
void Frames::event_func_19517()
{
    // event 1864_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1864_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1864_83_end: ;
}
void Frames::event_func_19518()
{
    // event 1865_83
    bool or_result_1865_83 = false;
    bool or_temp_result_1865_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1865_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1865_83_0_end;
        or_result_1865_83 = true;
        or_temp_result_1865_83_0 = true;
    }
    or_event_1865_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1865_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1865_83
    bool or_temp_result_1865_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1865_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1865_83_1_end;
        or_result_1865_83 = true;
        or_temp_result_1865_83_1 = true;
        or_event_1865_83_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1865_83_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1865_83) goto or_final_or_event_1865_83_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1865_83_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1865_83_0 || or_temp_result_1865_83_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1865_83_1_end: ;
}
void Frames::event_func_19519()
{
    // event 1866_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1866_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(4);
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1866_83_end: ;
}
void Frames::event_func_19520()
{
    // event 1867_83
    bool or_result_1867_83 = false;
    bool or_temp_result_1867_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1867_83_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1867_83_0_end;
        or_result_1867_83 = true;
        or_temp_result_1867_83_0 = true;
    }
    or_event_1867_83_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1867_83_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1867_83
    bool or_temp_result_1867_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto or_event_1867_83_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1867_83_1_end;
        or_result_1867_83 = true;
        or_temp_result_1867_83_1 = true;
        or_event_1867_83_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1867_83_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1867_83) goto or_final_or_event_1867_83_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1867_83_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1867_83_0 || or_temp_result_1867_83_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_1867_83_1_end: ;
}
