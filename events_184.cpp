#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14353()
{
    // event 1425_67
    {
        if (!(group_main_engine_1)) goto event_1425_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1425_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        {
            FrameObject * parent = ((Active*)get_single(playershieldgiver_3499_instances));
            if (parent == NULL) goto pos_end_1425_67_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + -16);
            pos_end_1425_67_0: ;
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
    }
    event_1425_67_end: ;
}
void Frames::event_func_14354()
{
    // event 1426_67
    {
        if (!(group_main_engine_1)) goto event_1426_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1426_67_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(-50);
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1426_67_0; single_instance_1426_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playershieldgiver_3499_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwoodshield_325(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + -32), parent->layer);
                if (single_instance_1426_67_0 == NULL)
                    single_instance_1426_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1426_67_0))->alterables->flags.enable(7);
    }
    event_1426_67_end: ;
}
void Frames::event_func_14355()
{
    // event 1427_67
    {
        if (!(group_main_engine_1)) goto event_1427_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1427_67_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(-50);
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1427_67_0; single_instance_1427_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playershieldgiver_3499_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorrings_407(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + -32), parent->layer);
                if (single_instance_1427_67_0 == NULL)
                    single_instance_1427_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1427_67_0))->alterables->flags.enable(7);
    }
    event_1427_67_end: ;
}
void Frames::event_func_14356()
{
    // event 1428_67
    {
        if (!(group_main_engine_1)) goto event_1428_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1428_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1428_67_end: ;
}
void Frames::event_func_14357()
{
    // event 1429_67
    {
        if (!(group_main_engine_1)) goto event_1429_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1429_67_end;
        {
            player_389_instances.clear_selection();
            for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(7))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(7))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(player_389_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 4);
            ((Active*)*it)->alterables->flags.disable(7);
        }
    }
    event_1429_67_end: ;
}
void Frames::event_func_14358()
{
    // event 1430_67
    {
        if (!(group_main_engine_1)) goto event_1430_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1430_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1430_67_end: ;
}
void Frames::event_func_14359()
{
    // event 1431_67
    {
        if (!(group_main_engine_1)) goto event_1431_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1431_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_frame(23-((Active*)*it)->alterables->values.get(1)/math_helper/3);
        }
    }
    event_1431_67_end: ;
}
void Frames::event_func_14360()
{
    // event 1432_67
    {
        if (!(group_main_engine_1)) goto event_1432_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (100))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1432_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_1432_67_end: ;
}
void Frames::event_func_14361()
{
    // event 1434_67
    {
        if (!(group_main_engine_1)) goto event_1434_67_end;
        switchcorkscrewdoor_3536_instances.clear_selection();
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((0-((Active*)*it)->alterables->values.get(2))%math_helper%8);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1434_67_end: ;
}
void Frames::event_func_14362()
{
    // event 1435_67
    {
        if (!(group_main_engine_1)) goto event_1435_67_end;
        qualifier_14.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(qualifier_14, switchcorkscrewdoor_3536_instances)) goto event_1435_67_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1435_67_end;
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1435_67_end: ;
}
void Frames::event_func_14363()
{
    // event 1436_67
    {
        if (!(group_main_engine_1)) goto event_1436_67_end;
        objectbike_322_instances.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(objectbike_322_instances, switchcorkscrewdoor_3536_instances)) goto event_1436_67_end;
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1436_67_end: ;
}
void Frames::event_func_14364()
{
    // event 1437_67
    {
        if (!(group_main_engine_1)) goto event_1437_67_end;
        playersensorbottombig_397_instances.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchcorkscrewdoor_3536_instances)) goto event_1437_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1437_67_end;
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1437_67_end: ;
}
void Frames::event_func_14365()
{
    // event 1438_67
    {
        if (!(group_main_engine_1)) goto event_1438_67_end;
        switchcorkscrewdoor_3536_instances.clear_selection();
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!switchcorkscrewdoor_3536_instances.has_selection()) goto event_1438_67_end;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1438_67_end: ;
}
void Frames::event_func_14366()
{
    // event 1439_67
    {
        if (!(group_main_engine_1)) goto event_1439_67_end;
        switchcorkscrewdoor_3536_instances.clear_selection();
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchcorkscrewdoor_3536_instances.has_selection()) goto event_1439_67_end;
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1439_67_end: ;
}
void Frames::event_func_14367()
{
    // event 1440_67
    {
        if (!(group_main_engine_1)) goto event_1440_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(switchcorkscrewdoor_3536_instances, it.current_index, default_active_instance))->alterables->flags.get(0));
        }
    }
    event_1440_67_end: ;
}
void Frames::event_func_14368()
{
    // event 1441_67
    {
        if (!(group_main_engine_1)) goto event_1441_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto event_1441_67_end;
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.stop_sample(SOUND_COMMON_DNDOORCLOSE_370);
        media.play_id(SOUND_COMMON_DNDOOROPEN_371, -1, 1);
    }
    event_1441_67_end: ;
}
void Frames::event_func_14369()
{
    // event 1442_67
    {
        if (!(group_main_engine_1)) goto event_1442_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto event_1442_67_end;
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        media.stop_sample(SOUND_COMMON_DNDOOROPEN_371);
        media.play_id(SOUND_COMMON_DNDOORCLOSE_370, -1, 1);
    }
    event_1442_67_end: ;
}
void Frames::event_func_14370()
{
    // event 1443_67
    {
        if (!(group_main_engine_1)) goto event_1443_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto event_1443_67_end;
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-2, -128));
        }
    }
    event_1443_67_end: ;
}
void Frames::event_func_14371()
{
    // event 1444_67
    {
        if (!(group_main_engine_1)) goto event_1444_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto event_1444_67_end;
        if (!check_not_overlap(corkscrewdoor_3537_instances, playersensorleftbig_391_instances)) goto event_1444_67_end;
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+1, 0));
        }
    }
    event_1444_67_end: ;
}
void Frames::event_func_14372()
{
    // event 1445_67
    {
        if (!(group_main_engine_1)) goto event_1445_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (-128))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto event_1445_67_end;
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1445_67_end: ;
}
void Frames::event_func_14373()
{
    // event 1446_67
    bool or_result_1446_67 = false;
    bool or_temp_result_1446_67_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1446_67_0_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (0))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto or_event_1446_67_0_end;
        or_result_1446_67 = true;
        or_temp_result_1446_67_0 = true;
    }
    or_event_1446_67_0_end: ;
    corkscrewdoor_3537_instances.clear_saved_selection();
    if (or_temp_result_1446_67_0) {
        corkscrewdoor_3537_instances.save_selection();
    }
    // event 1446_67
    bool or_temp_result_1446_67_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1446_67_1_end;
        corkscrewdoor_3537_instances.clear_selection();
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (-128))) { it.deselect(); continue; }
        }
        if (!corkscrewdoor_3537_instances.has_selection()) goto or_event_1446_67_1_end;
        or_result_1446_67 = true;
        or_temp_result_1446_67_1 = true;
        or_event_1446_67_1_end: ;
        if (or_temp_result_1446_67_1) {
            corkscrewdoor_3537_instances.save_selection();
        }
        if (!or_result_1446_67) goto or_final_or_event_1446_67_1_end;
        corkscrewdoor_3537_instances.clear_selection();
        if (or_temp_result_1446_67_0 || or_temp_result_1446_67_1) {
            corkscrewdoor_3537_instances.restore_selection();
        }
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    or_final_or_event_1446_67_1_end: ;
}
void Frames::event_func_14374()
{
    // event 1448_67
    {
        if (!(group_main_engine_1)) goto event_1448_67_end;
        levelfdpushplatformmask_3502_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatformmask_3502_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelfdpushplatform_3539_instances, it.current_index));
            if (parent == NULL) goto pos_end_1448_67_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1448_67_0: ;
        }
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, get_max(((Active*)*it)->alterables->values.get(16)-1, 0));
        }
        for (ObjectIterator it(levelfdpushplatformmask_3502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%20);
        }
        fdplatform_3542_instances.clear_selection();
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%20);
        }
    }
    event_1448_67_end: ;
}
void Frames::event_func_14375()
{
    // event 1449_67
    {
        if (!(group_main_engine_1)) goto event_1449_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1449_67_end;
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 3);
            ((Active*)*it)->alterables->values.add(18, 1);
        }
    }
    event_1449_67_end: ;
}
void Frames::event_func_14376()
{
    // event 1450_67
    {
        if (!(group_main_engine_1)) goto event_1450_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1450_67_end;
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, 1);
            ((Active*)*it)->alterables->values.add(8, 4);
        }
    }
    event_1450_67_end: ;
}
void Frames::event_func_14377()
{
    // event 1451_67
    {
        if (!(group_main_engine_1)) goto event_1451_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1451_67_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelfdpushplatform_3539_instances)) goto event_1451_67_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 4);
    }
    event_1451_67_end: ;
}
void Frames::event_func_14378()
{
    // event 1452_67
    {
        if (!(group_main_engine_1)) goto event_1452_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1452_67_end;
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, 1);
            ((Active*)*it)->alterables->values.add(9, 3);
        }
    }
    event_1452_67_end: ;
}
void Frames::event_func_14379()
{
    // event 1453_67
    {
        if (!(group_main_engine_1)) goto event_1453_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (3))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1453_67_end;
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, 1);
            ((Active*)*it)->alterables->values.sub(8, 4);
        }
    }
    event_1453_67_end: ;
}
void Frames::event_func_14380()
{
    // event 1454_67
    {
        if (!(group_main_engine_1)) goto event_1454_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (3))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto event_1454_67_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelfdpushplatform_3539_instances)) goto event_1454_67_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 4);
    }
    event_1454_67_end: ;
}
void Frames::event_func_14381()
{
    // event 1455_67
    bool or_result_1455_67 = false;
    bool or_temp_result_1455_67_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_67_0_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) >= (117))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto or_event_1455_67_0_end;
        or_result_1455_67 = true;
        or_temp_result_1455_67_0 = true;
    }
    or_event_1455_67_0_end: ;
    levelfdpushplatform_3539_instances.clear_saved_selection();
    if (or_temp_result_1455_67_0) {
        levelfdpushplatform_3539_instances.save_selection();
    }
    // event 1455_67
    bool or_temp_result_1455_67_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_67_1_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) >= (80))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto or_event_1455_67_1_end;
        or_result_1455_67 = true;
        or_temp_result_1455_67_1 = true;
    }
    or_event_1455_67_1_end: ;
    if (or_temp_result_1455_67_1) {
        levelfdpushplatform_3539_instances.save_selection();
    }
    // event 1455_67
    bool or_temp_result_1455_67_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_67_2_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) >= (117))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto or_event_1455_67_2_end;
        or_result_1455_67 = true;
        or_temp_result_1455_67_2 = true;
    }
    or_event_1455_67_2_end: ;
    if (or_temp_result_1455_67_2) {
        levelfdpushplatform_3539_instances.save_selection();
    }
    // event 1455_67
    bool or_temp_result_1455_67_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_67_3_end;
        levelfdpushplatform_3539_instances.clear_selection();
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) >= (80))) { it.deselect(); continue; }
        }
        if (!levelfdpushplatform_3539_instances.has_selection()) goto or_event_1455_67_3_end;
        or_result_1455_67 = true;
        or_temp_result_1455_67_3 = true;
        or_event_1455_67_3_end: ;
        if (or_temp_result_1455_67_3) {
            levelfdpushplatform_3539_instances.save_selection();
        }
        if (!or_result_1455_67) goto or_final_or_event_1455_67_3_end;
        levelfdpushplatform_3539_instances.clear_selection();
        if (or_temp_result_1455_67_0 || or_temp_result_1455_67_1 || or_temp_result_1455_67_2 || or_temp_result_1455_67_3) {
            levelfdpushplatform_3539_instances.restore_selection();
        }
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, (((Active*)*it)->alterables->values.get(17)+1)%math_helper%4);
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    or_final_or_event_1455_67_3_end: ;
}
void Frames::event_func_14382()
{
    // event 1457_67
    {
        if (!(group_main_engine_1)) goto event_1457_67_end;
        levelelectriccrusherbolt_3538_instances.clear_selection();
        for (ObjectIterator it(levelelectriccrusherbolt_3538_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelelectriccrusher_3540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1457_67_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1457_67_0: ;
        }
        levelelectriccrushermask_3501_instances.clear_selection();
        for (ObjectIterator it(levelelectriccrushermask_3501_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelelectriccrusher_3540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1457_67_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1457_67_1: ;
        }
    }
    event_1457_67_end: ;
}
void Frames::event_func_14383()
{
    // event 1458_67
    {
        if (!(group_main_engine_1)) goto event_1458_67_end;
        levelelectriccrusherbolt_3538_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(levelelectriccrusherbolt_3538_instances, playercharactersensor_383_instances)) goto event_1458_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1458_67_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1458_67_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1458_67_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1458_67_end: ;
}
void Frames::event_func_14384()
{
    // event 1566_67
    {
        if (!(group_main_engine_1)) goto event_1566_67_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1566_67_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1566_67_0; single_instance_1566_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1566_67_0 == NULL)
                    single_instance_1566_67_0 = new_obj;
            }
        }
        FrameObject * single_instance_1566_67_1; single_instance_1566_67_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1566_67_1 == NULL)
                    single_instance_1566_67_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1566_67_end: ;
}
void Frames::event_func_14385()
{
    // event 1581_67
    {
        if (!(group_main_engine_1)) goto event_1581_67_end;
        ((Active*)get_instance(objectsiren_3337_instances))->force_frame((global_values->get(3)/math_helper/4)%math_helper%4);
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1581_67_end: ;
}
void Frames::event_func_14386()
{
    // event 1591_67
    {
        if (!(group_main_engine_1)) goto event_1591_67_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1591_67_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1591_67_0; single_instance_1591_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytankbot_2821(parent->x + 0, parent->y + -38), parent->layer);
                if (single_instance_1591_67_0 == NULL)
                    single_instance_1591_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1591_67_0))->alterables->flags.enable(16);
        ((Active*)((Active*)single_instance_1591_67_0))->move_back();
        ((Active*)((Active*)single_instance_1591_67_0))->alterables->values.set(5, 1);
    }
    event_1591_67_end: ;
}
void Frames::event_func_14387()
{
    // event 1611_67
    bool or_result_1611_67 = false;
    bool or_temp_result_1611_67_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_67_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1611_67_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1611_67_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1611_67_0_end;
        or_result_1611_67 = true;
        or_temp_result_1611_67_0 = true;
    }
    or_event_1611_67_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1611_67_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1611_67
    bool or_temp_result_1611_67_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_67_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1611_67_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1611_67_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1611_67_1_end;
        or_result_1611_67 = true;
        or_temp_result_1611_67_1 = true;
    }
    or_event_1611_67_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1611_67_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1611_67
    bool or_temp_result_1611_67_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_67_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1611_67_2_end;
        or_result_1611_67 = true;
        or_temp_result_1611_67_2 = true;
        or_event_1611_67_2_end: ;
        if (or_temp_result_1611_67_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1611_67) goto or_final_or_event_1611_67_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1611_67_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1611_67_0 || or_temp_result_1611_67_1 || or_temp_result_1611_67_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1611_67_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1611_67_0; single_instance_1611_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1611_67_0 == NULL)
                    single_instance_1611_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1611_67_0))->set_direction(2);
        FrameObject * single_instance_1611_67_1; single_instance_1611_67_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_67_1 == NULL)
                    single_instance_1611_67_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1611_67_2_end: ;
}
void Frames::event_func_14388()
{
    // event 1735_67
    bool or_result_1735_67 = false;
    bool or_temp_result_1735_67_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1735_67_0_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1735_67_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemycoilhead_1782_instances, qualifier_7)) goto or_event_1735_67_0_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1735_67_0_end;
        or_result_1735_67 = true;
        or_temp_result_1735_67_0 = true;
    }
    or_event_1735_67_0_end: ;
    enemycoilhead_1782_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1735_67_0) {
        enemycoilhead_1782_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1735_67
    bool or_temp_result_1735_67_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1735_67_1_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1735_67_1_end;
        or_result_1735_67 = true;
        or_temp_result_1735_67_1 = true;
        or_event_1735_67_1_end: ;
        if (or_temp_result_1735_67_1) {
            enemycoilhead_1782_instances.save_selection();
        }
        if (!or_result_1735_67) goto or_final_or_event_1735_67_1_end;
        enemycoilhead_1782_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1735_67_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1735_67_0 || or_temp_result_1735_67_1) {
            enemycoilhead_1782_instances.restore_selection();
        }
        FrameObject * single_instance_1735_67_0; single_instance_1735_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1735_67_0 == NULL)
                    single_instance_1735_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1735_67_0))->set_direction(2);
        FrameObject * single_instance_1735_67_1; single_instance_1735_67_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1735_67_1 == NULL)
                    single_instance_1735_67_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1735_67_1_end: ;
}
void Frames::event_func_14389()
{
    // event 1756_67
    bool or_result_1756_67 = false;
    bool or_temp_result_1756_67_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_67_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1756_67_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1756_67_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1756_67_0_end;
        or_result_1756_67 = true;
        or_temp_result_1756_67_0 = true;
    }
    or_event_1756_67_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1756_67_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1756_67
    bool or_temp_result_1756_67_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_67_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1756_67_1_end;
        or_result_1756_67 = true;
        or_temp_result_1756_67_1 = true;
        or_event_1756_67_1_end: ;
        if (or_temp_result_1756_67_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1756_67) goto or_final_or_event_1756_67_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1756_67_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1756_67_0 || or_temp_result_1756_67_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1756_67_0; single_instance_1756_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1756_67_0 == NULL)
                    single_instance_1756_67_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1756_67_0))->set_direction(2);
        FrameObject * single_instance_1756_67_1; single_instance_1756_67_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1756_67_1 == NULL)
                    single_instance_1756_67_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1756_67_1_end: ;
}
void Frames::event_func_14390()
{
    // event 1791_67
    {
        if (!(group_main_engine_1)) goto event_1791_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1791_67_end: ;
}
void Frames::event_func_14391()
{
    // event 1792_67
    {
        if (!(group_main_engine_1)) goto event_1792_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!labdoorback_3500_instances.has_selection()) goto event_1792_67_end;
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1792_67_end: ;
}
void Frames::event_func_14392()
{
    // event 1793_67
    {
        if (!(group_main_engine_1)) goto event_1793_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!labdoorback_3500_instances.has_selection()) goto event_1793_67_end;
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1793_67_end: ;
}
void Frames::event_func_14393()
{
    // event 1794_67
    {
        if (!(group_main_engine_1)) goto event_1794_67_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(labdoorback_3500_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(labdoorback_3500_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(labdoorback_3500_instances, default_active_instance))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(labdoorback_3500_instances, default_active_instance))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1794_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1794_67_end: ;
}
void Frames::event_func_14394()
{
    // event 1795_67
    {
        if (!(group_main_engine_1)) goto event_1795_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!labdoorback_3500_instances.has_selection()) goto event_1795_67_end;
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
        }
    }
    event_1795_67_end: ;
}
void Frames::event_func_14395()
{
    // event 1796_67
    {
        if (!(group_main_engine_1)) goto event_1796_67_end;
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!labdoorback_3500_instances.has_selection()) goto event_1796_67_end;
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1796_67_end: ;
}
void Frames::event_func_14396()
{
    // event 1797_67
    {
        if (!(group_main_engine_1)) goto event_1797_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1797_67_end;
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1797_67_end: ;
}
void Frames::event_func_14397()
{
    // event 1798_67
    {
        if (!(group_main_engine_1)) goto event_1798_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1798_67_end;
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1798_67_end: ;
}
void Frames::event_func_14398()
{
    // event 1799_67
    {
        if (!(group_main_engine_1)) goto event_1799_67_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(labdoorfront_3507_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(labdoorfront_3507_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(labdoorfront_3507_instances, default_active_instance))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(labdoorfront_3507_instances, default_active_instance))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1799_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1799_67_end: ;
}
void Frames::event_func_14399()
{
    // event 1800_67
    {
        if (!(group_main_engine_1)) goto event_1800_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1800_67_end;
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1800_67_end: ;
}
void Frames::event_func_14400()
{
    // event 1801_67
    {
        if (!(group_main_engine_1)) goto event_1801_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1801_67_end;
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1801_67_end: ;
}
void Frames::event_func_14401()
{
    // event 1802_67
    {
        if (!(group_main_engine_1)) goto event_1802_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1802_67_end;
        if (not_always_1802_67 > loop_count) {
            not_always_1802_67 = loop_count + 2;
            goto event_1802_67_end;
        }
        not_always_1802_67 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1802_67_end: ;
}
void Frames::event_func_14402()
{
    // event 1803_67
    {
        if (!(group_main_engine_1)) goto event_1803_67_end;
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!labdoorfront_3507_instances.has_selection()) goto event_1803_67_end;
        if (not_always_1803_67 > loop_count) {
            not_always_1803_67 = loop_count + 2;
            goto event_1803_67_end;
        }
        not_always_1803_67 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_CLOSE_282, -1, 1);
    }
    event_1803_67_end: ;
}
void Frames::event_func_14403()
{
    // event 1804_67
    {
        if (!(group_main_engine_1)) goto event_1804_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1100))) goto event_1804_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1804_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1804_67_end;
        if (not_always_1804_67 > loop_count) {
            not_always_1804_67 = loop_count + 2;
            goto event_1804_67_end;
        }
        not_always_1804_67 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1804_67_end: ;
}
void Frames::event_func_14404()
{
    // event 1805_67
    {
        if (!(group_main_engine_1)) goto event_1805_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1100))) goto event_1805_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+20))) goto event_1805_67_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1805_67_end: ;
}
void Frames::event_func_14405()
{
    // event 1810_67
    {
        if (!(group_main_engine_1)) goto event_1810_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->flags.disable(3);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1810_67_end: ;
}
void Frames::event_func_14406()
{
    // event 1811_67
    {
        if (!(group_main_engine_1)) goto event_1811_67_end;
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()-global_values->get(17)*0.5))) { it.deselect(); continue; }
        }
        if (!cameralimitbossbottom_420_instances.has_selection()) goto event_1811_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_single(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
    }
    event_1811_67_end: ;
}
void Frames::event_func_14407()
{
    // event 1812_67
    {
        if (!(group_main_engine_1)) goto event_1812_67_end;
        cameralimitbossright_422_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()-global_values->get(16)*0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
        }
        if (!cameralimitbossright_422_instances.has_selection()) goto event_1812_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_single(cameralimitbossright_422_instances, default_active_instance))->get_x());
    }
    event_1812_67_end: ;
}
void Frames::event_func_14408()
{
    // event 1813_67
    {
        if (!(group_main_engine_1)) goto event_1813_67_end;
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)*0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
        }
        if (!cameralimitbossleft_421_instances.has_selection()) goto event_1813_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_single(cameralimitbossleft_421_instances, default_active_instance))->get_x());
    }
    event_1813_67_end: ;
}
void Frames::event_func_14409()
{
    // event 1814_67
    {
        if (!(group_main_engine_1)) goto event_1814_67_end;
        cameralimitbosstop_423_instances.clear_selection();
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_top()+global_values->get(17)*0.5))) { it.deselect(); continue; }
        }
        if (!cameralimitbosstop_423_instances.has_selection()) goto event_1814_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_single(cameralimitbosstop_423_instances, default_active_instance))->get_y());
    }
    event_1814_67_end: ;
}
void Frames::event_func_14410()
{
    // event 1815_67
    {
        if (!(group_main_engine_1)) goto event_1815_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1815_67_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1815_67_end: ;
}
void Frames::event_func_14411()
{
    // event 1816_67
    {
        if (!(group_main_engine_1)) goto event_1816_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1816_67_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
    }
    event_1816_67_end: ;
}
void Frames::event_func_14412()
{
    // event 1817_67
    {
        if (!(group_main_engine_1)) goto event_1817_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1817_67_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
    }
    event_1817_67_end: ;
}
void Frames::event_func_14413()
{
    // event 1818_67
    {
        if (!(group_main_engine_1)) goto event_1818_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1818_67_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
    }
    event_1818_67_end: ;
}
void Frames::event_func_14414()
{
    // event 1830_67
    {
        if (!(group_main_engine_1)) goto event_1830_67_end;
        {
            lockeddoorterminal_2606_instances.clear_selection();
            SavedSelection extra_lockeddoorterminal_2606_instances(lockeddoorterminal_2606_instances);
            for (SavedIterator it(extra_lockeddoorterminal_2606_instances); !it.end(); ++it) {
                foreach_instance_door = ((Active*)*it);
                foreach_door_67();
            }
        }
    }
    event_1830_67_end: ;
}
void Frames::event_func_14415()
{
    // event 1839_67
    {
        if (!(group_main_engine_1)) goto event_1839_67_end;
        lockedlabdoorbarrier_3541_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorbarrier_3541_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorbarrier_3541_instances.has_selection()) goto event_1839_67_end;
        for (ObjectIterator it(lockedlabdoorbarrier_3541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1839_67_end: ;
}
void Frames::event_func_14416()
{
    // event 1840_67
    {
        if (!(group_main_engine_1)) goto event_1840_67_end;
        lockedlabdoorback_3506_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorback_3506_instances.has_selection()) goto event_1840_67_end;
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1840_67_end: ;
}
void Frames::event_func_14417()
{
    // event 1841_67
    {
        if (!(group_main_engine_1)) goto event_1841_67_end;
        lockedlabdoorfront_3544_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorfront_3544_instances.has_selection()) goto event_1841_67_end;
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1841_67_end: ;
}
void Frames::event_func_14418()
{
    // event 1847_67
    {
        if (!(group_main_engine_1)) goto event_1847_67_end;
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+2)%math_helper%360);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1))*24);
        }
    }
    event_1847_67_end: ;
}
void Frames::event_func_14419()
{
    // event 1984_67
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1984_67_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1984_67_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1984_67_end;
        if (not_always_1984_67 > loop_count) {
            not_always_1984_67 = loop_count + 2;
            goto event_1984_67_end;
        }
        not_always_1984_67 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1984_67_end: ;
}
void Frames::event_func_14420()
{
    // event 2055_67
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2055_67_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_2055_67_end;
        if (!((global_values->get(4)) == (1))) goto event_2055_67_end;
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (0))) { it.deselect(); continue; }
        }
        if (!objecttransporterstart_3412_instances.has_selection()) goto event_2055_67_end;
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(0);
        }
    }
    event_2055_67_end: ;
}
void Frames::event_func_14421()
{
    // event 2095_67
    {
        if (!(group_main_engine_1)) goto event_2095_67_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(5, ((SystemBox*)*it)->alterables->values.get(5)+((SystemBox*)*it)->alterables->values.get(6));
        }
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(2, global_values->get(3)%math_helper%16);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(2, 0-(global_values->get(3)%math_helper%16));
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(2, 0-((global_values->get(3)/math_helper/2)%math_helper%16));
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(2, (global_values->get(3)/math_helper/2)%math_helper%16);
    }
    event_2095_67_end: ;
}
void Frames::event_func_14422()
{
    // event 2098_67
    {
        if (!(group_pause_1)) goto event_2098_67_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2098_67_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2098_67_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2098_67_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2098_67_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
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
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
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
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
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
        tbpipeloop3_2807_instances.clear_selection();
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
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        layer0loop_1742_instances.clear_selection();
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
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
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
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
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
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        fdconsole1_3504_instances.clear_selection();
        for (ObjectIterator it(fdconsole1_3504_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        fdconsole2_3505_instances.clear_selection();
        for (ObjectIterator it(fdconsole2_3505_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockedlabdoorback_3506_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockedlabdoorfront_3544_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchcorkscrewdoor_3536_instances.clear_selection();
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelelectriccrusherbolt_3538_instances.clear_selection();
        for (ObjectIterator it(levelelectriccrusherbolt_3538_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->stop_animation();
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->stop_animation();
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_2098_67_end: ;
}
void Frames::event_func_14423()
{
    // event 2099_67
    bool or_result_2099_67 = false;
    bool or_temp_result_2099_67_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2099_67_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2099_67_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2099_67_0_end;
        or_result_2099_67 = true;
        or_temp_result_2099_67_0 = true;
    }
    or_event_2099_67_0_end: ;
    // event 2099_67
    bool or_temp_result_2099_67_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2099_67_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2099_67_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2099_67_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2099_67_1_end;
        or_result_2099_67 = true;
        or_temp_result_2099_67_1 = true;
        or_event_2099_67_1_end: ;
        if (!or_result_2099_67) goto or_final_or_event_2099_67_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
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
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
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
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
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
        tbpipeloop3_2807_instances.clear_selection();
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
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
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
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
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
        gimmicklanternbridge6_1732_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
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
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        fdconsole1_3504_instances.clear_selection();
        for (ObjectIterator it(fdconsole1_3504_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        fdconsole2_3505_instances.clear_selection();
        for (ObjectIterator it(fdconsole2_3505_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockedlabdoorback_3506_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockedlabdoorfront_3544_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchcorkscrewdoor_3536_instances.clear_selection();
        for (ObjectIterator it(switchcorkscrewdoor_3536_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelelectriccrusherbolt_3538_instances.clear_selection();
        for (ObjectIterator it(levelelectriccrusherbolt_3538_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->start_animation();
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->start_animation();
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2099_67_1_end: ;
}
void Frames::handle_frame_68_events()
{
    test_collisions_67();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_3807();
    event_func_5307();
    event_func_6749();
    event_func_6752();
    event_func_11162();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_1406();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_10753();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_14344();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_10755();
    event_func_1776();
    event_func_14345();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_1866();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_14346();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    event_func_14347();
    event_func_14348();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_13971();
    event_func_13972();
    event_func_13973();
    event_func_13974();
    event_func_13975();
    event_func_13976();
    event_func_13977();
    event_func_13978();
    event_func_14349();
    event_func_13980();
    event_func_13981();
    event_func_13982();
    event_func_13983();
    event_func_13984();
    event_func_13985();
    event_func_14350();
    event_func_14351();
    event_func_14352();
    event_func_14353();
    event_func_14354();
    event_func_14355();
    event_func_14356();
    event_func_14357();
    event_func_14358();
    event_func_14359();
    event_func_14360();
    event_func_14361();
    event_func_14362();
    event_func_14363();
    event_func_14364();
    event_func_14365();
    event_func_14366();
    event_func_14367();
    event_func_14368();
    event_func_14369();
    event_func_14370();
    event_func_14371();
    event_func_14372();
    event_func_14373();
    event_func_14374();
    event_func_14375();
    event_func_14376();
    event_func_14377();
    event_func_14378();
    event_func_14379();
    event_func_14380();
    event_func_14381();
    event_func_14382();
    event_func_14383();
    event_func_14004();
    event_func_14005();
    event_func_14006();
    event_func_14007();
    event_func_14008();
    event_func_14009();
    event_func_14010();
    event_func_14011();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_14384();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
    event_func_14385();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_13482();
    event_func_13483();
    event_func_14386();
    event_func_11463();
    event_func_11464();
    event_func_11465();
    event_func_11466();
    event_func_11467();
    event_func_11468();
    event_func_11469();
    event_func_11470();
    event_func_11471();
    event_func_11472();
    event_func_11473();
    event_func_11474();
    event_func_11475();
    event_func_11476();
    event_func_11477();
    event_func_11478();
    event_func_11479();
    event_func_11480();
    event_func_14387();
    event_func_11482();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    event_func_3791();
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_8691();
    event_func_8692();
    event_func_8693();
    event_func_8694();
    event_func_8695();
    event_func_8696();
    event_func_8697();
    event_func_8698();
    event_func_8699();
    event_func_8700();
    event_func_8701();
    event_func_8702();
    event_func_8703();
    event_func_8704();
    event_func_5271();
    event_func_5272();
    event_func_5273();
    event_func_5274();
    event_func_5275();
    event_func_5276();
    event_func_5277();
    event_func_5278();
    event_func_5279();
    event_func_5280();
    event_func_5281();
    event_func_5282();
    event_func_5283();
    event_func_5284();
    event_func_5285();
    event_func_5286();
    event_func_5287();
    event_func_5288();
    event_func_5289();
    event_func_5290();
    event_func_5291();
    event_func_5292();
    event_func_5293();
    event_func_5294();
    event_func_5295();
    event_func_5296();
    event_func_5297();
    event_func_5298();
    event_func_5299();
    event_func_5300();
    event_func_5301();
    event_func_5302();
    event_func_5303();
    event_func_5304();
    event_func_5305();
    event_func_5306();
    event_func_6740();
    event_func_6741();
    event_func_6742();
    event_func_6743();
    event_func_6744();
    event_func_6745();
    event_func_6746();
    event_func_6747();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_6754();
    event_func_6755();
    event_func_6756();
    event_func_6757();
    event_func_6758();
    event_func_6759();
    event_func_6760();
    event_func_6761();
    event_func_6762();
    event_func_6763();
    event_func_6764();
    event_func_6765();
    event_func_6766();
    event_func_6767();
    event_func_14388();
    event_func_6769();
    event_func_6770();
    event_func_6771();
    event_func_6772();
    event_func_6773();
    event_func_6774();
    event_func_6775();
    event_func_6776();
    event_func_9557();
    event_func_9558();
    event_func_9559();
    event_func_9560();
    event_func_9561();
    event_func_9562();
    event_func_9563();
    event_func_9564();
    event_func_9565();
    event_func_9566();
    event_func_9567();
    event_func_14389();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
    event_func_11816();
    event_func_11817();
    event_func_11818();
    event_func_11819();
    event_func_11820();
    event_func_11821();
    event_func_11822();
    event_func_11823();
    event_func_11824();
    event_func_11825();
    event_func_11826();
    event_func_11827();
    event_func_11828();
    event_func_11829();
    event_func_11830();
    event_func_11831();
    event_func_11832();
    event_func_11833();
    event_func_11834();
    event_func_11835();
    event_func_14390();
    event_func_14391();
    event_func_14392();
    event_func_14393();
    event_func_14394();
    event_func_14395();
    event_func_14396();
    event_func_14397();
    event_func_14398();
    event_func_14399();
    event_func_14400();
    event_func_14401();
    event_func_14402();
    event_func_14403();
    event_func_14404();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_14405();
    event_func_14406();
    event_func_14407();
    event_func_14408();
    event_func_14409();
    event_func_14410();
    event_func_14411();
    event_func_14412();
    event_func_14413();
    event_func_3867();
    event_func_2491();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_10854();
    event_func_10855();
    event_func_14414();
    event_func_10857();
    event_func_10858();
    event_func_10859();
    event_func_10860();
    event_func_14415();
    event_func_14416();
    event_func_14417();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_14073();
    event_func_14418();
    event_func_11144();
    event_func_11145();
    event_func_11146();
    event_func_11147();
    event_func_11148();
    event_func_11149();
    event_func_11150();
    event_func_11151();
    event_func_11152();
    event_func_11153();
    event_func_11154();
    event_func_11155();
    event_func_11156();
    event_func_11157();
    event_func_11158();
    event_func_11159();
    event_func_11160();
    event_func_11161();
    event_func_11163();
    event_func_11164();
    event_func_11165();
    event_func_11166();
    event_func_11167();
    event_func_11167();
    event_func_11168();
    event_func_11169();
    event_func_11170();
    event_func_11171();
    event_func_11172();
    event_func_11173();
    event_func_11174();
    event_func_11175();
    event_func_10830();
    event_func_10831();
    event_func_11837();
    event_func_11838();
    event_func_11839();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_14419();
    event_func_3243();
    event_func_3244();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_9621();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
    event_func_14420();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_14421();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_14422();
    event_func_14423();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_68_pre_events()
{
}
void Frames::event_func_14424()
{
    // event 3_67
    {
        if (!(group_main_engine_1)) goto event_3_67_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 4800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_3_67_end: ;
}
void Frames::event_func_14425()
{
    // event 20_67
    {
        if (!(group_main_engine_1)) goto event_20_67_end;
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.6);
    }
    event_20_67_end: ;
}
void Frames::event_func_14426()
{
    // event 1421_67
    {
        if (!(group_main_engine_1)) goto event_1421_67_end;
        playershieldgiver_3499_instances.clear_selection();
        spread_value(playershieldgiver_3499_instances, 2, 0);
    }
    event_1421_67_end: ;
}
void Frames::event_func_14427()
{
    // event 1433_67
    {
        if (!(group_main_engine_1)) goto event_1433_67_end;
        corkscrewdoor_3537_instances.clear_selection();
        spread_value(corkscrewdoor_3537_instances, 0, 0);
        switchcorkscrewdoor_3536_instances.clear_selection();
        spread_value(switchcorkscrewdoor_3536_instances, 0, 0);
        for (ObjectIterator it(corkscrewdoor_3537_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
        }
    }
    event_1433_67_end: ;
}
void Frames::event_func_14428()
{
    // event 1447_67
    {
        if (!(group_main_engine_1)) goto event_1447_67_end;
        levelfdpushplatform_3539_instances.clear_selection();
        spread_value(levelfdpushplatform_3539_instances, 16, 0);
        for (ObjectIterator it(levelfdpushplatform_3539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, (((Active*)*it)->alterables->values.get(16)%math_helper%12)*32);
        }
    }
    event_1447_67_end: ;
}
void Frames::event_func_14429()
{
    // event 1456_67
    {
        if (!(group_main_engine_1)) goto event_1456_67_end;
        levelelectriccrusher_3540_instances.clear_selection();
        spread_value(levelelectriccrusher_3540_instances, 4, 0);
        for (ObjectIterator it(levelelectriccrusher_3540_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*45);
        }
    }
    event_1456_67_end: ;
}
void Frames::event_func_14430()
{
    // event 1589_67
    {
        if (!(group_main_engine_1)) goto event_1589_67_end;
        {
            enemyelitespawner_3345_instances.clear_selection();
            SavedSelection extra_enemyelitespawner_3345_instances(enemyelitespawner_3345_instances);
            for (SavedIterator it(extra_enemyelitespawner_3345_instances); !it.end(); ++it) {
                foreach_instance_spawner = ((Active*)*it);
                foreach_spawner_67();
            }
        }
    }
    event_1589_67_end: ;
}
void Frames::event_func_14431()
{
    // event 1829_67
    {
        if (!(group_main_engine_1)) goto event_1829_67_end;
        lockeddoorterminal_2606_instances.clear_selection();
        spread_value(lockeddoorterminal_2606_instances, 1, 0);
        lockeddoorseal_2672_instances.clear_selection();
        spread_value(lockeddoorseal_2672_instances, 1, 0);
        lockedlabdoorfront_3544_instances.clear_selection();
        spread_value(lockedlabdoorfront_3544_instances, 1, 0);
        lockedlabdoorback_3506_instances.clear_selection();
        spread_value(lockedlabdoorback_3506_instances, 1, 0);
        lockedlabdoorbarrier_3541_instances.clear_selection();
        spread_value(lockedlabdoorbarrier_3541_instances, 1, 0);
    }
    event_1829_67_end: ;
}
void Frames::event_func_14432()
{
    // event 1846_67
    {
        if (!(group_main_engine_1)) goto event_1846_67_end;
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        spread_value(effecttubeshade_3503_instances, 1, 0);
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)*90)%math_helper%360);
        }
    }
    event_1846_67_end: ;
}
void Frames::event_func_14433()
{
    // event 2045_67
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2045_67_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
    }
    event_2045_67_end: ;
}
void Frames::on_frame_68_start_events()
{
    event_func_3980();
    event_func_4133();
    event_func_14424();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_14425();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_14426();
    event_func_14427();
    event_func_14428();
    event_func_14429();
    event_func_10707();
    event_func_13539();
    event_func_14430();
    event_func_11501();
    event_func_11850();
    event_func_2686();
    event_func_2687();
    event_func_14431();
    event_func_14432();
    event_func_11364();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_14433();
    event_func_11073();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_68_init()
{
    index = 67;
    width = 6144;
    height = 2496;
    virtual_width = 6144;
    virtual_height = 2496;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelfdpushplatform_3539_instances, &fdplatform_3542_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &levelfdpushplatform_3539_instances, &fdplatform_3542_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyslime_741_instances, &enemyslug_1182_instances, &enemycoilhead_1782_instances, &enemyaxleturret_2201_instances, &enemybuoybuoy_2418_instances, &enemyelitemask_2511_instances, &bossrobosquid_2752_instances, &enemytankbot_2821_instances, &enemysunflora_2960_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_466_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece10_765_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objecttransporter_3344_instances, &corkscrewdoor_3537_instances, &levelelectriccrusher_3540_instances, &lockedlabdoorbarrier_3541_instances, NULL};
    qualifier_7.set(30, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelfdpushplatform_3539_instances, &levelelectriccrusher_3540_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece1_3477(116, 0), 0);
    add_background_object(create_levelparallaxpiece3_3478(120, 0), 0);
    add_background_object(create_levelparallaxpiece2_3479(120, 0), 0);
    add_background_object(create_levelparallaxpiece8_3480(56, 0), 0);
    add_background_object(create_levelparallaxpiece10_3481(0, 0), 0);
    add_background_object(create_fdlabback12_3482(4512, 2272), 2);
    add_background_object(create_fdlabback12_3482(4640, 2272), 2);
    add_background_object(create_fdlabback12_3482(4768, 2272), 2);
    add_background_object(create_fdlabback12_3482(3872, 2272), 2);
    add_background_object(create_fdlabback12_3482(4000, 2272), 2);
    add_background_object(create_fdlabback12_3482(4128, 2272), 2);
    add_background_object(create_fdlabback12_3482(4256, 2272), 2);
    add_background_object(create_fdlabback12_3482(4384, 2272), 2);
    add_background_object(create_fdlabback6_3483(2624, 1824), 2);
    add_background_object(create_fdlabback6_3483(2496, 1824), 2);
    add_background_object(create_fdlabback6_3483(1568, 1568), 2);
    add_background_object(create_fdlabback1_3484(3936, 1888), 2);
    add_background_object(create_fdlabback5_3485(1928, 896), 2);
    add_background_object(create_fdlabback2_3486(1896, 1024), 2);
    add_background_object(create_fdlabback2_3486(1896, 960), 2);
    add_background_object(create_fdlabback2_3486(1896, 896), 2);
    add_background_object(create_fdlabback6_3483(2848, 1344), 2);
    add_background_object(create_fdlabback1_3484(2848, 1248), 2);
    add_background_object(create_fdlabback1_3484(3376, 1120), 2);
    add_background_object(create_fdlabback6_3483(3680, 736), 2);
    add_background_object(create_fdlabback1_3484(4000, 1184), 2);
    add_background_object(create_fdlabback5_3485(128, 512), 2);
    add_background_object(create_fdlabback5_3485(352, 512), 2);
    add_background_object(create_fdlabback1_3484(0, 544), 2);
    add_background_object(create_fdlabback1_3484(224, 544), 2);
    add_background_object(create_fdlabback3_3487(0, 512), 2);
    add_background_object(create_fdlabback3_3487(64, 512), 2);
    add_background_object(create_fdlabback3_3487(224, 512), 2);
    add_background_object(create_fdlabback3_3487(288, 512), 2);
    add_background_object(create_fdlabback1_3484(448, 544), 2);
    add_background_object(create_fdlabback3_3487(448, 512), 2);
    add_background_object(create_fdlabback3_3487(512, 512), 2);
    add_background_object(create_fdlabback5_3485(576, 512), 2);
    add_background_object(create_fdlabback1_3484(672, 544), 2);
    add_background_object(create_fdlabback3_3487(672, 512), 2);
    add_background_object(create_fdlabback3_3487(736, 512), 2);
    add_background_object(create_fdlabback1_3484(896, 416), 2);
    add_background_object(create_fdlabback1_3484(1024, 416), 2);
    add_background_object(create_fdlabback2_3486(800, 384), 2);
    add_background_object(create_fdlabback2_3486(800, 448), 2);
    add_background_object(create_fdlabback2_3486(800, 512), 2);
    add_background_object(create_fdlabback2_3486(800, 576), 2);
    add_background_object(create_fdlabback2_3486(800, 640), 2);
    add_background_object(create_fdlabback2_3486(768, 448), 2);
    add_background_object(create_fdlabback3_3487(896, 384), 2);
    add_background_object(create_fdlabback3_3487(960, 384), 2);
    add_background_object(create_fdlabback3_3487(1024, 384), 2);
    add_background_object(create_fdlabback3_3487(1088, 384), 2);
    add_background_object(create_fdlabback2_3486(864, 384), 2);
    add_background_object(create_fdlabback2_3486(864, 448), 2);
    add_background_object(create_fdlabback2_3486(864, 512), 2);
    add_background_object(create_fdlabback2_3486(864, 576), 2);
    add_background_object(create_fdlabback2_3486(1152, 384), 2);
    add_background_object(create_fdlabback2_3486(1152, 448), 2);
    add_background_object(create_fdlabback2_3486(1152, 512), 2);
    add_background_object(create_fdlabback2_3486(1152, 576), 2);
    add_background_object(create_fdlabback2_3486(1216, 384), 2);
    add_background_object(create_fdlabback2_3486(1216, 448), 2);
    add_background_object(create_fdlabback2_3486(1216, 512), 2);
    add_background_object(create_fdlabback2_3486(1216, 576), 2);
    add_background_object(create_fdlabback2_3486(1216, 640), 2);
    add_background_object(create_fdlabback1_3484(1248, 544), 2);
    add_background_object(create_fdlabback2_3486(1248, 448), 2);
    add_background_object(create_fdlabback3_3487(1248, 512), 2);
    add_background_object(create_fdlabback3_3487(1312, 512), 2);
    add_background_object(create_fdlabback5_3485(1376, 512), 2);
    add_background_object(create_fdlabback1_3484(1472, 544), 2);
    add_background_object(create_fdlabback3_3487(1472, 512), 2);
    add_background_object(create_fdlabback3_3487(1536, 512), 2);
    add_background_object(create_fdlabback5_3485(1600, 512), 2);
    add_background_object(create_fdlabback1_3484(1696, 544), 2);
    add_background_object(create_fdlabback3_3487(1696, 512), 2);
    add_background_object(create_fdlabback3_3487(1760, 512), 2);
    add_background_object(create_fdlabback3_3487(1696, 704), 2);
    add_background_object(create_fdlabback3_3487(1760, 704), 2);
    add_background_object(create_fdlabback2_3486(1696, 736), 2);
    add_background_object(create_fdlabback2_3486(1792, 736), 2);
    add_background_object(create_fdlabback3_3487(1696, 800), 2);
    add_background_object(create_fdlabback3_3487(1760, 800), 2);
    add_background_object(create_fdlabback3_3487(1728, 736), 2);
    add_background_object(create_fdlabback3_3487(1728, 768), 2);
    add_background_object(create_fdlabback1_3484(1856, 544), 2);
    add_background_object(create_fdlabback2_3486(1824, 640), 2);
    add_background_object(create_fdlabback2_3486(1824, 576), 2);
    add_background_object(create_fdlabback2_3486(1824, 512), 2);
    add_background_object(create_fdlabback2_3486(1984, 640), 2);
    add_background_object(create_fdlabback2_3486(1984, 576), 2);
    add_background_object(create_fdlabback2_3486(1984, 512), 2);
    add_background_object(create_fdlabback3_3487(1696, 480), 2);
    add_background_object(create_fdlabback3_3487(1760, 480), 2);
    add_background_object(create_fdlabback3_3487(1696, 448), 2);
    add_background_object(create_fdlabback3_3487(1760, 448), 2);
    add_background_object(create_fdlabback3_3487(1696, 416), 2);
    add_background_object(create_fdlabback3_3487(1760, 416), 2);
    add_background_object(create_fdlabback3_3487(1760, 384), 2);
    add_background_object(create_fdlabback3_3487(1696, 384), 2);
    add_background_object(create_fdlabback1_3484(1696, 224), 2);
    add_background_object(create_fdlabback1_3484(1824, 224), 2);
    add_background_object(create_fdlabback1_3484(1952, 224), 2);
    add_background_object(create_fdlabback3_3487(2016, 480), 2);
    add_background_object(create_fdlabback3_3487(2016, 448), 2);
    add_background_object(create_fdlabback3_3487(2016, 416), 2);
    add_background_object(create_fdlabback3_3487(2016, 384), 2);
    add_background_object(create_fdlabback3_3487(2016, 512), 2);
    add_background_object(create_fdlabback1_3484(2016, 544), 2);
    add_background_object(create_fdlabback3_3487(1696, 1152), 2);
    add_background_object(create_fdlabback3_3487(1760, 1152), 2);
    add_background_object(create_fdlabback3_3487(1664, 1184), 2);
    add_background_object(create_fdlabback3_3487(1728, 1184), 2);
    add_background_object(create_fdlabback1_3484(1920, 1376), 2);
    add_background_object(create_fdlabback1_3484(2048, 1376), 2);
    add_background_object(create_fdlabback2_3486(1888, 1472), 2);
    add_background_object(create_fdlabback2_3486(1888, 1408), 2);
    add_background_object(create_fdlabback3_3487(1792, 1184), 2);
    add_background_object(create_fdlabback1_3484(1696, 1376), 2);
    add_background_object(create_fdlabback2_3486(1824, 1344), 2);
    add_background_object(create_fdlabback1_3484(1696, 1216), 2);
    add_background_object(create_fdlabback2_3486(256, 448), 2);
    add_background_object(create_fdlabback2_3486(352, 448), 2);
    add_background_object(create_fdlabback3_3487(288, 416), 2);
    add_background_object(create_fdlabback3_3487(288, 320), 2);
    add_background_object(create_fdlabback3_3487(288, 224), 2);
    add_background_object(create_fdlabback1_3484(2464, 1504), 2);
    add_background_object(create_fdlabback1_3484(2592, 1504), 2);
    add_background_object(create_fdlabback1_3484(2720, 1504), 2);
    add_background_object(create_fdlabback1_3484(2848, 1504), 2);
    add_background_object(create_fdlabback3_3487(2656, 1664), 2);
    add_background_object(create_fdlabback3_3487(2720, 1664), 2);
    add_background_object(create_fdlabback2_3486(2304, 1472), 2);
    add_background_object(create_fdlabback2_3486(2304, 1408), 2);
    add_background_object(create_fdlabback2_3486(2304, 1344), 2);
    add_background_object(create_fdlabback2_3486(2304, 1280), 2);
    add_background_object(create_fdlabback5_3485(2336, 1472), 2);
    add_background_object(create_fdlabback2_3486(2432, 1600), 2);
    add_background_object(create_fdlabback2_3486(2432, 1536), 2);
    add_background_object(create_fdlabback2_3486(2432, 1472), 2);
    add_background_object(create_fdlabback2_3486(2432, 1408), 2);
    add_background_object(create_fdlabback2_3486(2432, 1344), 2);
    add_background_object(create_fdlabback2_3486(2432, 1280), 2);
    add_background_object(create_fdlabback5_3485(2336, 1280), 2);
    add_background_object(create_fdlabback6_3483(2592, 1344), 2);
    add_background_object(create_fdlabback6_3483(2720, 1344), 2);
    add_background_object(create_fdlabback1_3484(2656, 1696), 2);
    add_background_object(create_fdlabback1_3484(2528, 1696), 2);
    add_background_object(create_fdlabback3_3487(2656, 1856), 2);
    add_background_object(create_fdlabback3_3487(2592, 1856), 2);
    add_background_object(create_fdlabback1_3484(2496, 2016), 2);
    add_background_object(create_fdlabback2_3486(2464, 1984), 2);
    add_background_object(create_fdlabback5_3485(2784, 1984), 2);
    add_background_object(create_fdlabback2_3486(2880, 2112), 2);
    add_background_object(create_fdlabback2_3486(2880, 2048), 2);
    add_background_object(create_fdlabback2_3486(2880, 1984), 2);
    add_background_object(create_fdlabback2_3486(2752, 2112), 2);
    add_background_object(create_fdlabback2_3486(2752, 2048), 2);
    add_background_object(create_fdlabback2_3486(2752, 1984), 2);
    add_background_object(create_fdlabback3_3487(3168, 2112), 2);
    add_background_object(create_fdlabback3_3487(3104, 2112), 2);
    add_background_object(create_fdlabback1_3484(3104, 1952), 2);
    add_background_object(create_fdlabback1_3484(3232, 1952), 2);
    add_background_object(create_fdlabback3_3487(3232, 1920), 2);
    add_background_object(create_fdlabback2_3486(3776, 1984), 2);
    add_background_object(create_fdlabback2_3486(3776, 1920), 2);
    add_background_object(create_fdlabback2_3486(3776, 1856), 2);
    add_background_object(create_fdlabback2_3486(3776, 1792), 2);
    add_background_object(create_fdlabback2_3486(3776, 1728), 2);
    add_background_object(create_fdlabback2_3486(3776, 1664), 2);
    add_background_object(create_fdlabback2_3486(3776, 1600), 2);
    add_background_object(create_fdlabback2_3486(3776, 1536), 2);
    add_background_object(create_fdlabback1_3484(3808, 1888), 2);
    add_background_object(create_fdlabback5_3485(3680, 1856), 2);
    add_background_object(create_fdlabback5_3485(3680, 1664), 2);
    add_background_object(create_fdlabback2_3486(3648, 1984), 2);
    add_background_object(create_fdlabback1_3484(3520, 1888), 2);
    add_background_object(create_fdlabback2_3486(3488, 1984), 2);
    add_background_object(create_fdlabback5_3485(3680, 1472), 2);
    add_background_object(create_fdlabback2_3486(3776, 1472), 2);
    add_background_object(create_fdlabback2_3486(3488, 1472), 2);
    add_background_object(create_fdlabback2_3486(3648, 1472), 2);
    add_background_object(create_fdlabback2_3486(3776, 1408), 2);
    add_background_object(create_fdlabback2_3486(3776, 1344), 2);
    add_background_object(create_fdlabback5_3485(3680, 1280), 2);
    add_background_object(create_fdlabback2_3486(3776, 1280), 2);
    add_background_object(create_fdlabback2_3486(3648, 1280), 2);
    add_background_object(create_fdlabback2_3486(3648, 1408), 2);
    add_background_object(create_fdlabback2_3486(3648, 1344), 2);
    add_background_object(create_fdlabback2_3486(3488, 1408), 2);
    add_background_object(create_fdlabback2_3486(3488, 1344), 2);
    add_background_object(create_fdlabback2_3486(3488, 1280), 2);
    add_background_object(create_fdlabback2_3486(3488, 1216), 2);
    add_background_object(create_fdlabback2_3486(3776, 1216), 2);
    add_background_object(create_fdlabback2_3486(3776, 1152), 2);
    add_background_object(create_fdlabback5_3485(3680, 1088), 2);
    add_background_object(create_fdlabback2_3486(3776, 1088), 2);
    add_background_object(create_fdlabback2_3486(3648, 1088), 2);
    add_background_object(create_fdlabback2_3486(3648, 1216), 2);
    add_background_object(create_fdlabback2_3486(3648, 1152), 2);
    add_background_object(create_fdlabback1_3484(3808, 1568), 2);
    add_background_object(create_fdlabback1_3484(3936, 1568), 2);
    add_background_object(create_fdlabback1_3484(4064, 1568), 2);
    add_background_object(create_fdlabback1_3484(4192, 1568), 2);
    add_background_object(create_fdlabback6_3483(4192, 1408), 2);
    add_background_object(create_fdlabback6_3483(4064, 1408), 2);
    add_background_object(create_fdlabback6_3483(3936, 1408), 2);
    add_background_object(create_fdlabback6_3483(3808, 1408), 2);
    add_background_object(create_fdlabback3_3487(4128, 1728), 2);
    add_background_object(create_fdlabback3_3487(4192, 1728), 2);
    add_background_object(create_fdlabback1_3484(4128, 1824), 2);
    add_background_object(create_fdlabback1_3484(4256, 1824), 2);
    add_background_object(create_fdlabback1_3484(4384, 1824), 2);
    add_background_object(create_fdlabback3_3487(4128, 1792), 2);
    add_background_object(create_fdlabback3_3487(4192, 1792), 2);
    add_background_object(create_fdlabback3_3487(4256, 1792), 2);
    add_background_object(create_fdlabback3_3487(4320, 1792), 2);
    add_background_object(create_fdlabback3_3487(4384, 1792), 2);
    add_background_object(create_fdlabback3_3487(4448, 1792), 2);
    add_background_object(create_fdlabback3_3487(4192, 1760), 2);
    add_background_object(create_fdlabback3_3487(4128, 1760), 2);
    add_background_object(create_fdlabback1_3484(4512, 1824), 2);
    add_background_object(create_fdlabback3_3487(4512, 1792), 2);
    add_background_object(create_fdlabback3_3487(4576, 1792), 2);
    add_background_object(create_fdlabback3_3487(4640, 1792), 2);
    add_background_object(create_fdlabback1_3484(4640, 1824), 2);
    add_background_object(create_fdlabback3_3487(4704, 1792), 2);
    add_background_object(create_fdlabback1_3484(4768, 1824), 2);
    add_background_object(create_fdlabback3_3487(4832, 1792), 2);
    add_background_object(create_fdlabback1_3484(4896, 1824), 2);
    add_background_object(create_fdlabback3_3487(4960, 1792), 2);
    add_background_object(create_fdlabback3_3487(4768, 1792), 2);
    add_background_object(create_fdlabback3_3487(4896, 1792), 2);
    add_background_object(create_fdlabback3_3487(5024, 1792), 2);
    add_background_object(create_fdlabback1_3484(5024, 1824), 2);
    add_background_object(create_fdlabback2_3486(3776, 1024), 2);
    add_background_object(create_fdlabback2_3486(3776, 960), 2);
    add_background_object(create_fdlabback5_3485(3680, 896), 2);
    add_background_object(create_fdlabback2_3486(3776, 896), 2);
    add_background_object(create_fdlabback2_3486(3648, 896), 2);
    add_background_object(create_fdlabback2_3486(3648, 1024), 2);
    add_background_object(create_fdlabback2_3486(3648, 960), 2);
    add_background_object(create_fdlabback1_3484(4128, 1184), 2);
    add_background_object(create_fdlabback1_3484(4256, 1184), 2);
    add_background_object(create_fdlabback1_3484(4384, 1184), 2);
    add_background_object(create_fdlabback1_3484(4512, 1184), 2);
    add_background_object(create_fdlabback3_3487(4384, 1344), 2);
    add_background_object(create_fdlabback3_3487(4384, 1376), 2);
    add_background_object(create_fdlabback3_3487(4384, 1152), 2);
    add_background_object(create_fdlabback3_3487(4320, 1152), 2);
    add_background_object(create_fdlabback2_3486(3776, 832), 2);
    add_background_object(create_fdlabback2_3486(3648, 832), 2);
    add_background_object(create_fdlabback6_3483(4000, 1024), 2);
    add_background_object(create_fdlabback6_3483(4064, 864), 2);
    add_background_object(create_fdlabback3_3487(3808, 832), 2);
    add_background_object(create_fdlabback3_3487(3872, 832), 2);
    add_background_object(create_fdlabback3_3487(3936, 832), 2);
    add_background_object(create_fdlabback3_3487(4000, 832), 2);
    add_background_object(create_fdlabback3_3487(4064, 832), 2);
    add_background_object(create_fdlabback2_3486(4640, 1152), 2);
    add_background_object(create_fdlabback2_3486(4640, 1216), 2);
    add_background_object(create_fdlabback2_3486(4640, 1280), 2);
    add_background_object(create_fdlabback2_3486(4640, 1344), 2);
    add_background_object(create_fdlabback2_3486(4640, 1408), 2);
    add_background_object(create_fdlabback5_3485(3392, 1856), 2);
    add_background_object(create_fdlabback2_3486(3360, 1856), 2);
    add_background_object(create_fdlabback2_3486(3360, 1792), 2);
    add_background_object(create_fdlabback2_3486(3360, 1728), 2);
    add_background_object(create_fdlabback2_3486(3360, 1664), 2);
    add_background_object(create_fdlabback2_3486(3360, 1600), 2);
    add_background_object(create_fdlabback2_3486(3360, 1536), 2);
    add_background_object(create_fdlabback2_3486(3360, 1472), 2);
    add_background_object(create_fdlabback2_3486(3360, 1408), 2);
    add_background_object(create_fdlabback2_3486(3360, 1344), 2);
    add_background_object(create_fdlabback2_3486(3360, 1280), 2);
    add_background_object(create_fdlabback2_3486(3360, 1216), 2);
    add_background_object(create_fdlabback5_3485(3392, 1664), 2);
    add_background_object(create_fdlabback5_3485(3392, 1472), 2);
    add_background_object(create_fdlabback5_3485(3392, 1280), 2);
    add_background_object(create_fdlabback2_3486(3488, 1152), 2);
    add_background_object(create_fdlabback2_3486(3360, 1152), 2);
    add_background_object(create_fdlabback1_3484(3616, 480), 2);
    add_background_object(create_fdlabback3_3487(3616, 640), 2);
    add_background_object(create_fdlabback3_3487(3584, 672), 2);
    add_background_object(create_fdlabback3_3487(3616, 704), 2);
    add_background_object(create_fdlabback3_3487(3584, 736), 2);
    add_background_object(create_fdlabback3_3487(3616, 768), 2);
    add_background_object(create_fdlabback3_3487(3584, 800), 2);
    add_background_object(create_fdlabback5_3485(4352, 960), 2);
    add_background_object(create_fdlabback2_3486(4320, 960), 2);
    add_background_object(create_fdlabback2_3486(4320, 1024), 2);
    add_background_object(create_fdlabback2_3486(4320, 1088), 2);
    add_background_object(create_fdlabback2_3486(4448, 960), 2);
    add_background_object(create_fdlabback2_3486(4448, 1024), 2);
    add_background_object(create_fdlabback2_3486(4448, 1088), 2);
    add_background_object(create_fdlabback5_3485(4480, 960), 2);
    add_background_object(create_fdlabback2_3486(4576, 960), 2);
    add_background_object(create_fdlabback2_3486(4576, 1024), 2);
    add_background_object(create_fdlabback2_3486(4576, 1088), 2);
    add_background_object(create_fdtesttube_3488(1656, 960), 2);
    add_background_object(create_fdtesttube_3488(1800, 960), 2);
    add_background_object(create_fdtesttube_3488(1944, 960), 2);
    add_background_object(create_fdlabback4_3489(1848, 256), 2);
    add_background_object(create_fdlabback4_3489(1952, 256), 2);
    add_background_object(create_fdlabback3_3487(3296, 1920), 2);
    add_background_object(create_fdlabback2_3486(3360, 1984), 2);
    add_background_object(create_fdlabback2_3486(3360, 1920), 2);
    add_background_object(create_fdlabback7_3490(3808, 864), 2);
    add_background_object(create_fdlabback8_3491(3808, 944), 2);
    add_background_object(create_fdlabback7_3490(3936, 944), 2);
    add_background_object(create_fdlabback9_3492(3936, 864), 2);
    add_background_object(create_fdlabback8_3491(1696, 1648), 2);
    add_background_object(create_fdlabback7_3490(1696, 1568), 2);
    add_background_object(create_fdlabback10_3493(2048, 1448), 2);
    add_background_object(create_fdlabback10_3493(3936, 1968), 2);
    add_background_object(create_fdlabback10_3493(224, 616), 2);
    add_background_object(create_fdlabback10_3493(296, 616), 2);
    add_background_object(create_fdlabback10_3493(448, 616), 2);
    add_background_object(create_fdlabback10_3493(520, 616), 2);
    add_background_object(create_fdlabback10_3493(72, 616), 2);
    add_background_object(create_fdlabback10_3493(1472, 616), 2);
    add_background_object(create_fdlabback10_3493(1320, 616), 2);
    add_background_object(create_fdlabback10_3493(1792, 296), 2);
    add_background_object(create_fdlabback11_3494(2656, 1576), 2);
    add_background_object(create_fdlabback9_3492(2464, 1344), 2);
    add_background_object(create_fdlabback7_3490(2464, 1424), 2);
    add_background_object(create_fdemptyelitesuit_3495(128, 624), 2);
    add_background_object(create_fdemptyelitesuit_3495(168, 624), 2);
    add_background_object(create_fdtesttube_3488(1056, 448), 2);
    add_background_object(create_fdtesttube_3488(928, 448), 2);
    add_background_object(create_fdlabback4_3489(4256, 1216), 2);
    add_background_object(create_fdlabback4_3489(4336, 1216), 2);
    add_background_object(create_fdlabback9_3492(5632, 640), 2);
    add_background_object(create_fdlabback1_3484(5248, 800), 2);
    add_background_object(create_fdlabback1_3484(5376, 800), 2);
    add_background_object(create_fdlabback1_3484(5504, 800), 2);
    add_background_object(create_fdlabback5_3485(5152, 704), 2);
    add_background_object(create_fdlabback5_3485(5760, 704), 2);
    add_background_object(create_fdlabback1_3484(5632, 800), 2);
    add_background_object(create_fdlabback9_3492(5504, 720), 2);
    add_background_object(create_fdlabback9_3492(5376, 720), 2);
    add_background_object(create_fdlabback9_3492(5248, 640), 2);
    add_background_object(create_fdlabback7_3490(5248, 720), 2);
    add_background_object(create_fdlabback8_3491(5504, 640), 2);
    add_background_object(create_fdlabback7_3490(5632, 720), 2);
    add_background_object(create_fdlabback7_3490(5376, 640), 2);
    add_background_object(create_fdtesttube_3488(5408, 832), 2);
    add_background_object(create_fdtesttube_3488(5536, 832), 2);
    add_background_object(create_fdlabback2_3486(5856, 704), 2);
    add_background_object(create_fdlabback2_3486(5856, 768), 2);
    add_background_object(create_fdlabback2_3486(5856, 832), 2);
    add_background_object(create_fdlabback3_3487(5920, 640), 2);
    add_background_object(create_fdlabback3_3487(5984, 640), 2);
    add_background_object(create_fdlabback3_3487(6048, 640), 2);
    add_background_object(create_fdlabback2_3486(5856, 576), 2);
    add_background_object(create_fdlabback2_3486(5856, 512), 2);
    add_background_object(create_fdlabback2_3486(5856, 448), 2);
    add_background_object(create_fdlabback5_3485(4832, 448), 2);
    add_background_object(create_fdlabback5_3485(4960, 448), 2);
    add_background_object(create_fdlabback2_3486(4928, 448), 2);
    add_background_object(create_fdlabback2_3486(4928, 512), 2);
    add_background_object(create_fdlabback2_3486(4928, 576), 2);
    add_background_object(create_fdlabback5_3485(5088, 448), 2);
    add_background_object(create_fdlabback2_3486(5056, 448), 2);
    add_background_object(create_fdlabback2_3486(5056, 512), 2);
    add_background_object(create_fdlabback2_3486(5056, 576), 2);
    add_background_object(create_fdlabback2_3486(5184, 448), 2);
    add_background_object(create_fdlabback2_3486(5184, 512), 2);
    add_background_object(create_fdlabback2_3486(5184, 576), 2);
    add_background_object(create_fdlabback1_3484(5344, 416), 2);
    add_background_object(create_fdlabback5_3485(5216, 448), 2);
    add_background_object(create_fdlabback2_3486(5312, 448), 2);
    add_background_object(create_fdlabback2_3486(5312, 512), 2);
    add_background_object(create_fdlabback1_3484(5472, 416), 2);
    add_background_object(create_fdlabback1_3484(5600, 416), 2);
    add_background_object(create_fdlabback2_3486(5728, 448), 2);
    add_background_object(create_fdlabback2_3486(5728, 512), 2);
    add_background_object(create_fdlabback5_3485(5760, 448), 2);
    add_background_object(create_fdlabback2_3486(5728, 576), 2);
    add_background_object(create_fdlabback2_3486(5696, 576), 2);
    add_background_object(create_fdlabback1_3484(4704, 480), 2);
    add_background_object(create_fdlabback1_3484(4704, 672), 2);
    add_background_object(create_fdlabback1_3484(4832, 672), 2);
    add_background_object(create_fdlabback1_3484(4960, 672), 2);
    add_background_object(create_fdlabback3_3487(4896, 832), 2);
    add_background_object(create_fdlabback3_3487(4832, 832), 2);
    add_background_object(create_fdlabback3_3487(4768, 832), 2);
    add_background_object(create_fdlabback3_3487(4896, 928), 2);
    add_background_object(create_fdlabback3_3487(4832, 928), 2);
    add_background_object(create_fdlabback3_3487(4768, 928), 2);
    add_background_object(create_fdlabback3_3487(4704, 928), 2);
    add_background_object(create_fdlabback3_3487(4640, 928), 2);
    add_background_object(create_fdlabback3_3487(4704, 448), 2);
    add_background_object(create_fdlabback1_3484(2944, 1248), 2);
    add_background_object(create_fdlabback2_3486(2912, 1344), 2);
    add_background_object(create_fdlabback2_3486(2912, 1280), 2);
    add_background_object(create_fdlabback2_3486(2912, 1216), 2);
    add_background_object(create_fdlabback1_3484(2720, 1248), 2);
    add_background_object(create_fdlabback1_3484(2592, 1248), 2);
    add_background_object(create_fdlabback1_3484(2464, 1248), 2);
    add_background_object(create_fdlabback2_3486(2024, 1024), 2);
    add_background_object(create_fdlabback2_3486(2024, 960), 2);
    add_background_object(create_fdlabback2_3486(2024, 896), 2);
    add_background_object(create_fdlabback3_3487(2784, 1216), 2);
    add_background_object(create_fdlabback3_3487(2848, 1216), 2);
    add_background_object(create_fdlabback3_3487(2656, 1216), 2);
    add_background_object(create_fdlabback3_3487(2720, 1216), 2);
    add_background_object(create_fdlabback3_3487(2592, 1216), 2);
    add_background_object(create_fdlabback11_3494(2784, 1320), 2);
    add_background_object(create_fdlabback10_3493(2944, 1320), 2);
    add_background_object(create_fdlabback5_3485(1472, 1536), 2);
    add_background_object(create_fdlabback2_3486(1312, 1664), 2);
    add_background_object(create_fdlabback2_3486(1312, 1600), 2);
    add_background_object(create_fdlabback2_3486(1312, 1536), 2);
    add_background_object(create_fdlabback1_3484(416, 1056), 2);
    add_background_object(create_fdlabback1_3484(544, 1056), 2);
    add_background_object(create_fdlabback1_3484(672, 1056), 2);
    add_background_object(create_fdlabback1_3484(800, 1056), 2);
    add_background_object(create_fdlabback6_3483(416, 896), 2);
    add_background_object(create_fdlabback6_3483(544, 896), 2);
    add_background_object(create_fdlabback3_3487(608, 1216), 2);
    add_background_object(create_fdlabback3_3487(672, 1216), 2);
    add_background_object(create_fdlabback3_3487(736, 1216), 2);
    add_background_object(create_fdlabback3_3487(800, 1216), 2);
    add_background_object(create_fdlabback2_3486(800, 1248), 2);
    add_background_object(create_fdlabback3_3487(800, 1312), 2);
    add_background_object(create_fdlabback3_3487(736, 1312), 2);
    add_background_object(create_fdlabback3_3487(864, 1312), 2);
    add_background_object(create_fdlabback3_3487(928, 1312), 2);
    add_background_object(create_fdlabback2_3486(896, 1344), 2);
    add_background_object(create_fdlabback2_3486(896, 1408), 2);
    add_background_object(create_fdlabback2_3486(896, 1472), 2);
    add_background_object(create_fdlabback3_3487(928, 1440), 2);
    add_background_object(create_fdlabback3_3487(992, 1440), 2);
    add_background_object(create_fdlabback3_3487(1056, 1440), 2);
    add_background_object(create_fdlabback2_3486(1056, 1472), 2);
    add_background_object(create_fdlabback2_3486(1056, 1536), 2);
    add_background_object(create_fdlabback2_3486(1056, 1600), 2);
    add_background_object(create_fdlabback3_3487(992, 1600), 2);
    add_background_object(create_fdlabback3_3487(1088, 1600), 2);
    add_background_object(create_fdlabback2_3486(1568, 1664), 2);
    add_background_object(create_fdlabback2_3486(1568, 1600), 2);
    add_background_object(create_fdlabback2_3486(1568, 1536), 2);
    add_background_object(create_fdtesttube_3488(4288, 2304), 2);
    add_background_object(create_fdemptyelitesuit_3495(4360, 2352), 2);
    add_background_object(create_fdemptyelitesuit_3495(4400, 2352), 2);
    add_background_object(create_fdemptyelitesuit_3495(4440, 2352), 2);
    add_background_object(create_fdtesttube_3488(4544, 2304), 2);
    add_background_object(create_fdemptyelitesuit_3495(4480, 2352), 2);
    add_background_object(create_fdlabback1_3484(704, 800), 2);
    add_background_object(create_fdlabback2_3486(672, 896), 2);
    add_background_object(create_fdlabback1_3484(832, 800), 2);
    add_background_object(create_fdlabback1_3484(960, 800), 2);
    add_background_object(create_fdlabback1_3484(1088, 800), 2);
    add_background_object(create_fdlabback2_3486(1344, 896), 2);
    add_background_object(create_fdlabback1_3484(1216, 800), 2);
    add_background_object(create_fdlabback5_3485(1496, 896), 2);
    add_background_object(create_fdlabback2_3486(1464, 1024), 2);
    add_background_object(create_fdlabback2_3486(1464, 960), 2);
    add_background_object(create_fdlabback2_3486(1464, 896), 2);
    add_background_object(create_fdlabback2_3486(1592, 1024), 2);
    add_background_object(create_fdlabback2_3486(1592, 960), 2);
    add_background_object(create_fdlabback2_3486(1592, 896), 2);
    add_background_object(create_fdlabback1_3484(3744, 480), 2);
    add_background_object(create_fdtesttube_3488(3808, 512), 2);
    add_background_object(create_fdlabback5_3485(2448, 896), 2);
    add_background_object(create_fdlabback2_3486(2416, 896), 2);
    add_background_object(create_fdlabback2_3486(2416, 960), 2);
    add_background_object(create_fdlabback2_3486(2416, 1024), 2);
    add_background_object(create_fdlabback2_3486(2416, 1088), 2);
    add_background_object(create_fdlabback2_3486(2416, 1152), 2);
    add_background_object(create_fdlabback2_3486(2544, 896), 2);
    add_background_object(create_fdlabback2_3486(2544, 960), 2);
    add_background_object(create_fdlabback2_3486(2544, 1024), 2);
    add_background_object(create_fdlabback2_3486(2544, 1088), 2);
    add_background_object(create_fdlabback2_3486(2544, 1152), 2);
    add_background_object(create_fdlabback1_3484(2848, 896), 2);
    add_background_object(create_fdlabback1_3484(2720, 896), 2);
    add_background_object(create_fdlabback2_3486(2688, 992), 2);
    add_background_object(create_fdlabback2_3486(2688, 928), 2);
    add_background_object(create_fdlabback2_3486(2688, 864), 2);
    add_background_object(create_fdlabback11_3494(2784, 976), 2);
    add_background_object(create_fdlabback10_3493(2720, 976), 2);
    add_background_object(create_fdlabback2_3486(2416, 1216), 2);
    add_background_object(create_fdlabback1_3484(2160, 1056), 2);
    add_background_object(create_fdlabback1_3484(2288, 1056), 2);
    add_background_object(create_fdlabback2_3486(2128, 896), 2);
    add_background_object(create_fdlabback2_3486(2128, 960), 2);
    add_background_object(create_fdlabback2_3486(2128, 1024), 2);
    add_background_object(create_fdlabback2_3486(2128, 1088), 2);
    add_background_object(create_fdlabback2_3486(2128, 1152), 2);
    add_background_object(create_fdlabback6_3483(2160, 896), 2);
    add_background_object(create_fdlabback6_3483(2288, 896), 2);
    add_background_object(create_fdlabback1_3484(1824, 1376), 2);
    add_background_object(create_fdlabback6_3483(1824, 1568), 2);
    add_background_object(create_fdlabback3_3487(1440, 1152), 2);
    add_background_object(create_fdlabback3_3487(1472, 1184), 2);
    add_background_object(create_fdlabback5_3485(1344, 1536), 2);
    add_background_object(create_fdlabback2_3486(1440, 1664), 2);
    add_background_object(create_fdlabback2_3486(1440, 1600), 2);
    add_background_object(create_fdlabback2_3486(1440, 1536), 2);
    add_background_object(create_fdlabback3_3487(1152, 1600), 2);
    add_background_object(create_fdlabback3_3487(1696, 1536), 2);
    add_background_object(create_fdlabback3_3487(1760, 1536), 2);
    add_background_object(create_fdlabback3_3487(1824, 1536), 2);
    add_background_object(create_fdtesttube_3488(1512, 960), 2);
    add_background_object(create_fdlabback5_3485(528, 128), 2);
    add_background_object(create_fdlabback2_3486(496, 128), 2);
    add_background_object(create_fdlabback2_3486(496, 192), 2);
    add_background_object(create_fdlabback2_3486(496, 256), 2);
    add_background_object(create_fdlabback2_3486(624, 128), 2);
    add_background_object(create_fdlabback2_3486(624, 192), 2);
    add_background_object(create_fdlabback2_3486(624, 256), 2);
    add_background_object(create_fdlabback3_3487(1632, 1152), 2);
    add_background_object(create_fdlabback3_3487(1600, 1184), 2);
    add_background_object(create_fdlabback3_3487(1568, 1152), 2);
    add_background_object(create_fdlabback3_3487(1536, 1184), 2);
    add_background_object(create_fdlabback3_3487(1504, 1152), 2);
    add_background_object(create_fdlabback3_3487(1408, 1184), 2);
    add_background_object(create_fdlabback1_3484(2624, 2016), 2);
    add_background_object(create_fdlabback3_3487(2560, 1984), 2);
    add_background_object(create_fdlabback3_3487(2624, 1984), 2);
    add_background_object(create_fdlabback3_3487(2688, 1984), 2);
    add_background_object(create_fdlabback3_3487(2496, 1984), 2);
    add_background_object(create_fdlabback2_3486(2464, 2048), 2);
    add_background_object(create_fdlabback2_3486(2464, 2112), 2);
    add_background_object(create_fdlabback1_3484(2336, 2016), 2);
    add_background_object(create_fdlabback1_3484(2208, 2016), 2);
    add_background_object(create_fdlabback1_3484(2080, 2016), 2);
    add_background_object(create_fdemptyelitesuit_3495(2208, 2096), 2);
    add_background_object(create_fdemptyelitesuit_3495(2248, 2096), 2);
    add_background_object(create_fdemptyelitesuit_3495(2288, 2096), 2);
    add_background_object(create_fdemptyelitesuit_3495(2088, 2096), 2);
    add_background_object(create_fdlabback2_3486(3232, 2240), 2);
    add_background_object(create_fdlabback2_3486(3232, 2176), 2);
    add_background_object(create_fdlabback2_3486(3392, 2176), 2);
    add_background_object(create_fdlabback2_3486(3392, 2240), 2);
    add_background_object(create_fdlabback14_3496(3872, 2240), 2);
    add_background_object(create_fdlabback14_3496(3936, 2240), 2);
    add_background_object(create_fdlabback14_3496(4000, 2240), 2);
    add_background_object(create_fdlabback13_3497(5024, 2304), 2);
    add_background_object(create_fdlabback13_3497(5024, 2368), 2);
    add_background_object(create_fdlabback13_3497(5152, 2304), 2);
    add_background_object(create_fdlabback13_3497(5152, 2368), 2);
    add_background_object(create_fdlabback13_3497(5280, 2304), 2);
    add_background_object(create_fdlabback13_3497(5280, 2368), 2);
    add_background_object(create_fdlabback13_3497(5408, 2304), 2);
    add_background_object(create_fdlabback13_3497(5408, 2368), 2);
    add_background_object(create_fdlabback4_3489(5008, 512), 2);
    add_background_object(create_fdlabback4_3489(4880, 512), 2);
    add_background_object(create_fdlabback4_3489(5224, 512), 2);
    add_background_object(create_fdlabback4_3489(5792, 512), 2);
    add_background_object(create_fdlabback4_3489(5912, 768), 2);
    add_background_object(create_fdlabback4_3489(5984, 768), 2);
    add_background_object(create_fdlabback4_3489(2704, 2048), 2);
    add_background_object(create_fdlabback4_3489(2632, 2048), 2);
    add_background_object(create_fdlabback4_3489(2568, 2048), 2);
    add_background_object(create_fdlabback13_3497(5536, 2304), 2);
    add_background_object(create_fdlabback13_3497(5536, 2368), 2);
    add_background_object(create_fdlabback13_3497(5536, 2176), 2);
    add_background_object(create_fdlabback13_3497(5024, 2176), 2);
    add_background_object(create_fdlabback13_3497(5152, 2176), 2);
    add_background_object(create_fdlabback13_3497(5280, 2176), 2);
    add_background_object(create_fdlabback13_3497(5408, 2176), 2);
    add_background_object(create_fdlabback13_3497(6016, 1312), 2);
    add_background_object(create_fdlabback13_3497(6016, 1248), 2);
    add_background_object(create_fdlabback12_3482(6048, 1216), 2);
    add_background_object(create_fdlabback13_3497(5632, 1792), 2);
    add_background_object(create_fdlabback13_3497(5632, 1728), 2);
    add_background_object(create_fdlabback13_3497(5632, 1664), 2);
    add_background_object(create_fdlabback15_3498(5536, 1664), 2);
    add_background_object(create_fdlabback14_3496(5664, 1632), 2);
    add_background_object(create_fdlabback14_3496(5728, 1632), 2);
    add_background_object(create_fdlabback14_3496(5792, 1632), 2);
    add_background_object(create_fdlabback14_3496(5664, 1856), 2);
    add_background_object(create_fdlabback14_3496(5728, 1856), 2);
    add_background_object(create_fdlabback14_3496(5792, 1856), 2);
    add_background_object(create_fdlabback13_3497(5856, 1952), 2);
    add_background_object(create_fdlabback13_3497(5856, 1888), 2);
    add_background_object(create_fdlabback13_3497(5856, 1824), 2);
    add_background_object(create_fdlabback13_3497(5856, 2144), 2);
    add_background_object(create_fdlabback13_3497(5856, 2080), 2);
    add_background_object(create_fdlabback13_3497(5856, 2016), 2);
    add_background_object(create_fdlabback13_3497(5856, 2208), 2);
    add_background_object(create_fdlabback15_3498(5888, 2080), 2);
    add_background_object(create_fdlabback15_3498(5888, 1856), 2);
    add_background_object(create_fdlabback14_3496(5888, 2048), 2);
    add_background_object(create_fdlabback14_3496(5952, 2048), 2);
    add_background_object(create_fdlabback14_3496(5888, 1824), 2);
    add_background_object(create_fdlabback14_3496(5952, 1824), 2);
    add_background_object(create_fdlabback13_3497(5856, 1568), 2);
    add_background_object(create_fdlabback13_3497(5856, 1504), 2);
    add_background_object(create_fdlabback13_3497(5856, 1440), 2);
    add_background_object(create_fdlabback13_3497(5856, 1376), 2);
    add_background_object(create_fdlabback15_3498(5888, 1440), 2);
    add_object(create_playershieldgiver_3499(3904, 2391), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(6144, 85), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_objectsiren_3337(-329, 2231), 2);
    add_object(create_playershieldgiver_3499(4736, 607), 2);
    add_object(create_labdoorback_3500(1928, 1472), 2);
    add_object(create_levelelectriccrushermask_3501(3936, 1600), 2);
    add_object(create_levelelectriccrushermask_3501(4064, 1600), 2);
    add_object(create_levelelectriccrushermask_3501(4192, 1568), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3424, 1952), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelfdpushplatformmask_3502(3744, 1440), 2);
    add_object(create_levelelectriccrushermask_3501(4384, 1856), 2);
    add_object(create_levelelectriccrushermask_3501(4512, 1856), 2);
    add_object(create_levelelectriccrushermask_3501(4640, 1856), 2);
    add_object(create_levelelectriccrushermask_3501(4768, 1856), 2);
    add_object(create_levelelectriccrushermask_3501(4768, 1536), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_levelfdpushplatformmask_3502(5024, 1888), 2);
    add_object(create_effecttubeshade_3503(1688, 1032), 2);
    add_object(create_effecttubeshade_3503(1832, 1032), 2);
    add_object(create_effecttubeshade_3503(1976, 1032), 2);
    add_object(create_fdconsole1_3504(3808, 960), 2);
    add_object(create_fdconsole2_3505(3816, 880), 2);
    add_object(create_fdconsole2_3505(3944, 960), 2);
    add_object(create_fdconsole2_3505(1704, 1584), 2);
    add_object(create_fdconsole1_3504(1696, 1664), 2);
    add_object(create_fdconsole2_3505(2048, 1464), 2);
    add_object(create_fdconsole2_3505(3936, 1984), 2);
    add_object(create_fdconsole2_3505(224, 632), 2);
    add_object(create_fdconsole2_3505(296, 632), 2);
    add_object(create_fdconsole2_3505(448, 632), 2);
    add_object(create_fdconsole2_3505(520, 632), 2);
    add_object(create_fdconsole2_3505(72, 632), 2);
    add_object(create_fdconsole2_3505(1472, 632), 2);
    add_object(create_fdconsole2_3505(1320, 632), 2);
    add_object(create_fdconsole2_3505(1792, 312), 2);
    add_object(create_fdconsole1_3504(2656, 1592), 2);
    add_object(create_fdconsole2_3505(2472, 1440), 2);
    add_object(create_effecttubeshade_3503(1088, 520), 2);
    add_object(create_effecttubeshade_3503(960, 520), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_levelfdpushplatformmask_3502(4896, 1280), 2);
    add_object(create_fdconsole1_3504(5504, 656), 2);
    add_object(create_fdconsole2_3505(5384, 656), 2);
    add_object(create_fdconsole2_3505(5640, 736), 2);
    add_object(create_fdconsole2_3505(5256, 736), 2);
    add_object(create_effecttubeshade_3503(5440, 904), 2);
    add_object(create_effecttubeshade_3503(5568, 904), 2);
    add_object(create_fdconsole2_3505(2944, 1336), 2);
    add_object(create_fdconsole1_3504(2784, 1336), 2);
    add_object(create_lockedlabdoorback_3506(3880, 1984), 2);
    add_object(create_lockeddoorterminal_2606(3728, 2048), 2);
    add_object(create_labdoorback_3500(3112, 1344), 2);
    add_object(create_labdoorfront_3507(3112, 1344), 2);
    add_object(create_effecttubeshade_3503(4320, 2376), 2);
    add_object(create_effecttubeshade_3503(4576, 2376), 2);
    add_object(create_labdoorback_3500(2152, 1472), 2);
    add_object(create_effecttubeshade_3503(3840, 584), 2);
    add_object(create_fdconsole1_3504(2784, 992), 2);
    add_object(create_fdconsole2_3505(2720, 992), 2);
    add_object(create_lockedlabdoorback_3506(1256, 1664), 2);
    add_object(create_lockeddoorterminal_2606(1392, 1728), 2);
    add_object(create_lockedlabdoorback_3506(2408, 2112), 2);
    add_object(create_lockeddoorterminal_2606(2528, 2176), 2);
    add_object(create_labdoorback_3500(1640, 1664), 2);
    add_object(create_effecttubeshade_3503(1544, 1032), 2);
    add_object(create_labdoorback_3500(4152, 2368), 2);
    add_object(create_labdoorback_3500(4168, 1280), 2);
    add_object(create_labdoorback_3500(4936, 2368), 2);
    add_object(create_levelelectriccrushermask_3501(5728, 2088), 2);
    add_object(create_levelelectriccrushermask_3501(5728, 1568), 2);
    add_object(create_labdoorback_3500(6088, 1312), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plplant3_2922(2800, 2104), 3);
    add_background_object(create_plplant3_2922(1728, 1016), 3);
    add_background_object(create_plplant3_2922(5328, 888), 3);
    add_background_object(create_plplant3_2922(5616, 888), 3);
    add_background_object(create_plplant3_2922(5440, 504), 3);
    add_background_object(create_plplant3_2922(5104, 568), 3);
    add_background_object(create_fdlabwall1_3508(5248, 2432), 3);
    add_background_object(create_fdlabwall2_3509(3840, 2432), 3);
    add_background_object(create_fdlabwall1_3508(3968, 2432), 3);
    add_background_object(create_fdlabwall2_3509(4096, 2432), 3);
    add_background_object(create_fdlabwall1_3508(4224, 2432), 3);
    add_background_object(create_fdlabwall2_3509(4352, 2432), 3);
    add_background_object(create_fdlabwall1_3508(4480, 2432), 3);
    add_background_object(create_fdlabwall2_3509(4608, 2432), 3);
    add_background_object(create_fdlabwall1_3508(4736, 2432), 3);
    add_background_object(create_fdlabwall2_3509(4864, 2432), 3);
    add_background_object(create_fdlabwall1_3508(4992, 2432), 3);
    add_background_object(create_fdlabwall2_3509(5120, 2432), 3);
    add_background_object(create_fdlabwall2_3509(5376, 2432), 3);
    add_background_object(create_fdlabwall1_3508(5504, 2432), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 1952), 3);
    add_background_object(create_fdventpipe_3511(1240, 1504), 3);
    add_background_object(create_fdventpipe_3511(1240, 1552), 3);
    add_background_object(create_fdlabfloor11_3512(2384, 1232), 3);
    add_background_object(create_fdlabfloor6_3513(2304, 992), 3);
    add_background_object(create_fdlabfloor6_3513(2240, 992), 3);
    add_background_object(create_fdlabfloor11_3512(2848, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(2848, 1088), 3);
    add_background_object(create_fdlabwall1_3508(2432, 1088), 3);
    add_background_object(create_fdventpipe_3511(1624, 1504), 3);
    add_background_object(create_fdventpipe_3511(1624, 1552), 3);
    add_background_object(create_fdlabfloor1_3514(512, 1216), 3);
    add_background_object(create_fdlabwall5_3515(5632, 928), 3);
    add_background_object(create_fdlabwall4_3516(5248, 928), 3);
    add_background_object(create_fdlabfloor8_3517(3296, 1472), 3);
    add_background_object(create_fdlabfloor4_3510(3328, 1472), 3);
    add_background_object(create_plplant3_2922(4480, 1272), 3);
    add_background_object(create_fdlabwall3_3518(3264, 2144), 3);
    add_background_object(create_fdlabfloor8_3517(3232, 2144), 3);
    add_background_object(create_fdlabfloor4_3510(3392, 2144), 3);
    add_background_object(create_fdlabwall1_3508(2560, 2208), 3);
    add_background_object(create_fdspiralsparktower_3405(-80, 2176), 3);
    add_background_object(create_fdspiralsparktower_3405(-80, 2208), 3);
    add_background_object(create_fdspiralsparktower_3405(-80, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(-264, 1096), 3);
    add_background_object(create_fdlabfloor10_3519(-264, 1024), 3);
    add_background_object(create_fdlabfloor11_3512(-264, 992), 3);
    add_background_object(create_fdlabfloor12_3520(-264, 1024), 3);
    add_background_object(create_fdlabfloor2_3521(-224, 1040), 3);
    add_background_object(create_fdlabfloor4_3510(-208, 1040), 3);
    add_background_object(create_fdlabfloor5_3522(-232, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(-240, 1040), 3);
    add_background_object(create_fdlabfloor7_3523(-208, 1048), 3);
    add_background_object(create_fdlabfloor8_3517(-232, 1032), 3);
    add_background_object(create_fdlabfloor9_3524(-216, 1048), 3);
    add_background_object(create_fdlabwall1_3508(-296, 1128), 3);
    add_background_object(create_fdlabwall4_3516(-160, 1160), 3);
    add_background_object(create_fdlabwall2_3509(-168, 1128), 3);
    add_background_object(create_fdlabwall5_3515(-288, 1160), 3);
    add_background_object(create_fdlabwall3_3518(-232, 1256), 3);
    add_background_object(create_fdlabback5_3485(-256, 1040), 3);
    add_background_object(create_fdlabfloor13_3525(-224, 1208), 3);
    add_background_object(create_fdlabfloor14_3526(-160, 1208), 3);
    add_background_object(create_fdlabwall1_3508(0, 736), 3);
    add_background_object(create_fdlabfloor1_3514(0, 704), 3);
    add_background_object(create_fdlabfloor1_3514(128, 704), 3);
    add_background_object(create_fdlabfloor6_3513(0, 480), 3);
    add_background_object(create_fdlabfloor6_3513(64, 480), 3);
    add_background_object(create_fdlabfloor6_3513(128, 480), 3);
    add_background_object(create_fdlabfloor6_3513(192, 480), 3);
    add_background_object(create_fdlabwall1_3508(0, 352), 3);
    add_background_object(create_fdlabwall2_3509(128, 352), 3);
    add_background_object(create_fdlabwall1_3508(128, 864), 3);
    add_background_object(create_fdlabwall2_3509(128, 736), 3);
    add_background_object(create_fdlabwall2_3509(0, 864), 3);
    add_background_object(create_fdlabfloor6_3513(512, 480), 3);
    add_background_object(create_fdlabfloor6_3513(576, 480), 3);
    add_background_object(create_fdlabfloor6_3513(640, 480), 3);
    add_background_object(create_fdlabfloor6_3513(704, 480), 3);
    add_background_object(create_fdlabwall1_3508(512, 352), 3);
    add_background_object(create_fdlabwall2_3509(640, 352), 3);
    add_background_object(create_fdlabwall1_3508(512, 736), 3);
    add_background_object(create_fdlabwall2_3509(640, 736), 3);
    add_background_object(create_fdlabwall5_3515(768, 608), 3);
    add_background_object(create_fdlabwall1_3508(768, 736), 3);
    add_background_object(create_fdlabfloor14_3526(768, 640), 3);
    add_background_object(create_fdlabfloor14_3526(832, 576), 3);
    add_background_object(create_fdlabfloor6_3513(384, 480), 3);
    add_background_object(create_fdlabfloor6_3513(448, 480), 3);
    add_background_object(create_fdlabwall2_3509(384, 352), 3);
    add_background_object(create_fdlabwall1_3508(256, 736), 3);
    add_background_object(create_fdlabfloor1_3514(384, 704), 3);
    add_background_object(create_fdlabwall2_3509(384, 736), 3);
    add_background_object(create_fdlabwall2_3509(256, 864), 3);
    add_background_object(create_fdlabwall2_3509(768, 224), 3);
    add_background_object(create_fdlabwall1_3508(768, 96), 3);
    add_background_object(create_fdlabfloor4_3510(768, 352), 3);
    add_background_object(create_fdlabfloor4_3510(768, 416), 3);
    add_background_object(create_fdlabfloor5_3522(768, 480), 3);
    add_background_object(create_fdlabfloor6_3513(832, 352), 3);
    add_background_object(create_fdlabfloor6_3513(768, 352), 3);
    add_background_object(create_fdlabfloor3_3527(768, 352), 3);
    add_background_object(create_fdlabwall1_3508(896, 224), 3);
    add_background_object(create_fdlabwall2_3509(1024, 224), 3);
    add_background_object(create_fdlabwall1_3508(1024, 96), 3);
    add_background_object(create_fdlabwall2_3509(896, 96), 3);
    add_background_object(create_fdlabfloor6_3513(896, 352), 3);
    add_background_object(create_fdlabfloor6_3513(960, 352), 3);
    add_background_object(create_fdlabfloor6_3513(1024, 352), 3);
    add_background_object(create_fdlabfloor6_3513(1088, 352), 3);
    add_background_object(create_fdlabwall1_3508(896, 608), 3);
    add_background_object(create_fdlabwall2_3509(896, 736), 3);
    add_background_object(create_fdlabwall2_3509(1024, 608), 3);
    add_background_object(create_fdlabwall1_3508(1024, 736), 3);
    add_background_object(create_fdlabfloor1_3514(896, 576), 3);
    add_background_object(create_fdlabfloor1_3514(1024, 576), 3);
    add_background_object(create_fdlabwall4_3516(1152, 608), 3);
    add_background_object(create_fdlabfloor13_3525(1152, 576), 3);
    add_background_object(create_fdlabfloor13_3525(1216, 640), 3);
    add_background_object(create_fdlabwall2_3509(1152, 736), 3);
    add_background_object(create_fdlabwall1_3508(1280, 736), 3);
    add_background_object(create_fdlabfloor1_3514(1280, 704), 3);
    add_background_object(create_fdlabwall1_3508(1152, 224), 3);
    add_background_object(create_fdlabwall2_3509(1152, 96), 3);
    add_background_object(create_fdlabfloor6_3513(1152, 352), 3);
    add_background_object(create_fdlabfloor6_3513(1216, 352), 3);
    add_background_object(create_fdlabwall2_3509(1280, 224), 3);
    add_background_object(create_fdlabwall1_3508(1280, 96), 3);
    add_background_object(create_fdlabwall1_3508(1280, 352), 3);
    add_background_object(create_fdlabfloor8_3517(1248, 416), 3);
    add_background_object(create_fdlabfloor8_3517(1248, 352), 3);
    add_background_object(create_fdlabfloor2_3521(1248, 352), 3);
    add_background_object(create_fdlabfloor7_3523(1248, 480), 3);
    add_background_object(create_fdlabfloor6_3513(1280, 480), 3);
    add_background_object(create_fdlabfloor6_3513(1344, 480), 3);
    add_background_object(create_fdlabwall2_3509(1408, 736), 3);
    add_background_object(create_fdlabwall1_3508(1536, 736), 3);
    add_background_object(create_fdlabfloor1_3514(1408, 704), 3);
    add_background_object(create_fdlabfloor1_3514(1536, 704), 3);
    add_background_object(create_fdlabfloor2_3521(1664, 704), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 736), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 800), 3);
    add_background_object(create_fdlabwall1_3508(1408, 224), 3);
    add_background_object(create_fdlabwall2_3509(1408, 96), 3);
    add_background_object(create_fdlabwall2_3509(1536, 224), 3);
    add_background_object(create_fdlabwall1_3508(1536, 96), 3);
    add_background_object(create_fdlabwall2_3509(1408, 352), 3);
    add_background_object(create_fdlabwall1_3508(1536, 352), 3);
    add_background_object(create_fdlabfloor6_3513(1408, 480), 3);
    add_background_object(create_fdlabfloor6_3513(1472, 480), 3);
    add_background_object(create_fdlabfloor6_3513(1536, 480), 3);
    add_background_object(create_fdlabfloor6_3513(1600, 480), 3);
    add_background_object(create_fdlabfloor9_3524(1664, 480), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 416), 3);
    add_background_object(create_fdlabfloor1_3514(1696, 832), 3);
    add_background_object(create_fdlabfloor3_3527(1824, 704), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 736), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 800), 3);
    add_background_object(create_fdlabfloor7_3523(1824, 864), 3);
    add_background_object(create_fdlabfloor5_3522(1664, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1472, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1536, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1600, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1408, 864), 3);
    add_background_object(create_fdlabfloor2_3521(1824, 832), 3);
    add_background_object(create_fdlabfloor3_3527(1664, 832), 3);
    add_background_object(create_fdlabwall1_3508(1856, 736), 3);
    add_background_object(create_fdlabfloor6_3513(1856, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1920, 864), 3);
    add_background_object(create_fdlabfloor1_3514(1856, 704), 3);
    add_background_object(create_fdlabfloor7_3523(1824, 544), 3);
    add_background_object(create_fdlabfloor6_3513(1856, 544), 3);
    add_background_object(create_fdlabfloor6_3513(1920, 544), 3);
    add_background_object(create_fdlabwall2_3509(1984, 736), 3);
    add_background_object(create_fdlabfloor6_3513(1984, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2048, 864), 3);
    add_background_object(create_fdlabwall1_3508(2112, 736), 3);
    add_background_object(create_fdlabwall2_3509(2112, 608), 3);
    add_background_object(create_fdlabwall1_3508(2112, 480), 3);
    add_background_object(create_fdlabwall2_3509(2112, 352), 3);
    add_background_object(create_fdlabwall2_3509(2240, 736), 3);
    add_background_object(create_fdlabwall1_3508(2240, 608), 3);
    add_background_object(create_fdlabwall2_3509(2240, 480), 3);
    add_background_object(create_fdlabwall1_3508(2240, 352), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 480), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 416), 3);
    add_background_object(create_fdlabfloor5_3522(1984, 544), 3);
    add_background_object(create_fdlabwall1_3508(1856, 416), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 480), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 416), 3);
    add_background_object(create_fdlabfloor1_3514(1856, 384), 3);
    add_background_object(create_fdlabfloor3_3527(1824, 384), 3);
    add_background_object(create_fdlabfloor2_3521(1984, 384), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 352), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 288), 3);
    add_background_object(create_fdlabwall2_3509(1664, 96), 3);
    add_background_object(create_fdlabwall1_3508(1792, 96), 3);
    add_background_object(create_fdlabwall2_3509(1920, 96), 3);
    add_background_object(create_fdlabwall1_3508(2048, 96), 3);
    add_background_object(create_fdlabwall2_3509(2176, 96), 3);
    add_background_object(create_fdlabwall1_3508(2304, 96), 3);
    add_background_object(create_fdlabwall2_3509(1280, -32), 3);
    add_background_object(create_fdlabwall1_3508(1408, -32), 3);
    add_background_object(create_fdlabwall2_3509(1536, -32), 3);
    add_background_object(create_fdlabwall1_3508(1664, -32), 3);
    add_background_object(create_fdlabwall2_3509(1792, -32), 3);
    add_background_object(create_fdlabwall1_3508(1920, -32), 3);
    add_background_object(create_fdlabwall2_3509(2048, -32), 3);
    add_background_object(create_fdlabwall1_3508(2176, -32), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 224), 3);
    add_background_object(create_fdlabwall1_3508(2112, 224), 3);
    add_background_object(create_fdlabwall2_3509(2240, 224), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 224), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 288), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 352), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 416), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 480), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 544), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 608), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 672), 3);
    add_background_object(create_fdlabfloor1_3514(1984, 704), 3);
    add_background_object(create_fdlabfloor6_3513(1696, 224), 3);
    add_background_object(create_fdlabfloor6_3513(1760, 224), 3);
    add_background_object(create_fdlabfloor6_3513(1824, 224), 3);
    add_background_object(create_fdlabfloor6_3513(1888, 224), 3);
    add_background_object(create_fdlabfloor6_3513(1952, 224), 3);
    add_background_object(create_fdlabfloor6_3513(2016, 224), 3);
    add_background_object(create_fdlabfloor3_3527(1664, 224), 3);
    add_background_object(create_fdlabfloor2_3521(2080, 224), 3);
    add_background_object(create_fdlabwall2_3509(1152, 992), 3);
    add_background_object(create_fdlabwall1_3508(1280, 992), 3);
    add_background_object(create_fdlabfloor4_3510(1408, 992), 3);
    add_background_object(create_fdlabfloor4_3510(1408, 1056), 3);
    add_background_object(create_fdlabwall1_3508(1152, 1120), 3);
    add_background_object(create_fdlabwall2_3509(1280, 1120), 3);
    add_background_object(create_fdlabwall2_3509(1856, 1120), 3);
    add_background_object(create_fdlabfloor1_3514(1536, 1088), 3);
    add_background_object(create_fdlabfloor1_3514(1664, 1088), 3);
    add_background_object(create_fdlabfloor1_3514(1792, 1088), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 1184), 3);
    add_background_object(create_fdlabfloor1_3514(1920, 1088), 3);
    add_background_object(create_fdlabwall1_3508(1984, 1120), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(1696, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(1760, 1120), 3);
    add_background_object(create_fdlabfloor2_3521(1824, 1120), 3);
    add_background_object(create_fdlabwall1_3508(1280, 1248), 3);
    add_background_object(create_fdlabwall2_3509(1408, 1248), 3);
    add_background_object(create_fdlabwall1_3508(1536, 1248), 3);
    add_background_object(create_fdlabwall2_3509(1152, 1248), 3);
    add_background_object(create_fdlabwall1_3508(1856, 1248), 3);
    add_background_object(create_fdlabwall2_3509(1984, 1248), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 1248), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 1248), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 1312), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 1312), 3);
    add_background_object(create_fdlabwall1_3508(1152, 1376), 3);
    add_background_object(create_fdlabwall2_3509(1280, 1376), 3);
    add_background_object(create_fdlabwall1_3508(1408, 1376), 3);
    add_background_object(create_fdlabwall2_3509(1536, 1376), 3);
    add_background_object(create_fdlabwall2_3509(896, 992), 3);
    add_background_object(create_fdlabwall1_3508(1024, 992), 3);
    add_background_object(create_fdlabwall1_3508(896, 1120), 3);
    add_background_object(create_fdlabwall2_3509(1024, 1120), 3);
    add_background_object(create_fdlabwall1_3508(1024, 1248), 3);
    add_background_object(create_fdlabwall1_3508(1152, 1888), 3);
    add_background_object(create_fdlabwall2_3509(1280, 1888), 3);
    add_background_object(create_fdlabwall1_3508(1408, 1888), 3);
    add_background_object(create_fdlabwall2_3509(1536, 1888), 3);
    add_background_object(create_fdlabwall1_3508(1280, 2016), 3);
    add_background_object(create_fdlabwall2_3509(1408, 2016), 3);
    add_background_object(create_fdlabwall1_3508(1536, 2016), 3);
    add_background_object(create_fdlabwall2_3509(1152, 2016), 3);
    add_background_object(create_fdlabwall1_3508(1664, 1888), 3);
    add_background_object(create_fdlabwall2_3509(1792, 1888), 3);
    add_background_object(create_fdlabwall2_3509(1664, 2016), 3);
    add_background_object(create_fdlabwall1_3508(1792, 2016), 3);
    add_background_object(create_fdlabwall1_3508(1920, 1824), 3);
    add_background_object(create_fdlabwall2_3509(2048, 1824), 3);
    add_background_object(create_fdlabwall2_3509(1920, 1952), 3);
    add_background_object(create_fdlabwall1_3508(1920, 1568), 3);
    add_background_object(create_fdlabwall2_3509(2048, 1568), 3);
    add_background_object(create_fdlabwall2_3509(1920, 1696), 3);
    add_background_object(create_fdlabwall1_3508(2048, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 1376), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 1440), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(1888, 1632), 3);
    add_background_object(create_fdlabfloor8_3517(1888, 1568), 3);
    add_background_object(create_fdlabfloor7_3523(1824, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(1856, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(1920, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(1984, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(2048, 1376), 3);
    add_background_object(create_fdlabfloor3_3527(1888, 1536), 3);
    add_background_object(create_fdlabfloor1_3514(1920, 1536), 3);
    add_background_object(create_fdlabfloor1_3514(2048, 1536), 3);
    add_background_object(create_fdlabfloor1_3514(1664, 1728), 3);
    add_background_object(create_fdladder_3448(1832, 1536), 3);
    add_background_object(create_fdladder_3448(1832, 1568), 3);
    add_background_object(create_fdlabfloor6_3513(2112, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2112, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(2176, 1376), 3);
    add_background_object(create_fdlabfloor5_3522(256, 480), 3);
    add_background_object(create_fdlabfloor7_3523(352, 480), 3);
    add_background_object(create_fdlabfloor4_3510(256, 416), 3);
    add_background_object(create_fdlabfloor8_3517(352, 416), 3);
    add_background_object(create_fdlabfloor4_3510(256, 352), 3);
    add_background_object(create_fdlabfloor8_3517(352, 352), 3);
    add_background_object(create_fdlabfloor4_3510(256, 288), 3);
    add_background_object(create_fdlabfloor8_3517(352, 288), 3);
    add_background_object(create_fdlabfloor4_3510(256, 224), 3);
    add_background_object(create_fdlabfloor8_3517(352, 224), 3);
    add_background_object(create_fdlabfloor8_3517(352, 160), 3);
    add_background_object(create_fdlabfloor8_3517(352, 96), 3);
    add_background_object(create_fdlabfloor6_3513(0, 96), 3);
    add_background_object(create_fdlabfloor6_3513(64, 96), 3);
    add_background_object(create_fdlabfloor6_3513(128, 96), 3);
    add_background_object(create_fdlabfloor6_3513(192, 96), 3);
    add_background_object(create_fdlabfloor6_3513(256, 96), 3);
    add_background_object(create_fdlabfloor6_3513(320, 96), 3);
    add_background_object(create_fdlabfloor2_3521(352, 96), 3);
    add_background_object(create_fdlabfloor2_3521(256, 192), 3);
    add_background_object(create_fdlabfloor1_3514(128, 192), 3);
    add_background_object(create_fdlabfloor1_3514(0, 192), 3);
    add_background_object(create_fdlabfloor3_3527(352, 704), 3);
    add_background_object(create_fdlabfloor2_3521(256, 704), 3);
    add_background_object(create_fdlabfloor11_3512(288, 704), 3);
    add_background_object(create_fdladder_3448(1832, 1600), 3);
    add_background_object(create_fdlabwall1_3508(2176, 1824), 3);
    add_background_object(create_fdlabwall2_3509(2176, 1696), 3);
    add_background_object(create_fdlabwall1_3508(2176, 1568), 3);
    add_background_object(create_fdlabfloor1_3514(2176, 1536), 3);
    add_background_object(create_fdlabfloor5_3522(2240, 1376), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 1312), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(2304, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(2240, 1248), 3);
    add_background_object(create_fdlabfloor3_3527(2240, 1248), 3);
    add_background_object(create_fdlabfloor2_3521(2304, 1536), 3);
    add_background_object(create_fdlabwall2_3509(2304, 1824), 3);
    add_background_object(create_fdlabwall1_3508(2304, 1696), 3);
    add_background_object(create_fdlabwall2_3509(2432, 1696), 3);
    add_background_object(create_fdlabwall1_3508(2432, 1824), 3);
    add_background_object(create_fdlabwall2_3509(2944, 1696), 3);
    add_background_object(create_fdlabwall1_3508(2944, 1824), 3);
    add_background_object(create_fdlabfloor4_3510(2304, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(2304, 1632), 3);
    add_background_object(create_fdlabfloor1_3514(2304, 1664), 3);
    add_background_object(create_fdlabfloor1_3514(2432, 1664), 3);
    add_background_object(create_fdlabfloor1_3514(2816, 1664), 3);
    add_background_object(create_fdlabfloor11_3512(2048, 1088), 3);
    add_background_object(create_fdlabfloor2_3521(2112, 1088), 3);
    add_background_object(create_fdlabfloor4_3510(2112, 1184), 3);
    add_background_object(create_fdlabfloor4_3510(2112, 1120), 3);
    add_background_object(create_fdlabfloor13_3525(2624, 1216), 3);
    add_background_object(create_fdlabfloor13_3525(2688, 1280), 3);
    add_background_object(create_fdlabfloor6_3513(2368, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(2432, 1248), 3);
    add_background_object(create_fdlabfloor15_3528(2624, 1248), 3);
    add_background_object(create_fdlabfloor15_3528(2688, 1312), 3);
    add_background_object(create_fdlabfloor15_3528(-224, 1176), 3);
    add_background_object(create_fdlabfloor16_3529(-160, 1176), 3);
    add_background_object(create_fdlabfloor13_3525(2752, 1344), 3);
    add_background_object(create_fdlabfloor15_3528(2752, 1376), 3);
    add_background_object(create_fdlabwall2_3509(2816, 1824), 3);
    add_background_object(create_fdlabwall1_3508(2816, 1696), 3);
    add_background_object(create_fdlabfloor1_3514(2816, 1408), 3);
    add_background_object(create_fdlabfloor6_3513(2816, 1440), 3);
    add_background_object(create_fdlabfloor6_3513(2880, 1440), 3);
    add_background_object(create_fdlabwall2_3509(2944, 1440), 3);
    add_background_object(create_fdlabwall1_3508(2944, 1568), 3);
    add_background_object(create_fdlabfloor1_3514(2944, 1408), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1472), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1600), 3);
    add_background_object(create_fdlabfloor2_3521(2912, 1440), 3);
    add_background_object(create_fdlabfloor2_3521(2560, 1664), 3);
    add_background_object(create_fdlabfloor3_3527(2784, 1664), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 1696), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 1760), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 1824), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(2560, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(2560, 1760), 3);
    add_background_object(create_fdlabfloor3_3527(2592, 1664), 3);
    add_background_object(create_fdlabfloor2_3521(2624, 1664), 3);
    add_background_object(create_fdlabfloor4_3510(2624, 1696), 3);
    add_background_object(create_fdlabfloor8_3517(2592, 1696), 3);
    add_background_object(create_fdlabfloor10_3519(2592, 1760), 3);
    add_background_object(create_fdlabfloor5_3522(2624, 1760), 3);
    add_background_object(create_fdfloorswitch_3530(2592, 1656), 3);
    add_background_object(create_fdlabfloor10_3519(2784, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(2816, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(2880, 1952), 3);
    add_background_object(create_fdlabfloor3_3527(2720, 1856), 3);
    add_background_object(create_fdlabfloor2_3521(2752, 1856), 3);
    add_background_object(create_fdlabfloor4_3510(2752, 1888), 3);
    add_background_object(create_fdlabfloor8_3517(2720, 1888), 3);
    add_background_object(create_fdlabfloor9_3524(2752, 1952), 3);
    add_background_object(create_fdlabfloor7_3523(2720, 1952), 3);
    add_background_object(create_fdfloorswitch_3530(2720, 1848), 3);
    add_background_object(create_fdlabfloor5_3522(2560, 1952), 3);
    add_background_object(create_fdlabwall1_3508(2048, 2208), 3);
    add_background_object(create_fdlabfloor6_3513(2496, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(2432, 1952), 3);
    add_background_object(create_fdlabfloor4_3510(2432, 1952), 3);
    add_background_object(create_fdlabfloor3_3527(2432, 1952), 3);
    add_background_object(create_fdlabfloor1_3514(2432, 2176), 3);
    add_background_object(create_fdlabwall2_3509(2432, 2208), 3);
    add_background_object(create_fdlabwall1_3508(2304, 2208), 3);
    add_background_object(create_fdlabwall2_3509(2176, 2208), 3);
    add_background_object(create_fdlabwall1_3508(2688, 2336), 3);
    add_background_object(create_fdlabwall2_3509(2560, 2336), 3);
    add_background_object(create_fdlabwall1_3508(2432, 2336), 3);
    add_background_object(create_fdlabwall2_3509(2304, 2336), 3);
    add_background_object(create_fdlabwall1_3508(2944, 2336), 3);
    add_background_object(create_fdlabwall2_3509(2816, 2336), 3);
    add_background_object(create_fdlabfloor4_3510(2560, 1824), 3);
    add_background_object(create_fdlabfloor4_3510(2560, 1888), 3);
    add_background_object(create_fdlabwall1_3508(3200, 2336), 3);
    add_background_object(create_fdlabfloor1_3514(3200, 2304), 3);
    add_background_object(create_fdlabwall2_3509(3328, 2336), 3);
    add_background_object(create_fdlabwall1_3508(3456, 2208), 3);
    add_background_object(create_fdlabfloor8_3517(3424, 2208), 3);
    add_background_object(create_fdlabfloor8_3517(3424, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(3328, 2304), 3);
    add_background_object(create_fdlabfloor6_3513(3328, 2176), 3);
    add_background_object(create_fdlabfloor6_3513(3264, 2176), 3);
    add_background_object(create_fdlabfloor10_3519(3232, 2176), 3);
    add_background_object(create_fdlabwall2_3509(2944, 1952), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1952), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 2016), 3);
    add_background_object(create_fdlabfloor2_3521(2912, 1952), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2080), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2016), 3);
    add_background_object(create_fdlabwall2_3509(3072, 1824), 3);
    add_background_object(create_fdlabfloor6_3513(3136, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(3072, 1952), 3);
    add_background_object(create_fdlabfloor3_3527(3072, 1952), 3);
    add_background_object(create_fdlabfloor5_3522(3200, 1952), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1824), 3);
    add_background_object(create_fdlabwall1_3508(3072, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1696), 3);
    add_background_object(create_fdlabfloor3_3527(3232, 2112), 3);
    add_background_object(create_fdlabfloor1_3514(3264, 2112), 3);
    add_background_object(create_fdlabfloor8_3517(3424, 2080), 3);
    add_background_object(create_fdlabfloor3_3527(3424, 2048), 3);
    add_background_object(create_fdlabfloor1_3514(3456, 2048), 3);
    add_background_object(create_fdlabwall2_3509(3456, 2080), 3);
    add_background_object(create_fdlabfloor2_3521(3392, 2112), 3);
    add_background_object(create_fdlabfloor9_3524(3392, 2176), 3);
    add_background_object(create_fdlabfloor8_3517(3424, 2144), 3);
    add_background_object(create_fdlabfloor3_3527(3168, 2304), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2336), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2400), 3);
    add_background_object(create_fdlabfloor8_3517(3168, 2400), 3);
    add_background_object(create_fdlabfloor8_3517(3168, 2336), 3);
    add_background_object(create_fdlabfloor2_3521(3136, 2304), 3);
    add_background_object(create_fdlabfloor3_3527(3104, 2304), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 2336), 3);
    add_background_object(create_fdlabfloor4_3510(3136, 2336), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 2400), 3);
    add_background_object(create_fdlabfloor4_3510(3136, 2400), 3);
    add_background_object(create_fdlabwall2_3509(3200, 2464), 3);
    add_background_object(create_fdlabwall1_3508(3328, 2464), 3);
    add_background_object(create_fdlabwall2_3509(2944, 2464), 3);
    add_background_object(create_fdlabwall1_3508(2816, 2464), 3);
    add_background_object(create_fdlabwall2_3509(2688, 2464), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2464), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2528), 3);
    add_background_object(create_fdlabfloor8_3517(3168, 2528), 3);
    add_background_object(create_fdlabfloor8_3517(3168, 2464), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 2464), 3);
    add_background_object(create_fdlabfloor4_3510(3136, 2464), 3);
    add_background_object(create_fdlabwall1_3508(2560, 2464), 3);
    add_background_object(create_fdlabwall2_3509(2432, 2464), 3);
    add_background_object(create_fdlabwall1_3508(2304, 2464), 3);
    add_background_object(create_fdlabwall1_3508(3456, 2336), 3);
    add_background_object(create_fdlabwall2_3509(3456, 2464), 3);
    add_background_object(create_fdlabwall1_3508(3584, 2080), 3);
    add_background_object(create_fdlabwall2_3509(3584, 2208), 3);
    add_background_object(create_fdlabwall2_3509(3584, 2464), 3);
    add_background_object(create_fdlabwall1_3508(3584, 2336), 3);
    add_background_object(create_fdlabfloor1_3514(3584, 2048), 3);
    add_background_object(create_fdlabfloor1_3514(3520, 1536), 3);
    add_background_object(create_fdlabwall1_3508(3520, 1696), 3);
    add_background_object(create_fdlabwall2_3509(3520, 1824), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1824), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1696), 3);
    add_background_object(create_fdlabfloor3_3527(3488, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1760), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1696), 3);
    add_background_object(create_fdlabfloor2_3521(3648, 1536), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1824), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(3520, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(3584, 1952), 3);
    add_background_object(create_fdlabwall1_3508(3712, 2208), 3);
    add_background_object(create_fdlabfloor1_3514(3712, 2048), 3);
    add_background_object(create_fdlabwall2_3509(3712, 2080), 3);
    add_background_object(create_fdlabwall1_3508(3840, 2080), 3);
    add_background_object(create_fdlabwall1_3508(3840, 1760), 3);
    add_background_object(create_fdlabfloor10_3519(3488, 1952), 3);
    add_background_object(create_fdlabfloor9_3524(3648, 1952), 3);
    add_background_object(create_fdlabwall1_3508(4096, 2144), 3);
    add_background_object(create_fdlabwall2_3509(4096, 2016), 3);
    add_background_object(create_fdlabfloor8_3517(4064, 1920), 3);
    add_background_object(create_fdlabfloor1_3514(3840, 2048), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 1888), 3);
    add_background_object(create_fdlabfloor2_3521(4064, 1888), 3);
    add_background_object(create_fdlabfloor7_3523(3808, 1888), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1760), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1824), 3);
    add_background_object(create_fdlabwall2_3509(3072, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1632), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1568), 3);
    add_background_object(create_fdlabfloor8_3517(4064, 1984), 3);
    add_background_object(create_fdlabfloor1_3514(3840, 1728), 3);
    add_background_object(create_fdlabfloor3_3527(3808, 1728), 3);
    add_background_object(create_fdlabwall2_3509(3520, 1568), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1568), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 1632), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(3648, 1632), 3);
    add_background_object(create_fdlabfloor3_3527(3360, 2048), 3);
    add_background_object(create_fdlabfloor2_3521(3392, 2048), 3);
    add_background_object(create_fdlabfloor9_3524(3392, 2080), 3);
    add_background_object(create_fdlabfloor10_3519(3360, 2080), 3);
    add_background_object(create_fdlabwall1_3508(3072, 1440), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1504), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1440), 3);
    add_background_object(create_fdlabfloor1_3514(3072, 1408), 3);
    add_background_object(create_fdlabfloor2_3521(3200, 1408), 3);
    add_background_object(create_fdlabfloor7_3523(3808, 1600), 3);
    add_background_object(create_fdlabfloor5_3522(3840, 1600), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1440), 3);
    add_background_object(create_fdlabfloor4_3510(3840, 1536), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 1504), 3);
    add_background_object(create_fdlabfloor3_3527(3840, 1504), 3);
    add_background_object(create_fdlabwall1_3508(4224, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(4256, 1504), 3);
    add_background_object(create_fdlabfloor2_3521(4256, 1504), 3);
    add_background_object(create_fdlabfloor7_3523(4256, 1824), 3);
    add_background_object(create_fdlabwall2_3509(4480, 1376), 3);
    add_background_object(create_fdlabwall1_3508(4288, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 1760), 3);
    add_background_object(create_fdlabfloor8_3517(4256, 1760), 3);
    add_background_object(create_fdlabwall2_3509(4416, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 1760), 3);
    add_background_object(create_fdlabwall1_3508(4224, 2016), 3);
    add_background_object(create_fdlabwall2_3509(4352, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(4224, 1984), 3);
    add_background_object(create_fdlabfloor1_3514(4352, 1984), 3);
    add_background_object(create_fdlabwall2_3509(4224, 2144), 3);
    add_background_object(create_fdlabwall1_3508(4352, 2144), 3);
    add_background_object(create_fdlabwall2_3509(3968, 2080), 3);
    add_background_object(create_fdlabwall1_3508(3968, 1760), 3);
    add_background_object(create_fdlabfloor1_3514(3968, 1728), 3);
    add_background_object(create_fdlabfloor2_3521(4096, 1728), 3);
    add_background_object(create_fdlabfloor4_3510(4096, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(4096, 1952), 3);
    add_background_object(create_fdlabfloor4_3510(4096, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(4096, 1824), 3);
    add_background_object(create_fdlabfloor1_3514(4096, 1984), 3);
    add_background_object(create_fdlabfloor8_3517(4256, 1696), 3);
    add_background_object(create_fdlabfloor8_3517(4256, 1568), 3);
    add_background_object(create_fdlabwall2_3509(4288, 1632), 3);
    add_background_object(create_fdlabwall1_3508(4416, 1632), 3);
    add_background_object(create_fdlabwall1_3508(3968, 1376), 3);
    add_background_object(create_fdlabwall2_3509(4096, 1376), 3);
    add_background_object(create_fdlabwall2_3509(3840, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1536), 3);
    add_background_object(create_fdlabwall1_3508(3840, 1248), 3);
    add_background_object(create_fdlabwall2_3509(3840, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(3968, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(3968, 1184), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1248), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1184), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1120), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1312), 3);
    add_background_object(create_fdlabfloor4_3510(3968, 1248), 3);
    add_background_object(create_fdlabfloor4_3510(3968, 1312), 3);
    add_background_object(create_fdlabfloor2_3521(3968, 1024), 3);
    add_background_object(create_fdlabfloor3_3527(3808, 1024), 3);
    add_background_object(create_fdlabfloor1_3514(3840, 1024), 3);
    add_background_object(create_fdlabfloor4_3510(3968, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(3808, 1056), 3);
    add_background_object(create_fdlabfloor1_3514(3968, 1344), 3);
    add_background_object(create_fdlabfloor1_3514(4096, 1344), 3);
    add_background_object(create_fdlabfloor1_3514(4224, 1344), 3);
    add_background_object(create_fdlabfloor1_3514(4480, 1344), 3);
    add_background_object(create_fdlabfloor8_3517(4256, 1632), 3);
    add_background_object(create_fdlabfloor4_3510(4288, 1760), 3);
    add_background_object(create_fdlabfloor3_3527(4288, 1760), 3);
    add_background_object(create_fdlabfloor5_3522(4288, 1824), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(4608, 1760), 3);
    add_background_object(create_fdlabwall2_3509(4544, 1632), 3);
    add_background_object(create_fdlabwall1_3508(4544, 1504), 3);
    add_background_object(create_fdlabwall1_3508(4480, 2016), 3);
    add_background_object(create_fdlabwall2_3509(4608, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(4480, 1984), 3);
    add_background_object(create_fdlabfloor1_3514(4608, 1984), 3);
    add_background_object(create_fdlabwall2_3509(4480, 2144), 3);
    add_background_object(create_fdlabwall1_3508(4608, 2144), 3);
    add_background_object(create_fdlabwall1_3508(4736, 2016), 3);
    add_background_object(create_fdlabwall2_3509(4864, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(4736, 1984), 3);
    add_background_object(create_fdlabwall2_3509(4736, 2144), 3);
    add_background_object(create_fdlabwall1_3508(4864, 2144), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 1632), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 1504), 3);
    add_background_object(create_fdlabfloor9_3524(4672, 1760), 3);
    add_background_object(create_fdlabwall1_3508(4992, 2016), 3);
    add_background_object(create_fdlabwall2_3509(5120, 2016), 3);
    add_background_object(create_fdlabwall1_3508(5248, 1760), 3);
    add_background_object(create_fdlabwall2_3509(5120, 1760), 3);
    add_background_object(create_fdlabwall2_3509(5248, 1888), 3);
    add_background_object(create_fdlabwall1_3508(5120, 1888), 3);
    add_background_object(create_fdlabwall2_3509(5248, 1632), 3);
    add_background_object(create_fdlabwall1_3508(5120, 1632), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1632), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1696), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1760), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1824), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1888), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1952), 3);
    add_background_object(create_fdlabfloor1_3514(4992, 1984), 3);
    add_background_object(create_fdlabwall1_3508(5248, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(4864, 1984), 3);
    add_background_object(create_fdlabwall1_3508(5248, 1504), 3);
    add_background_object(create_fdlabwall2_3509(5120, 1504), 3);
    add_background_object(create_fdlabwall2_3509(5248, 1376), 3);
    add_background_object(create_fdlabwall1_3508(5120, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1440), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 1568), 3);
    add_background_object(create_fdlabfloor2_3521(4672, 1472), 3);
    add_background_object(create_fdlabfloor2_3521(4608, 1344), 3);
    add_background_object(create_fdlabfloor4_3510(4608, 1376), 3);
    add_background_object(create_fdlabfloor11_3512(4608, 1472), 3);
    add_background_object(create_fdlabfloor4_3510(4608, 1440), 3);
    add_background_object(create_fdlabwall2_3509(5120, 1248), 3);
    add_background_object(create_fdlabwall1_3508(5248, 1248), 3);
    add_background_object(create_fdlabwall1_3508(4992, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(5056, 1376), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 1376), 3);
    add_background_object(create_fdlabfloor2_3521(5088, 1376), 3);
    add_background_object(create_fdlabfloor7_3523(4960, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 1312), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 1248), 3);
    add_background_object(create_fdlabwall2_3509(4992, 1120), 3);
    add_background_object(create_fdlabwall2_3509(5248, 1120), 3);
    add_background_object(create_fdlabwall1_3508(5120, 1120), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 1184), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 1120), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 992), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 1120), 3);
    add_background_object(create_fdlabfloor10_3519(4128, 1184), 3);
    add_background_object(create_fdlabwall1_3508(4160, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 1184), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 1184), 3);
    add_background_object(create_fdlabwall2_3509(4160, 928), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 928), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 800), 3);
    add_background_object(create_fdlabfloor8_3517(4128, 864), 3);
    add_background_object(create_fdlabwall1_3508(4160, 800), 3);
    add_background_object(create_fdlabwall2_3509(4288, 800), 3);
    add_background_object(create_fdlabwall2_3509(4160, 672), 3);
    add_background_object(create_fdlabwall1_3508(4288, 672), 3);
    add_background_object(create_fdlabwall2_3509(3904, 672), 3);
    add_background_object(create_fdlabwall1_3508(4032, 672), 3);
    add_background_object(create_fdlabwall2_3509(3648, 672), 3);
    add_background_object(create_fdlabwall1_3508(3776, 672), 3);
    add_background_object(create_fdlabwall2_3509(4288, 544), 3);
    add_background_object(create_fdlabwall2_3509(4032, 544), 3);
    add_background_object(create_fdlabwall1_3508(4160, 544), 3);
    add_background_object(create_fdlabwall1_3508(3904, 544), 3);
    add_background_object(create_fdlabfloor6_3513(3648, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3712, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3776, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 800), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 800), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 800), 3);
    add_background_object(create_fdlabfloor2_3521(4128, 800), 3);
    add_background_object(create_fdlabwall3_3518(4352, 1440), 3);
    add_background_object(create_fdlabfloor8_3517(4448, 1344), 3);
    add_background_object(create_fdlabfloor1_3514(4352, 1392), 3);
    add_background_object(create_fdlabfloor4_3510(4288, 1120), 3);
    add_background_object(create_fdfloorswitch_3530(4576, 1336), 3);
    add_background_object(create_fdladder_3448(4128, 1728), 3);
    add_background_object(create_fdladder_3448(4128, 1760), 3);
    add_background_object(create_fdladder_3448(4128, 1792), 3);
    add_background_object(create_fdladder_3448(4128, 1824), 3);
    add_background_object(create_fdladder_3448(4128, 1856), 3);
    add_background_object(create_fdlabfloor4_3510(4288, 1056), 3);
    add_background_object(create_fdlabfloor4_3510(4288, 992), 3);
    add_background_object(create_fdlabfloor4_3510(4288, 928), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 928), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 928), 3);
    add_background_object(create_fdlabfloor3_3527(4288, 928), 3);
    add_background_object(create_fdlabwall1_3508(4416, 800), 3);
    add_background_object(create_fdlabwall2_3509(4416, 672), 3);
    add_background_object(create_fdlabwall2_3509(4544, 800), 3);
    add_background_object(create_fdlabwall1_3508(4544, 672), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 928), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 928), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 928), 3);
    add_background_object(create_fdlabfloor6_3513(4608, 928), 3);
    add_background_object(create_fdlabfloor2_3521(4608, 1152), 3);
    add_background_object(create_fdlabfloor3_3527(4448, 1152), 3);
    add_background_object(create_fdlabfloor1_3514(4480, 1152), 3);
    add_background_object(create_fdlabfloor9_3524(4608, 1184), 3);
    add_background_object(create_fdlabfloor5_3522(4288, 1184), 3);
    add_background_object(create_fdlabfloor7_3523(4448, 1184), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 1184), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 1184), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1440), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1408), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1376), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1344), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1312), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1280), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1248), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1216), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1184), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1152), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1120), 3);
    add_background_object(create_fdspiralsparktower_3405(4648, 1088), 3);
    add_background_object(create_fdlabfloor3_3527(4448, 1344), 3);
    add_background_object(create_fdlabfloor1_3514(4352, 1408), 3);
    add_background_object(create_fdlabwall2_3509(3328, 608), 3);
    add_background_object(create_fdlabwall1_3508(3456, 608), 3);
    add_background_object(create_fdlabwall2_3509(3456, 480), 3);
    add_background_object(create_fdlabwall1_3508(3328, 480), 3);
    add_background_object(create_fdlabwall2_3509(3328, 864), 3);
    add_background_object(create_fdlabwall1_3508(3456, 864), 3);
    add_background_object(create_fdlabwall2_3509(3456, 736), 3);
    add_background_object(create_fdlabwall1_3508(3328, 736), 3);
    add_background_object(create_fdlabwall2_3509(3456, 992), 3);
    add_background_object(create_fdlabwall1_3508(3328, 992), 3);
    add_background_object(create_fdlabwall2_3509(3072, 864), 3);
    add_background_object(create_fdlabwall1_3508(3200, 864), 3);
    add_background_object(create_fdlabwall2_3509(3200, 992), 3);
    add_background_object(create_fdlabwall1_3508(3072, 992), 3);
    add_background_object(create_fdlabfloor6_3513(3456, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(3520, 1120), 3);
    add_background_object(create_fdlabfloor5_3522(3584, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 1056), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 992), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 928), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 864), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 800), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 736), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 672), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 608), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 544), 3);
    add_background_object(create_fdlabfloor4_3510(3584, 480), 3);
    add_background_object(create_fdlabfloor8_3517(3872, 608), 3);
    add_background_object(create_fdlabfloor8_3517(3648, 736), 3);
    add_background_object(create_fdlabfloor8_3517(3648, 672), 3);
    add_background_object(create_fdlabfloor10_3519(3648, 800), 3);
    add_background_object(create_fdlabfloor6_3513(3328, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(3392, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(3200, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(3264, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(3072, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(3136, 1248), 3);
    add_background_object(create_fdlabwall2_3509(3072, 1120), 3);
    add_background_object(create_fdlabfloor5_3522(3200, 1248), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1184), 3);
    add_background_object(create_fdlabfloor4_3510(3200, 1120), 3);
    add_background_object(create_fdlabfloor3_3527(3200, 1120), 3);
    add_background_object(create_fdlabwall2_3509(3456, 352), 3);
    add_background_object(create_fdlabwall1_3508(3328, 352), 3);
    add_background_object(create_fdlabwall2_3509(3712, 352), 3);
    add_background_object(create_fdlabwall1_3508(3584, 352), 3);
    add_background_object(create_fdlabwall2_3509(3968, 352), 3);
    add_background_object(create_fdlabwall1_3508(3840, 352), 3);
    add_background_object(create_fdlabfloor6_3513(3712, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3776, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3584, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3648, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 480), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 480), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 480), 3);
    add_background_object(create_fdlabfloor3_3527(3648, 608), 3);
    add_background_object(create_fdlabfloor11_3512(3712, 640), 3);
    add_background_object(create_fdlabfloor8_3517(3872, 544), 3);
    add_background_object(create_fdlabfloor3_3527(3872, 512), 3);
    add_background_object(create_fdlabfloor1_3514(3904, 512), 3);
    add_background_object(create_fdlabfloor1_3514(4032, 512), 3);
    add_background_object(create_fdlabwall3_3518(3840, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(2176, 864), 3);
    add_background_object(create_fdcurve3_3531(-256, 1136), 3);
    add_background_object(create_fdcurve1_3532(-160, 1136), 3);
    add_background_object(create_fdcurve4_3533(-256, 1232), 3);
    add_background_object(create_fdcurve2_3534(-160, 1232), 3);
    add_background_object(create_fdcurve4_3533(1984, 608), 3);
    add_background_object(create_fdlabwall1_3508(1920, 2080), 3);
    add_background_object(create_fdlabwall1_3508(3712, 2464), 3);
    add_background_object(create_fdlabwall2_3509(3712, 2336), 3);
    add_background_object(create_fdlabfloor5_3522(4672, 928), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 864), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 800), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 736), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 672), 3);
    add_background_object(create_fdlabwall1_3508(2368, 736), 3);
    add_background_object(create_fdlabwall2_3509(2368, 608), 3);
    add_background_object(create_fdlabwall1_3508(2368, 480), 3);
    add_background_object(create_fdlabwall2_3509(2368, 352), 3);
    add_background_object(create_fdlabwall1_3508(2368, 224), 3);
    add_background_object(create_fdlabfloor6_3513(2368, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2432, 864), 3);
    add_background_object(create_fdlabfloor2_3521(3520, 1536), 3);
    add_background_object(create_fdlabfloor3_3527(3616, 1536), 3);
    add_background_object(create_fdlabfloor5_3522(3616, 1568), 3);
    add_background_object(create_fdlabfloor7_3523(3520, 1568), 3);
    add_background_object(create_fdlabfloor2_3521(3840, 1024), 3);
    add_background_object(create_fdlabfloor3_3527(3936, 1024), 3);
    add_background_object(create_fdlabfloor5_3522(3936, 1056), 3);
    add_background_object(create_fdlabfloor7_3523(3840, 1056), 3);
    add_background_object(create_fdlabfloor3_3527(3584, 480), 3);
    add_background_object(create_fdlabfloor4_3510(0, 640), 3);
    add_background_object(create_fdlabfloor4_3510(0, 576), 3);
    add_background_object(create_fdlabfloor4_3510(0, 512), 3);
    add_background_object(create_fdlabfloor3_3527(0, 480), 3);
    add_background_object(create_fdlabfloor11_3512(704, 704), 3);
    add_background_object(create_fdlabfloor3_3527(672, 704), 3);
    add_background_object(create_fdlabfloor2_3521(576, 704), 3);
    add_background_object(create_fdlabfloor11_3512(608, 704), 3);
    add_background_object(create_fdlabfloor11_3512(512, 704), 3);
    add_background_object(create_fdlabwall2_3509(0, 1120), 3);
    add_background_object(create_fdlabwall2_3509(256, 1120), 3);
    add_background_object(create_fdlabfloor3_3527(3232, 1440), 3);
    add_background_object(create_fdlabfloor2_3521(3328, 1472), 3);
    add_background_object(create_fdlabfloor5_3522(3328, 1536), 3);
    add_background_object(create_fdlabfloor10_3519(3232, 1536), 3);
    add_background_object(create_fdlabfloor6_3513(3264, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(3232, 1472), 3);
    add_background_object(create_fdlabfloor2_3521(3264, 1440), 3);
    add_background_object(create_fdlabfloor3_3527(3296, 1472), 3);
    add_background_object(create_fdlabfloor4_3510(3264, 1472), 3);
    add_background_object(create_fdlabwall1_3508(4992, 992), 3);
    add_background_object(create_fdlabwall2_3509(4992, 864), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 992), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 928), 3);
    add_background_object(create_fdlabfloor8_3517(4960, 864), 3);
    add_background_object(create_fdlabfloor4_3510(5120, 864), 3);
    add_background_object(create_fdlabfloor2_3521(5888, 640), 3);
    add_background_object(create_fdlabfloor3_3527(4960, 832), 3);
    add_background_object(create_fdlabwall2_3509(5120, 992), 3);
    add_background_object(create_fdlabwall1_3508(5248, 992), 3);
    add_background_object(create_fdlabfloor1_3514(5120, 896), 3);
    add_background_object(create_fdlabwall2_3509(5504, 1120), 3);
    add_background_object(create_fdlabwall1_3508(5376, 1120), 3);
    add_background_object(create_fdlabwall2_3509(5376, 992), 3);
    add_background_object(create_fdlabwall1_3508(5504, 992), 3);
    add_background_object(create_fdlabfloor4_3510(5120, 800), 3);
    add_background_object(create_fdlabfloor4_3510(5120, 736), 3);
    add_background_object(create_fdlabfloor4_3510(5120, 672), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 736), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 672), 3);
    add_background_object(create_fdlabfloor3_3527(5088, 640), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 800), 3);
    add_background_object(create_fdlabfloor1_3514(4992, 832), 3);
    add_background_object(create_fdlabfloor1_3514(5120, 640), 3);
    add_background_object(create_fdlabfloor1_3514(5760, 640), 3);
    add_background_object(create_fdlabfloor5_3522(5888, 672), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 672), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 672), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 608), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 608), 3);
    add_background_object(create_fdlabfloor6_3513(5376, 608), 3);
    add_background_object(create_fdlabfloor6_3513(5312, 608), 3);
    add_background_object(create_fdlabfloor6_3513(5184, 672), 3);
    add_background_object(create_fdlabfloor6_3513(5120, 672), 3);
    add_background_object(create_fdlabfloor3_3527(5120, 672), 3);
    add_background_object(create_fdlabfloor15_3528(5696, 608), 3);
    add_background_object(create_fdlabfloor13_3525(5696, 576), 3);
    add_background_object(create_fdlabfloor16_3529(5248, 608), 3);
    add_background_object(create_fdlabfloor14_3526(5248, 576), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 608), 3);
    add_background_object(create_fdlabfloor6_3513(5440, 608), 3);
    add_background_object(create_fdlabwall2_3509(5760, 1120), 3);
    add_background_object(create_fdlabwall1_3508(5632, 1120), 3);
    add_background_object(create_fdlabwall2_3509(5632, 992), 3);
    add_background_object(create_fdlabwall1_3508(5760, 928), 3);
    add_background_object(create_fdlabfloor1_3514(5760, 896), 3);
    add_background_object(create_fdlabfloor13_3525(5248, 896), 3);
    add_background_object(create_fdlabfloor14_3526(5696, 896), 3);
    add_background_object(create_fdlabwall3_3518(5120, 928), 3);
    add_background_object(create_fdlabwall2_3509(5888, 928), 3);
    add_background_object(create_fdlabwall1_3508(5888, 1120), 3);
    add_background_object(create_fdlabfloor1_3514(5888, 896), 3);
    add_background_object(create_fdlabwall2_3509(6016, 1120), 3);
    add_background_object(create_fdlabwall1_3508(6016, 928), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 672), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 736), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 800), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 864), 3);
    add_background_object(create_fdlabfloor1_3514(6016, 896), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 416), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 480), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 544), 3);
    add_background_object(create_fdlabfloor8_3517(6112, 608), 3);
    add_background_object(create_fdlabfloor11_3512(5632, 576), 3);
    add_background_object(create_fdlabfloor11_3512(5440, 576), 3);
    add_background_object(create_fdlabfloor2_3521(5504, 576), 3);
    add_background_object(create_fdlabfloor3_3527(5408, 576), 3);
    add_background_object(create_fdlabfloor2_3521(5312, 576), 3);
    add_background_object(create_fdlabfloor3_3527(5600, 576), 3);
    add_background_object(create_fdlabfloor11_3512(5344, 576), 3);
    add_background_object(create_fdlabfloor11_3512(5536, 576), 3);
    add_background_object(create_fdlabfloor3_3527(5536, 960), 3);
    add_background_object(create_fdlabfloor2_3521(5440, 960), 3);
    add_background_object(create_fdlabfloor11_3512(5472, 960), 3);
    add_background_object(create_fdlabwall1_3508(4416, 544), 3);
    add_background_object(create_fdlabwall2_3509(4416, 416), 3);
    add_background_object(create_fdlabwall2_3509(4544, 544), 3);
    add_background_object(create_fdlabwall1_3508(4544, 416), 3);
    add_background_object(create_fdlabfloor4_3510(4800, 480), 3);
    add_background_object(create_fdlabfloor4_3510(4800, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4672, 672), 3);
    add_background_object(create_fdlabfloor6_3513(4736, 672), 3);
    add_background_object(create_fdlabfloor3_3527(4672, 672), 3);
    add_background_object(create_fdcurve2_3534(5152, 800), 3);
    add_background_object(create_fdcurve1_3532(5152, 704), 3);
    add_background_object(create_fdcurve4_3533(6016, 800), 3);
    add_background_object(create_fdlabwall2_3509(6016, 288), 3);
    add_background_object(create_fdlabwall1_3508(5888, 288), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 416), 3);
    add_background_object(create_fdlabfloor6_3513(6080, 416), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 416), 3);
    add_background_object(create_fdlabfloor2_3521(6112, 416), 3);
    add_background_object(create_fdcurve3_3531(6016, 448), 3);
    add_background_object(create_fdlabfloor2_3521(5056, 640), 3);
    add_background_object(create_fdlabfloor9_3524(5056, 672), 3);
    add_background_object(create_fdlabfloor1_3514(4928, 640), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 672), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 672), 3);
    add_background_object(create_fdlabfloor9_3524(4800, 672), 3);
    add_background_object(create_fdlabfloor11_3512(4832, 640), 3);
    add_background_object(create_fdlabfloor3_3527(4896, 640), 3);
    add_background_object(create_fdlabfloor6_3513(4832, 672), 3);
    add_background_object(create_fdlabfloor10_3519(4896, 672), 3);
    add_background_object(create_fdlabwall2_3509(4608, 288), 3);
    add_background_object(create_fdlabwall1_3508(4608, 160), 3);
    add_background_object(create_fdlabwall1_3508(4736, 288), 3);
    add_background_object(create_fdlabwall2_3509(4736, 160), 3);
    add_background_object(create_fdlabwall2_3509(4864, 288), 3);
    add_background_object(create_fdlabwall1_3508(4864, 160), 3);
    add_background_object(create_fdlabwall1_3508(4992, 288), 3);
    add_background_object(create_fdlabwall2_3509(4992, 160), 3);
    add_background_object(create_fdlabwall2_3509(5120, 288), 3);
    add_background_object(create_fdlabwall1_3508(5120, 160), 3);
    add_background_object(create_fdlabwall1_3508(5248, 288), 3);
    add_background_object(create_fdlabwall2_3509(5248, 160), 3);
    add_background_object(create_fdlabwall2_3509(5376, 288), 3);
    add_background_object(create_fdlabwall1_3508(5376, 160), 3);
    add_background_object(create_fdlabwall1_3508(5504, 288), 3);
    add_background_object(create_fdlabwall2_3509(5504, 160), 3);
    add_background_object(create_fdlabwall2_3509(5632, 288), 3);
    add_background_object(create_fdlabwall1_3508(5632, 160), 3);
    add_background_object(create_fdlabwall1_3508(5760, 288), 3);
    add_background_object(create_fdlabwall2_3509(5760, 160), 3);
    add_background_object(create_fdlabwall1_3508(5888, 160), 3);
    add_background_object(create_fdlabwall2_3509(6016, 160), 3);
    add_background_object(create_fdlabwall1_3508(4480, 288), 3);
    add_background_object(create_fdlabwall2_3509(4480, 160), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5440, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5376, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5312, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5248, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5120, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5056, 416), 3);
    add_background_object(create_fdlabfloor6_3513(5184, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4864, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4800, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 416), 3);
    add_background_object(create_fdlabfloor3_3527(4800, 416), 3);
    add_background_object(create_fdlabfloor2_3521(4800, 640), 3);
    add_background_object(create_fdlabfloor1_3514(4672, 640), 3);
    add_background_object(create_fdlabfloor5_3522(4800, 544), 3);
    add_background_object(create_fdlabfloor6_3513(4736, 416), 3);
    add_background_object(create_fdlabfloor6_3513(4672, 416), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 576), 3);
    add_background_object(create_fdlabfloor3_3527(4672, 416), 3);
    add_background_object(create_fdlabfloor3_3527(4704, 864), 3);
    add_background_object(create_fdlabfloor2_3521(4736, 864), 3);
    add_background_object(create_fdlabfloor5_3522(4736, 896), 3);
    add_background_object(create_fdlabfloor10_3519(4704, 896), 3);
    add_background_object(create_fdlabfloor11_3512(4704, 832), 3);
    add_background_object(create_fdlabfloor8_3517(4768, 416), 3);
    add_background_object(create_fdlabfloor8_3517(4768, 480), 3);
    add_background_object(create_fdlabfloor2_3521(4768, 416), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 512), 3);
    add_background_object(create_fdlabfloor4_3510(4672, 448), 3);
    add_background_object(create_fdlabfloor7_3523(4768, 544), 3);
    add_background_object(create_fdlabfloor4_3510(4352, 1344), 3);
    add_background_object(create_fdlabfloor2_3521(4352, 1344), 3);
    add_background_object(create_fdlabwall2_3509(2944, 992), 3);
    add_background_object(create_fdlabwall1_3508(2944, 1120), 3);
    add_background_object(create_fdlabwall1_3508(2944, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2944, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(3008, 1248), 3);
    add_background_object(create_fdlabfloor7_3523(2912, 1248), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1184), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(2784, 1088), 3);
    add_background_object(create_fdlabfloor2_3521(2880, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(2720, 1088), 3);
    add_background_object(create_fdlabfloor3_3527(2688, 1056), 3);
    add_background_object(create_fdlabfloor1_3514(2720, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 992), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 928), 3);
    add_background_object(create_fdlabwall2_3509(2496, 736), 3);
    add_background_object(create_fdlabwall1_3508(2496, 608), 3);
    add_background_object(create_fdlabwall2_3509(2496, 480), 3);
    add_background_object(create_fdlabwall1_3508(2624, 736), 3);
    add_background_object(create_fdlabwall2_3509(2624, 608), 3);
    add_background_object(create_fdlabwall1_3508(2624, 480), 3);
    add_background_object(create_fdlabwall2_3509(2752, 736), 3);
    add_background_object(create_fdlabwall1_3508(2752, 608), 3);
    add_background_object(create_fdlabwall2_3509(2752, 480), 3);
    add_background_object(create_fdlabwall1_3508(2880, 736), 3);
    add_background_object(create_fdlabwall2_3509(2880, 608), 3);
    add_background_object(create_fdlabwall1_3508(2880, 480), 3);
    add_background_object(create_fdlabwall2_3509(3008, 736), 3);
    add_background_object(create_fdlabwall1_3508(3008, 608), 3);
    add_background_object(create_fdlabwall2_3509(3008, 480), 3);
    add_background_object(create_fdlabwall1_3508(3136, 736), 3);
    add_background_object(create_fdlabwall2_3509(3136, 608), 3);
    add_background_object(create_fdlabwall1_3508(3136, 480), 3);
    add_background_object(create_fdlabfloor6_3513(2496, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2560, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2624, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2688, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2752, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2816, 864), 3);
    add_background_object(create_fdlabfloor6_3513(2880, 864), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 864), 3);
    add_background_object(create_fdlabfloor2_3521(2912, 864), 3);
    add_background_object(create_fdlabwall1_3508(768, 992), 3);
    add_background_object(create_fdlabwall6_3535(640, 992), 3);
    add_background_object(create_fdlabfloor4_3510(384, 1056), 3);
    add_background_object(create_fdlabfloor4_3510(384, 992), 3);
    add_background_object(create_fdlabfloor4_3510(384, 928), 3);
    add_background_object(create_fdlabfloor6_3513(384, 864), 3);
    add_background_object(create_fdlabfloor6_3513(448, 864), 3);
    add_background_object(create_fdlabfloor6_3513(512, 864), 3);
    add_background_object(create_fdlabwall1_3508(256, 992), 3);
    add_background_object(create_fdlabwall1_3508(128, 1120), 3);
    add_background_object(create_fdlabwall1_3508(256, 1248), 3);
    add_background_object(create_fdlabfloor3_3527(384, 864), 3);
    add_background_object(create_fdlabwall6_3535(768, 1120), 3);
    add_background_object(create_fdlabwall6_3535(896, 1248), 3);
    add_background_object(create_fdlabwall6_3535(1024, 1376), 3);
    add_background_object(create_fdlabwall2_3509(384, 1248), 3);
    add_background_object(create_fdlabfloor4_3510(384, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(384, 1184), 3);
    add_background_object(create_fdlabwall1_3508(512, 1248), 3);
    add_background_object(create_fdlabwall4_3516(640, 1248), 3);
    add_background_object(create_fdlabwall2_3509(512, 1376), 3);
    add_background_object(create_fdlabwall1_3508(384, 1376), 3);
    add_background_object(create_fdlabwall2_3509(256, 1376), 3);
    add_background_object(create_fdlabwall2_3509(128, 1248), 3);
    add_background_object(create_fdlabwall1_3508(128, 1376), 3);
    add_background_object(create_fdlabfloor7_3523(608, 992), 3);
    add_background_object(create_fdlabfloor15_3528(640, 992), 3);
    add_background_object(create_fdlabfloor15_3528(704, 1056), 3);
    add_background_object(create_fdlabfloor15_3528(768, 1120), 3);
    add_background_object(create_fdlabfloor15_3528(832, 1184), 3);
    add_background_object(create_fdlabfloor15_3528(896, 1248), 3);
    add_background_object(create_fdlabfloor15_3528(960, 1312), 3);
    add_background_object(create_fdlabfloor13_3525(640, 1216), 3);
    add_background_object(create_fdlabfloor13_3525(704, 1280), 3);
    add_background_object(create_fdlabwall1_3508(640, 1376), 3);
    add_background_object(create_fdlabwall2_3509(768, 1504), 3);
    add_background_object(create_fdlabwall1_3508(640, 1504), 3);
    add_background_object(create_fdlabwall2_3509(512, 1504), 3);
    add_background_object(create_fdlabwall1_3508(384, 1504), 3);
    add_background_object(create_fdlabwall4_3516(768, 1376), 3);
    add_background_object(create_fdlabwall1_3508(256, 1504), 3);
    add_background_object(create_fdlabfloor13_3525(768, 1344), 3);
    add_background_object(create_fdlabfloor13_3525(832, 1408), 3);
    add_background_object(create_fdlabfloor15_3528(1024, 1376), 3);
    add_background_object(create_fdlabfloor15_3528(1088, 1440), 3);
    add_background_object(create_fdlabfloor6_3513(1152, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(1280, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(1472, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(1600, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(1536, 1504), 3);
    add_background_object(create_fdlabfloor2_3521(1600, 1504), 3);
    add_background_object(create_fdlabfloor1_3514(1536, 1728), 3);
    add_background_object(create_fdlabfloor1_3514(1408, 1728), 3);
    add_background_object(create_fdlabfloor8_3517(1888, 1696), 3);
    add_background_object(create_fdlabfloor11_3512(1824, 1728), 3);
    add_background_object(create_fdlabfloor3_3527(1792, 1728), 3);
    add_background_object(create_fdlabfloor2_3521(1696, 1728), 3);
    add_background_object(create_fdlabwall2_3509(768, 1632), 3);
    add_background_object(create_fdlabwall4_3516(896, 1504), 3);
    add_background_object(create_fdlabfloor13_3525(896, 1472), 3);
    add_background_object(create_fdlabfloor13_3525(960, 1536), 3);
    add_background_object(create_fdlabwall2_3509(1024, 1760), 3);
    add_background_object(create_fdlabwall4_3516(1024, 1632), 3);
    add_background_object(create_fdlabfloor13_3525(1024, 1600), 3);
    add_background_object(create_fdlabfloor13_3525(1088, 1664), 3);
    add_background_object(create_fdlabwall1_3508(896, 1632), 3);
    add_background_object(create_fdlabwall1_3508(896, 1888), 3);
    add_background_object(create_fdlabwall2_3509(1024, 1888), 3);
    add_background_object(create_fdlabwall1_3508(1024, 2016), 3);
    add_background_object(create_fdlabwall2_3509(896, 2016), 3);
    add_background_object(create_fdlabwall2_3509(768, 1888), 3);
    add_background_object(create_fdlabwall1_3508(768, 1760), 3);
    add_background_object(create_fdlabwall2_3509(640, 1760), 3);
    add_background_object(create_fdlabwall2_3509(896, 1760), 3);
    add_background_object(create_fdlabwall1_3508(640, 1632), 3);
    add_background_object(create_fdlabwall2_3509(512, 1632), 3);
    add_background_object(create_fdlabfloor9_3524(1664, 1568), 3);
    add_background_object(create_fdlabfloor6_3513(1600, 1568), 3);
    add_background_object(create_fdlabfloor10_3519(1600, 1568), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 1888), 3);
    add_background_object(create_fdlabfloor1_3514(3968, 2048), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 2208), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 2208), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 2208), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 2208), 3);
    add_background_object(create_fdlabfloor4_3510(3840, 2336), 3);
    add_background_object(create_fdlabfloor4_3510(3840, 2400), 3);
    add_background_object(create_fdlabfloor4_3510(3840, 2272), 3);
    add_background_object(create_fdlabfloor4_3510(3840, 2208), 3);
    add_background_object(create_fdlabfloor3_3527(3840, 2208), 3);
    add_background_object(create_fdlabfloor8_3517(4064, 2208), 3);
    add_background_object(create_fdlabfloor2_3521(4064, 2208), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 2272), 3);
    add_background_object(create_fdlabfloor7_3523(4064, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(3840, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(4224, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(4096, 2432), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(3968, 2432), 3);
    add_background_object(create_fdlabfloor2_3521(3968, 2432), 3);
    add_background_object(create_fdlabfloor3_3527(4064, 2432), 3);
    add_background_object(create_fdlabfloor7_3523(3968, 2464), 3);
    add_background_object(create_fdlabfloor11_3512(4000, 2464), 3);
    add_background_object(create_fdlabfloor5_3522(4064, 2464), 3);
    add_background_object(create_fdlabfloor11_3512(3872, 1056), 3);
    add_background_object(create_fdlabfloor11_3512(3552, 1568), 3);
    add_background_object(create_fdlabfloor7_3523(5312, 992), 3);
    add_background_object(create_fdlabfloor11_3512(5344, 992), 3);
    add_background_object(create_fdlabfloor5_3522(5408, 992), 3);
    add_background_object(create_fdlabfloor7_3523(5440, 992), 3);
    add_background_object(create_fdlabfloor11_3512(5472, 992), 3);
    add_background_object(create_fdlabfloor5_3522(5536, 992), 3);
    add_background_object(create_fdlabfloor7_3523(5568, 992), 3);
    add_background_object(create_fdlabfloor11_3512(5600, 992), 3);
    add_background_object(create_fdlabfloor5_3522(5664, 992), 3);
    add_background_object(create_fdlabfloor1_3514(4480, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(4352, 2432), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 2272), 3);
    add_background_object(create_fdlabfloor3_3527(1504, 1088), 3);
    add_background_object(create_fdlabfloor11_3512(1440, 1088), 3);
    add_background_object(create_fdlabfloor1_3514(1280, 1728), 3);
    add_background_object(create_fdlabfloor1_3514(384, 1216), 3);
    add_background_object(create_fdlabfloor4_3510(384, 896), 3);
    add_background_object(create_fdlabfloor3_3527(608, 960), 3);
    add_background_object(create_fdlabfloor1_3514(640, 960), 3);
    add_background_object(create_fdlabfloor6_3513(576, 864), 3);
    add_background_object(create_fdlabfloor6_3513(640, 864), 3);
    add_background_object(create_fdlabfloor6_3513(704, 864), 3);
    add_background_object(create_fdlabfloor1_3514(768, 960), 3);
    add_background_object(create_fdlabfloor6_3513(768, 864), 3);
    add_background_object(create_fdlabfloor6_3513(832, 864), 3);
    add_background_object(create_fdlabfloor1_3514(896, 960), 3);
    add_background_object(create_fdlabfloor6_3513(896, 864), 3);
    add_background_object(create_fdlabfloor6_3513(960, 864), 3);
    add_background_object(create_fdlabfloor1_3514(1024, 960), 3);
    add_background_object(create_fdlabfloor6_3513(1024, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1088, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1216, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1280, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1344, 864), 3);
    add_background_object(create_fdlabfloor6_3513(1152, 864), 3);
    add_background_object(create_fdlabfloor1_3514(1152, 960), 3);
    add_background_object(create_fdlabfloor1_3514(1280, 960), 3);
    add_background_object(create_fdlabfloor2_3521(1408, 960), 3);
    add_background_object(create_fdfloorswitch_3530(2080, 1080), 3);
    add_background_object(create_fdlabfloor1_3514(2240, 1216), 3);
    add_background_object(create_fdlabfloor1_3514(2112, 1216), 3);
    add_background_object(create_fdlabfloor4_3510(2304, 992), 3);
    add_background_object(create_fdlabfloor8_3517(2272, 992), 3);
    add_background_object(create_fdlabfloor4_3510(2304, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(2272, 1056), 3);
    add_background_object(create_fdlabfloor10_3519(2272, 1120), 3);
    add_background_object(create_fdlabfloor11_3512(2560, 1216), 3);
    add_background_object(create_fdlabfloor4_3510(2528, 1088), 3);
    add_background_object(create_fdlabfloor8_3517(2432, 1088), 3);
    add_background_object(create_fdlabfloor4_3510(2528, 1152), 3);
    add_background_object(create_fdlabfloor8_3517(2432, 1152), 3);
    add_background_object(create_fdlabfloor3_3527(2432, 1056), 3);
    add_background_object(create_fdlabfloor10_3519(2688, 1088), 3);
    add_background_object(create_fdfloorswitch_3530(2848, 1048), 3);
    add_background_object(create_fdlabfloor5_3522(2304, 1120), 3);
    add_background_object(create_fdlabfloor2_3521(2528, 1056), 3);
    add_background_object(create_fdlabfloor11_3512(2464, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(2496, 1248), 3);
    add_background_object(create_fdlabfloor6_3513(2560, 1248), 3);
    add_background_object(create_fdlabfloor9_3524(2880, 1088), 3);
    add_background_object(create_fdlabfloor1_3514(3776, 640), 3);
    add_background_object(create_fdlabfloor8_3517(3648, 640), 3);
    add_background_object(create_fdlabfloor2_3521(3680, 608), 3);
    add_background_object(create_fdlabfloor9_3524(3680, 640), 3);
    add_background_object(create_fdlabwall1_3508(2240, 864), 3);
    add_background_object(create_fdlabfloor2_3521(2272, 992), 3);
    add_background_object(create_fdlabfloor3_3527(2304, 992), 3);
    add_background_object(create_fdlabfloor5_3522(2368, 992), 3);
    add_background_object(create_fdlabfloor7_3523(2208, 992), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 928), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 864), 3);
    add_background_object(create_fdlabfloor8_3517(2208, 928), 3);
    add_background_object(create_fdlabfloor8_3517(2208, 864), 3);
    add_background_object(create_fdlabfloor2_3521(2208, 864), 3);
    add_background_object(create_fdlabfloor3_3527(2368, 864), 3);
    add_background_object(create_fdlabfloor1_3514(2432, 1216), 3);
    add_background_object(create_fdlabfloor3_3527(2432, 1216), 3);
    add_background_object(create_fdlabfloor2_3521(2368, 1216), 3);
    add_background_object(create_fdlabfloor4_3510(1280, 1504), 3);
    add_background_object(create_fdlabfloor3_3527(1280, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(1216, 1504), 3);
    add_background_object(create_fdlabfloor2_3521(1216, 1504), 3);
    add_background_object(create_fdlabfloor9_3524(1280, 1568), 3);
    add_background_object(create_fdlabfloor6_3513(1216, 1568), 3);
    add_background_object(create_fdlabfloor10_3519(1216, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(1408, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(1408, 1184), 3);
    add_background_object(create_fdlabfloor1_3514(1408, 1216), 3);
    add_background_object(create_fdlabfloor9_3524(1472, 1120), 3);
    add_background_object(create_fdlabfloor10_3519(1440, 1120), 3);
    add_background_object(create_fdlabwall2_3509(1408, 1760), 3);
    add_background_object(create_fdlabwall1_3508(1536, 1760), 3);
    add_background_object(create_fdlabwall2_3509(1664, 1760), 3);
    add_background_object(create_fdlabwall1_3508(1792, 1760), 3);
    add_background_object(create_fdlabwall2_3509(1152, 1760), 3);
    add_background_object(create_fdlabwall1_3508(1280, 1760), 3);
    add_background_object(create_fdlabfloor1_3514(1152, 1728), 3);
    add_background_object(create_fdlabfloor6_3513(1344, 1504), 3);
    add_background_object(create_fdlabfloor6_3513(1408, 1504), 3);
    add_background_object(create_fdlabfloor2_3521(1408, 1728), 3);
    add_background_object(create_fdlabfloor3_3527(1504, 1728), 3);
    add_background_object(create_fdlabfloor5_3522(1504, 1760), 3);
    add_background_object(create_fdlabfloor7_3523(1408, 1760), 3);
    add_background_object(create_fdlabfloor11_3512(1440, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(0, 224), 3);
    add_background_object(create_fdlabfloor6_3513(64, 224), 3);
    add_background_object(create_fdlabfloor6_3513(128, 224), 3);
    add_background_object(create_fdlabfloor6_3513(192, 224), 3);
    add_background_object(create_fdlabfloor8_3517(224, 256), 3);
    add_background_object(create_fdlabfloor2_3521(224, 224), 3);
    add_background_object(create_fdlabfloor1_3514(128, 320), 3);
    add_background_object(create_fdlabfloor1_3514(0, 320), 3);
    add_background_object(create_fdlabfloor1_3514(128, 64), 3);
    add_background_object(create_fdlabfloor1_3514(0, 64), 3);
    add_background_object(create_fdlabfloor8_3517(352, 0), 3);
    add_background_object(create_fdlabfloor1_3514(256, 64), 3);
    add_background_object(create_fdlabfloor1_3514(384, 64), 3);
    add_background_object(create_fdlabfloor1_3514(512, 64), 3);
    add_background_object(create_fdlabfloor4_3510(384, 0), 3);
    add_background_object(create_fdlabfloor1_3514(544, 320), 3);
    add_background_object(create_fdlabfloor6_3513(384, 96), 3);
    add_background_object(create_fdlabfloor6_3513(448, 96), 3);
    add_background_object(create_fdlabfloor6_3513(512, 96), 3);
    add_background_object(create_fdlabfloor6_3513(704, 96), 3);
    add_background_object(create_fdlabfloor4_3510(384, 256), 3);
    add_background_object(create_fdlabfloor4_3510(384, 192), 3);
    add_background_object(create_fdlabfloor4_3510(384, 128), 3);
    add_background_object(create_fdlabfloor3_3527(384, 96), 3);
    add_background_object(create_fdlabfloor8_3517(736, 256), 3);
    add_background_object(create_fdlabfloor8_3517(736, 192), 3);
    add_background_object(create_fdlabfloor8_3517(736, 128), 3);
    add_background_object(create_fdlabwall1_3508(640, -32), 3);
    add_background_object(create_fdlabwall1_3508(896, -32), 3);
    add_background_object(create_fdlabwall2_3509(1024, -32), 3);
    add_background_object(create_fdlabwall1_3508(1152, -32), 3);
    add_background_object(create_fdlabfloor8_3517(608, 0), 3);
    add_background_object(create_fdlabfloor2_3521(736, 96), 3);
    add_background_object(create_fdlabfloor6_3513(576, 96), 3);
    add_background_object(create_fdlabfloor6_3513(640, 96), 3);
    add_background_object(create_fdlabfloor9_3524(736, 320), 3);
    add_background_object(create_fdlabfloor9_3524(608, 64), 3);
    add_background_object(create_fdlabfloor10_3519(384, 320), 3);
    add_background_object(create_fdlabfloor2_3521(416, 320), 3);
    add_background_object(create_fdlabfloor3_3527(512, 320), 3);
    add_background_object(create_fdlabfloor11_3512(672, 320), 3);
    add_background_object(create_fdlabfloor11_3512(448, 320), 3);
    add_background_object(create_fdlabfloor1_3514(768, 64), 3);
    add_background_object(create_fdlabfloor8_3517(864, 0), 3);
    add_background_object(create_fdlabfloor4_3510(768, 0), 3);
    add_background_object(create_fdlabfloor1_3514(1536, 1216), 3);
    add_background_object(create_fdlabfloor2_3521(1664, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(1568, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(1632, 1120), 3);
    add_background_object(create_fdlabfloor6_3513(1504, 1120), 3);
    add_background_object(create_fdlabfloor10_3519(1504, 1120), 3);
    add_background_object(create_fdlabfloor1_3514(2560, 2176), 3);
    add_background_object(create_fdlabwall2_3509(2688, 2208), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 2528), 3);
    add_background_object(create_fdlabfloor4_3510(3136, 2528), 3);
    add_background_object(create_fdlabwall1_3508(2816, 2208), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 2080), 3);
    add_background_object(create_fdlabwall1_3508(2944, 2080), 3);
    add_background_object(create_fdlabwall2_3509(2944, 2208), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2208), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2144), 3);
    add_background_object(create_fdlabfloor4_3510(3072, 2272), 3);
    add_background_object(create_fdlabfloor9_3524(2432, 2016), 3);
    add_background_object(create_fdlabwall3_3518(2304, 1952), 3);
    add_background_object(create_fdlabwall1_3508(2176, 2336), 3);
    add_background_object(create_fdlabwall2_3509(2048, 2336), 3);
    add_background_object(create_fdlabwall2_3509(2176, 2464), 3);
    add_background_object(create_fdlabwall1_3508(2048, 2464), 3);
    add_background_object(create_fdlabwall2_3509(1920, 2208), 3);
    add_background_object(create_fdlabwall1_3508(1920, 2336), 3);
    add_background_object(create_fdlabfloor6_3513(2368, 2016), 3);
    add_background_object(create_fdlabfloor6_3513(2304, 2016), 3);
    add_background_object(create_fdlabfloor4_3510(2048, 2048), 3);
    add_background_object(create_fdlabfloor6_3513(2112, 2016), 3);
    add_background_object(create_fdlabfloor6_3513(2048, 2016), 3);
    add_background_object(create_fdlabfloor4_3510(2048, 2112), 3);
    add_background_object(create_fdlabfloor1_3514(2304, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(2048, 2176), 3);
    add_background_object(create_fdlabfloor3_3527(2048, 2016), 3);
    add_background_object(create_fdlabwall3_3518(2176, 1952), 3);
    add_background_object(create_fdlabwall3_3518(2048, 1952), 3);
    add_background_object(create_fdlabfloor6_3513(2240, 2016), 3);
    add_background_object(create_fdlabfloor6_3513(2176, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(2176, 2176), 3);
    add_background_object(create_fdlabwall2_3509(1792, 2144), 3);
    add_background_object(create_fdlabwall1_3508(1792, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(2112, 1344), 3);
    add_background_object(create_fdlabfloor8_3517(2208, 1280), 3);
    add_background_object(create_fdlabfloor4_3510(2112, 1280), 3);
    add_background_object(create_fdlabfloor6_3513(2144, 1248), 3);
    add_background_object(create_fdlabfloor3_3527(2112, 1248), 3);
    add_background_object(create_fdlabfloor2_3521(2208, 1248), 3);
    add_background_object(create_fdlabfloor8_3517(2912, 2144), 3);
    add_background_object(create_fdlabfloor1_3514(4736, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(4608, 2432), 3);
    add_background_object(create_fdlabfloor6_3513(4608, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4672, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4736, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4800, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(4992, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(4864, 2432), 3);
    add_background_object(create_fdlabfloor6_3513(4864, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5056, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5120, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5184, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5248, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5312, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(5120, 2432), 3);
    add_background_object(create_fdlabfloor6_3513(5376, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5440, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 2272), 3);
    add_background_object(create_fdlabfloor1_3514(5504, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(5376, 2432), 3);
    add_background_object(create_fdlabwall2_3509(5376, 2016), 3);
    add_background_object(create_fdlabwall1_3508(5504, 2016), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5056, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5120, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5184, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5248, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5312, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5376, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5440, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 2144), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 2144), 3);
    add_background_object(create_fdlabfloor4_3510(4992, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(4992, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(5120, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(5248, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(5376, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(5504, 2240), 3);
    add_background_object(create_fdlabfloor2_3521(5344, 2400), 3);
    add_background_object(create_fdlabfloor3_3527(5248, 2400), 3);
    add_background_object(create_fdlabfloor11_3512(5280, 2400), 3);
    add_background_object(create_fdlabfloor9_3524(5248, 2432), 3);
    add_background_object(create_fdlabfloor10_3519(5344, 2432), 3);
    add_background_object(create_fdlabwall2_3509(5632, 2432), 3);
    add_background_object(create_fdlabwall1_3508(5760, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(5760, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(5632, 2432), 3);
    add_background_object(create_fdlabfloor1_3514(5312, 960), 3);
    add_background_object(create_fdlabfloor1_3514(5568, 960), 3);
    add_background_object(create_fdlabwall2_3509(5888, 2432), 3);
    add_background_object(create_fdlabwall1_3508(5888, 2304), 3);
    add_background_object(create_fdlabfloor1_3514(2688, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(2816, 2176), 3);
    add_background_object(create_fdlabfloor5_3522(5632, 2272), 3);
    add_background_object(create_fdlabfloor2_3521(5632, 2240), 3);
    add_background_object(create_fdlabwall2_3509(5376, 1760), 3);
    add_background_object(create_fdlabwall1_3508(5376, 1888), 3);
    add_background_object(create_fdlabwall1_3508(5376, 1632), 3);
    add_background_object(create_fdlabwall2_3509(5376, 1504), 3);
    add_background_object(create_fdlabwall1_3508(5376, 1376), 3);
    add_background_object(create_fdlabwall2_3509(5376, 1248), 3);
    add_background_object(create_fdlabwall2_3509(5504, 1888), 3);
    add_background_object(create_fdlabwall1_3508(5504, 1504), 3);
    add_background_object(create_fdlabwall2_3509(5504, 1376), 3);
    add_background_object(create_fdlabwall1_3508(5504, 1248), 3);
    add_background_object(create_fdlabwall2_3509(128, 992), 3);
    add_background_object(create_fdlabwall1_3508(0, 992), 3);
    add_background_object(create_fdlabfloor8_3517(5856, 2304), 3);
    add_background_object(create_fdlabfloor8_3517(5856, 2368), 3);
    add_background_object(create_fdlabwall1_3508(6016, 2432), 3);
    add_background_object(create_fdlabwall2_3509(6016, 2304), 3);
    add_background_object(create_fdlabwall1_3508(6016, 2176), 3);
    add_background_object(create_fdlabwall2_3509(6016, 2048), 3);
    add_background_object(create_fdlabfloor3_3527(5856, 2272), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 2048), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 2112), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 2176), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 2240), 3);
    add_background_object(create_fdlabfloor1_3514(5888, 2272), 3);
    add_background_object(create_fdlabfloor5_3522(5632, 2144), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 2080), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 2016), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1952), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1888), 3);
    add_background_object(create_fdlabwall1_3508(6016, 1920), 3);
    add_background_object(create_fdlabwall2_3509(6016, 1792), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1792), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1856), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1920), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1984), 3);
    add_background_object(create_fdlabwall1_3508(5888, 1664), 3);
    add_background_object(create_fdlabwall2_3509(6016, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1600), 3);
    add_background_object(create_fdlabfloor8_3517(5856, 1664), 3);
    add_background_object(create_fdlabfloor8_3517(5856, 1728), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1504), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1440), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1376), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1312), 3);
    add_background_object(create_fdlabfloor4_3510(5632, 1248), 3);
    add_background_object(create_fdlabwall1_3508(6016, 1408), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1408), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 1472), 3);
    add_background_object(create_fdlabwall3_3518(5760, 1056), 3);
    add_background_object(create_fdlabwall3_3518(5888, 1056), 3);
    add_background_object(create_fdlabwall3_3518(6016, 1056), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(6080, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 1216), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 1216), 3);
    add_background_object(create_fdlabfloor3_3527(5632, 1216), 3);
    add_background_object(create_fdlabfloor3_3527(5856, 1376), 3);
    add_background_object(create_fdlabfloor1_3514(6016, 1376), 3);
    add_background_object(create_fdlabwall2_3509(6016, 1664), 3);
    add_background_object(create_fdlabfloor3_3527(5856, 1632), 3);
    add_background_object(create_fdlabfloor2_3521(5952, 1632), 3);
    add_background_object(create_fdlabfloor10_3519(5952, 1664), 3);
    add_background_object(create_fdlabfloor9_3524(5984, 1664), 3);
    add_background_object(create_fdlabfloor10_3519(5856, 1792), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 1792), 3);
    add_background_object(create_fdlabfloor2_3521(5984, 1792), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 1792), 3);
    add_background_object(create_fdlabfloor11_3512(5888, 1632), 3);
    add_background_object(create_fdcurve3_3531(5888, 1824), 3);
    add_background_object(create_fdlabfloor4_3510(5504, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(5504, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(5504, 1632), 3);
    add_background_object(create_fdlabfloor2_3521(5632, 1856), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 1632), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 1632), 3);
    add_background_object(create_fdlabfloor3_3527(5504, 1632), 3);
    add_background_object(create_fdlabfloor9_3524(5632, 1632), 3);
    add_background_object(create_fdlabfloor1_3514(5888, 1376), 3);
    add_background_object(create_fdlabfloor7_3523(5856, 1408), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 1408), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 1408), 3);
    add_background_object(create_fdlabfloor2_3521(5984, 1408), 3);
    add_background_object(create_fdlabfloor3_3527(5600, 1856), 3);
    add_background_object(create_fdlabfloor4_3510(5504, 1824), 3);
    add_background_object(create_fdlabfloor7_3523(5504, 1888), 3);
    add_background_object(create_fdlabfloor5_3522(5600, 1888), 3);
    add_background_object(create_fdlabfloor11_3512(5536, 1888), 3);
    add_background_object(create_fdlabfloor11_3512(5536, 1856), 3);
    add_background_object(create_fdlabwall1_3508(0, 1248), 3);
    add_object(create_objecttransporterstart_3412(-112, 160), 3);
    add_object(create_objecttransporterstart_3412(1760, 768), 3);
    add_object(create_objecttransporterstart_3412(-200, 2200), 3);
    add_object(create_objecttransporterstart_3412(5032, 776), 3);
    add_object(create_objecttransporterstart_3412(4736, 496), 3);
    add_object(create_objecttransporterstart_3412(1760, 328), 3);
    add_object(create_objecttransporterstart_3412(4032, 1992), 3);
    add_object(create_objecttransporterstart_3412(640, 928), 3);
    add_object(create_objecttransporterstart_3412(640, 224), 3);
    add_object(create_objecttransporterstart_3412(832, 416), 3);
    add_object(create_objecttransporterstart_3412(2176, 2120), 3);
    add_object(create_enemysunflora_2960(1760, 1040), 3);
    add_object(create_playerstartingpoint_358(21, 157), 3);
    add_object(create_objecttransporterwave_3414(-368, 1216), 3);
    add_object(create_objecttransporternode90_3428(-200, 2136), 3);
    add_object(create_objecttransporternode180_3426(-264, 2200), 3);
    add_object(create_objecttransporternode270_3417(-200, 2264), 3);
    add_object(create_objecttransporternode0_3415(-136, 2200), 3);
    add_object(create_hazardspiralsparkmaker_3422(-56, 2164), 3);
    add_object(create_fdspiralsparktowerlight_3423(-48, 2240), 3);
    add_object(create_fdspiralsparktowerlight_3423(-48, 2272), 3);
    add_object(create_fdspiralsparktowerlight_3423(-48, 2304), 3);
    add_object(create_enemybuoybuoy_2418(3296, 2032), 3);
    add_object(create_bubblepatch_806(-304, 2343), 3);
    add_object(create_enemysleepgas_2889(-316, 1532), 3);
    add_object(create_objecttransporterstart2_3416(-202, 2206), 3);
    add_object(create_objecttransporterstart2_3416(1758, 766), 3);
    add_object(create_objecttransporternode270_3417(1760, 792), 3);
    add_object(create_objecttransporter_3344(1760, 1728), 3);
    add_object(create_laddertop_357(1860, 1559), 3);
    add_object(create_objecttransporternode0_3415(-104, 160), 3);
    add_object(create_objecttransporternode270_3417(320, 160), 3);
    add_object(create_objecttransporter_3344(320, 704), 3);
    add_object(create_enemyaxleturret_2201(512, 608), 3);
    add_object(create_enemyaxleturret2_2202(512, 608), 3);
    add_object(create_enemyaxleturret_2201(736, 608), 3);
    add_object(create_enemyaxleturret2_2202(736, 608), 3);
    add_object(create_enemyaxleturret_2201(1024, 488), 3);
    add_object(create_enemyaxleturret2_2202(1024, 488), 3);
    add_object(create_switchcorkscrewdoor_3536(2624, 1648), 3);
    add_object(create_corkscrewdoor_3537(2671, 1711), 3);
    add_object(create_corkscrewdoor_3537(2607, 1935), 3);
    add_object(create_switchcorkscrewdoor_3536(2752, 1840), 3);
    add_object(create_levelelectriccrusherbolt_3538(4064, 1600), 3);
    add_object(create_levelelectriccrusherbolt_3538(3936, 1600), 3);
    add_object(create_levelelectriccrusherbolt_3538(4192, 1568), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelfdpushplatform_3539(3424, 1952), 3);
    add_object(create_levelelectriccrusher_3540(4192, 1568), 3);
    add_object(create_levelelectriccrusher_3540(4064, 1600), 3);
    add_object(create_levelelectriccrusher_3540(3936, 1600), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelfdpushplatform_3539(3744, 1440), 3);
    add_object(create_levelelectriccrusherbolt_3538(4512, 1856), 3);
    add_object(create_levelelectriccrusherbolt_3538(4384, 1856), 3);
    add_object(create_levelelectriccrusherbolt_3538(4640, 1856), 3);
    add_object(create_enemylimiter_350(4133, 1970), 3);
    add_object(create_enemylimiter_350(4341, 1970), 3);
    add_object(create_levelelectriccrusher_3540(4768, 1856), 3);
    add_object(create_levelelectriccrusherbolt_3538(4768, 1856), 3);
    add_object(create_levelelectriccrusher_3540(4384, 1856), 3);
    add_object(create_levelelectriccrusher_3540(4512, 1856), 3);
    add_object(create_levelelectriccrusher_3540(4640, 1856), 3);
    add_object(create_levelelectriccrusher_3540(4768, 1536), 3);
    add_object(create_levelelectriccrusherbolt_3538(4768, 1536), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_levelfdpushplatform_3539(5024, 1888), 3);
    add_object(create_yellowspringup_434(4416, 1376), 3);
    add_object(create_switchcorkscrewdoor_3536(4608, 1328), 3);
    add_object(create_corkscrewdoor_3537(4335, 1167), 3);
    add_object(create_laddertop_357(4156, 1751), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1216), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1248), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1280), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1312), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1344), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1376), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1408), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1440), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1472), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1504), 3);
    add_object(create_hazardspiralsparkmaker_3422(4672, 1076), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1152), 3);
    add_object(create_fdspiralsparktowerlight_3423(4680, 1184), 3);
    add_object(create_monitorrings_407(1904, 352), 3);
    add_object(create_objectcrystal_279(2053, 530), 3);
    add_object(create_objectcrystal_279(2053, 498), 3);
    add_object(create_objectcrystal_279(2053, 466), 3);
    add_object(create_objectcrystal_279(2053, 434), 3);
    add_object(create_objectcrystal_279(381, 586), 3);
    add_object(create_objectcrystal_279(421, 586), 3);
    add_object(create_objectcrystal_279(381, 626), 3);
    add_object(create_objectcrystal_279(421, 626), 3);
    add_object(create_objectcrystal_279(605, 586), 3);
    add_object(create_objectcrystal_279(645, 586), 3);
    add_object(create_objectcrystal_279(605, 626), 3);
    add_object(create_objectcrystal_279(645, 626), 3);
    add_object(create_objectcrystal_279(1405, 586), 3);
    add_object(create_objectcrystal_279(1445, 586), 3);
    add_object(create_objectcrystal_279(1405, 626), 3);
    add_object(create_objectcrystal_279(1445, 626), 3);
    add_object(create_objectcrystal_279(1629, 586), 3);
    add_object(create_objectcrystal_279(1669, 586), 3);
    add_object(create_objectcrystal_279(1629, 626), 3);
    add_object(create_objectcrystal_279(1669, 626), 3);
    add_object(create_enemyslime_741(2503, 1653), 3);
    add_object(create_enemyslime_741(2423, 1653), 3);
    add_object(create_enemylimiter_350(2373, 1650), 3);
    add_object(create_enemylimiter_350(2581, 1650), 3);
    add_object(create_enemybuoybuoy_2418(4528, 1064), 3);
    add_object(create_enemybuoybuoy_2418(2656, 1848), 3);
    add_object(create_enemybuoybuoy_2418(1808, 1608), 3);
    add_object(create_enemybuoybuoy_2418(1720, 1520), 3);
    add_object(create_enemybuoybuoy_2418(4872, 1512), 3);
    add_object(create_enemybuoybuoy_2418(4952, 1608), 3);
    add_object(create_enemybuoybuoy_2418(4896, 1728), 3);
    add_object(create_monitorcrate_409(2880, 1632), 3);
    add_object(create_monitorkeystone_562(2848, 1632), 3);
    add_object(create_objecttransporter_3344(3584, 1536), 3);
    add_object(create_enemyelitespawner_3345(3583, 1535), 3);
    add_object(create_enemytankbot_2821(3583, 1497), 3);
    add_object(create_objecttransporter_3344(3904, 1024), 3);
    add_object(create_enemyelitespawner_3345(3903, 1023), 3);
    add_object(create_enemytankbot_2821(3903, 985), 3);
    add_object(create_enemysunflora_2960(4512, 1296), 3);
    add_object(create_enemylimiter_350(3493, 1522), 3);
    add_object(create_enemylimiter_350(3701, 1522), 3);
    add_object(create_enemylimiter_350(3813, 1010), 3);
    add_object(create_enemylimiter_350(4021, 1010), 3);
    add_object(create_enemybuoybuoy_2418(3264, 1848), 3);
    add_object(create_enemybuoybuoy_2418(3296, 1744), 3);
    add_object(create_enemybuoybuoy_2418(3336, 1640), 3);
    add_object(create_objectpetal_302(4729, 1649), 3);
    add_object(create_objectpetal_302(4769, 1649), 3);
    add_object(create_objectpetal_302(4809, 1649), 3);
    add_object(create_objecttransporter_3344(640, 704), 3);
    add_object(create_enemyelitespawner_3345(639, 703), 3);
    add_object(create_enemyelitemask_2511(5716, 2432), 3);
    add_object(create_enemyelite_2510(5719, 2431), 3);
    add_object(create_bossrobosquidleftarm_2749(5484, 820), 3);
    add_object(create_bossrobosquidleftarm_2749(5476, 836), 3);
    add_object(create_bossrobosquidleftarm_2749(5460, 852), 3);
    add_object(create_bossrobosquidleftarm_2749(5444, 868), 3);
    add_object(create_bossrobosquidleftarm_2749(5428, 884), 3);
    add_object(create_bossrobosquidleftarm_2749(5420, 900), 3);
    add_object(create_bossrobosquidleftarm_2749(5428, 916), 3);
    add_object(create_bossrobosquidrightarm_2750(5524, 820), 3);
    add_object(create_bossrobosquidrightarm_2750(5532, 836), 3);
    add_object(create_bossrobosquidrightarm_2750(5548, 852), 3);
    add_object(create_bossrobosquidrightarm_2750(5564, 868), 3);
    add_object(create_bossrobosquidrightarm_2750(5580, 884), 3);
    add_object(create_bossrobosquidrightarm_2750(5588, 900), 3);
    add_object(create_bossrobosquidrightarm_2750(5580, 916), 3);
    add_object(create_bossrobosquidglass_2751(5504, 783), 3);
    add_object(create_bossrobosquid_2752(5504, 783), 3);
    add_object(create_enemylimiter_350(5333, 746), 3);
    add_object(create_enemylimiter_350(5693, 754), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_levelfdpushplatform_3539(4896, 1280), 3);
    add_object(create_bossrobosquidjet_2753(-452, 1112), 3);
    add_object(create_objecttransporter_3344(5376, 576), 3);
    add_object(create_objecttransporter_3344(5568, 576), 3);
    add_object(create_objecttransporter_3344(5504, 960), 3);
    add_object(create_enemyelitespawner_3345(5375, 575), 3);
    add_object(create_enemyelitespawner_3345(5567, 575), 3);
    add_object(create_enemylimiter_350(5717, 946), 3);
    add_object(create_enemylimiter_350(5317, 946), 3);
    add_object(create_objecttransporternode180_3426(5032, 480), 3);
    add_object(create_objecttransporternode270_3417(4864, 480), 3);
    add_object(create_objecttransporter_3344(4864, 640), 3);
    add_object(create_objecttransporter_3344(4736, 832), 3);
    add_object(create_objecttransporternode270_3417(4736, 528), 3);
    add_object(create_objecttransporterstart2_3416(5030, 774), 3);
    add_object(create_objecttransporterstart2_3416(4734, 494), 3);
    add_object(create_objectcrystal_279(4933, 1234), 3);
    add_object(create_objectcrystal_279(4893, 1234), 3);
    add_object(create_objectcrystal_279(4853, 1234), 3);
    add_object(create_objectcrystal_279(4933, 1170), 3);
    add_object(create_objectcrystal_279(4893, 1170), 3);
    add_object(create_objectcrystal_279(4853, 1170), 3);
    add_object(create_objectcrystal_279(4933, 1106), 3);
    add_object(create_objectcrystal_279(4893, 1106), 3);
    add_object(create_objectcrystal_279(4853, 1106), 3);
    add_object(create_objectcrystal_279(4933, 1042), 3);
    add_object(create_objectcrystal_279(4893, 1042), 3);
    add_object(create_objectcrystal_279(4853, 1042), 3);
    add_object(create_objectcrystal_279(4933, 978), 3);
    add_object(create_objectcrystal_279(4893, 978), 3);
    add_object(create_objectcrystal_279(4853, 978), 3);
    add_object(create_objectcrystal_279(5277, 706), 3);
    add_object(create_objectcrystal_279(5293, 690), 3);
    add_object(create_objectcrystal_279(5309, 674), 3);
    add_object(create_objectcrystal_279(5325, 658), 3);
    add_object(create_objectcrystal_279(5685, 658), 3);
    add_object(create_objectcrystal_279(5701, 674), 3);
    add_object(create_objectcrystal_279(5717, 690), 3);
    add_object(create_objectcrystal_279(5733, 706), 3);
    add_object(create_objecttransporterstart2_3416(1758, 326), 3);
    add_object(create_objecttransporternode270_3417(1760, 352), 3);
    add_object(create_lockedlabdoorbarrier_3541(3880, 1920), 3);
    add_object(create_objectcrystal_279(693, 1226), 3);
    add_object(create_objectcrystal_279(725, 1258), 3);
    add_object(create_objectcrystal_279(757, 1290), 3);
    add_object(create_objectcrystal_279(789, 1322), 3);
    add_object(create_objectcrystal_279(821, 1354), 3);
    add_object(create_objectcrystal_279(853, 1386), 3);
    add_object(create_objectcrystal_279(885, 1418), 3);
    add_object(create_objectcrystal_279(917, 1450), 3);
    add_object(create_objectcrystal_279(949, 1482), 3);
    add_object(create_objectcrystal_279(981, 1514), 3);
    add_object(create_objectcrystal_279(1013, 1546), 3);
    add_object(create_objectcrystal_279(1045, 1578), 3);
    add_object(create_objectcrystal_279(1077, 1610), 3);
    add_object(create_objectcrystal_279(1109, 1642), 3);
    add_object(create_objectcrystal_279(1141, 1674), 3);
    add_object(create_objecttransporterstart2_3416(4030, 1990), 3);
    add_object(create_objecttransporternode270_3417(4032, 2016), 3);
    add_object(create_objecttransporter_3344(4032, 2432), 3);
    add_object(create_enemyslime_741(4439, 2421), 3);
    add_object(create_enemyslime_741(4319, 2421), 3);
    add_object(create_enemylimiter_350(4117, 2418), 3);
    add_object(create_enemyslime_741(4519, 2421), 3);
    add_object(create_enemyslime_741(4607, 2421), 3);
    add_object(create_enemyslime_741(4671, 2421), 3);
    add_object(create_objecttransporter_3344(1472, 1088), 3);
    add_object(create_objecttransporterstart2_3416(638, 926), 3);
    add_object(create_objecttransporternode270_3417(1472, 928), 3);
    add_object(create_switchcorkscrewdoor_3536(2112, 1072), 3);
    add_object(create_corkscrewdoor_3537(2159, 1135), 3);
    add_object(create_switchcorkscrewdoor_3536(2880, 1040), 3);
    add_object(create_corkscrewdoor_3537(2575, 1103), 3);
    add_object(create_objecttransporternode0_3415(680, 928), 3);
    add_object(create_yellowspringup_434(416, 1200), 3);
    add_object(create_monitor1up_410(3712, 608), 3);
    add_object(create_enemybuoybuoy_2418(568, 1096), 3);
    add_object(create_enemybuoybuoy_2418(504, 984), 3);
    add_object(create_monitorkeystone_562(2880, 920), 3);
    add_object(create_monitorkeystone_562(2784, 920), 3);
    add_object(create_yellowspringup_434(2400, 1216), 3);
    add_object(create_fdplatform_3542(2848, 952), 3);
    add_object(create_yellowspringup_434(4384, 1376), 3);
    add_object(create_lockedlabdoorbarrier_3541(1256, 1600), 3);
    add_object(create_lockedlabdoorbarrier_3541(2408, 2048), 3);
    add_object(create_objecttransporternode270_3417(1472, 1184), 3);
    add_object(create_objecttransporternode180_3426(1760, 1184), 3);
    add_object(create_objecttransporter_3344(1472, 1728), 3);
    add_object(create_enemybuoybuoy_2418(1352, 1624), 3);
    add_object(create_enemybuoybuoy_2418(1560, 1624), 3);
    add_object(create_enemyslime_741(1799, 1077), 3);
    add_object(create_enemyslime_741(1719, 1077), 3);
    add_object(create_enemylimiter_350(1573, 1074), 3);
    add_object(create_enemylimiter_350(2037, 1074), 3);
    add_object(create_enemyslime_741(1879, 1077), 3);
    add_object(create_enemyslime_741(1951, 1077), 3);
    add_object(create_objecttransporterstart2_3416(-106, 158), 3);
    add_object(create_objecttransporterstart2_3416(646, 222), 3);
    add_object(create_objecttransporternode270_3417(640, 248), 3);
    add_object(create_objecttransporter_3344(480, 320), 3);
    add_object(create_objecttransporternode270_3417(480, 32), 3);
    add_object(create_objecttransporternode180_3426(832, 32), 3);
    add_object(create_objecttransporterstart2_3416(838, 414), 3);
    add_object(create_monitorwoodshield_325(560, 288), 3);
    add_object(create_objectcrystal_279(565, 170), 3);
    add_object(create_objectcrystal_279(589, 170), 3);
    add_object(create_objectcrystal_279(565, 202), 3);
    add_object(create_objectcrystal_279(589, 202), 3);
    add_object(create_objectcrystal_279(565, 234), 3);
    add_object(create_objectcrystal_279(589, 234), 3);
    add_object(create_objectcrystal_279(565, 266), 3);
    add_object(create_objectcrystal_279(589, 266), 3);
    add_object(create_objecttransporternode270_3417(1760, 1312), 3);
    add_object(create_objecttransporternode180_3426(2176, 1312), 3);
    add_object(create_objecttransporterstart2_3416(2174, 2118), 3);
    add_object(create_fdplatform_3542(2848, 2072), 3);
    add_object(create_objectkeycard_2643(2808, 2048), 3);
    add_object(create_objectkeycard_2643(2864, 2048), 3);
    add_object(create_monitorcrate_409(3232, 2272), 3);
    add_object(create_monitorcrate_409(3264, 2272), 3);
    add_object(create_monitorcrate_409(3296, 2272), 3);
    add_object(create_monitorcrate_409(3328, 2272), 3);
    add_object(create_monitorcrate_409(3360, 2272), 3);
    add_object(create_monitorcrate_409(3392, 2272), 3);
    add_object(create_enemyslime_741(4999, 2421), 3);
    add_object(create_enemyslime_741(4807, 2421), 3);
    add_object(create_enemycoilpiece1_1751(5208, 2304), 3);
    add_object(create_enemycoilpiece3_1752(5207, 2304), 3);
    add_object(create_enemycoilpiece2_1753(5208, 2304), 3);
    add_object(create_enemycoilpiece4_1754(5207, 2304), 3);
    add_object(create_enemycoil_1755(5208, 2304), 3);
    add_object(create_enemylimiter_350(4133, 2322), 3);
    add_object(create_enemylimiter_350(4109, 2322), 3);
    add_object(create_enemycoilhead_1782(5208, 2264), 3);
    add_object(create_enemylimiter_350(5621, 2306), 3);
    add_object(create_enemylimiter_350(5597, 2306), 3);
    add_object(create_enemycoilflip_1756(5208, 2304), 3);
    add_object(create_enemycoilpiece1_1751(5496, 2432), 3);
    add_object(create_enemycoilpiece3_1752(5495, 2432), 3);
    add_object(create_enemycoilpiece2_1753(5496, 2432), 3);
    add_object(create_enemycoilpiece4_1754(5495, 2432), 3);
    add_object(create_enemycoilhead_1782(5496, 2392), 3);
    add_object(create_enemycoil_1755(5496, 2432), 3);
    add_object(create_enemylimiter_350(5429, 2418), 3);
    add_object(create_enemylimiter_350(5405, 2418), 3);
    add_object(create_enemylimiter_350(5221, 2418), 3);
    add_object(create_enemylimiter_350(5197, 2418), 3);
    add_object(create_enemycoilpiece1_1751(5104, 2432), 3);
    add_object(create_enemycoilpiece3_1752(5103, 2432), 3);
    add_object(create_enemycoilpiece2_1753(5104, 2432), 3);
    add_object(create_enemycoilpiece4_1754(5103, 2432), 3);
    add_object(create_enemycoilhead_1782(5104, 2392), 3);
    add_object(create_enemycoil_1755(5104, 2432), 3);
    add_object(create_enemyslug_1182(4223, 1972), 3);
    add_object(create_enemylimiter_350(4837, 1970), 3);
    add_object(create_enemylimiter_350(5109, 1970), 3);
    add_object(create_enemyslug_1182(4991, 1972), 3);
    add_object(create_redspringright_441(5024, 2176), 3);
    add_object(create_redspringright_441(5024, 2208), 3);
    add_object(create_objectpetal_302(5169, 2209), 3);
    add_object(create_objectpetal_302(5265, 2209), 3);
    add_object(create_objectpetal_302(5361, 2209), 3);
    add_object(create_objectpetal_302(5457, 2209), 3);
    add_object(create_enemysunflora_2960(5136, 592), 3);
    add_object(create_enemysunflora_2960(5472, 528), 3);
    add_object(create_enemysunflora_2960(5360, 912), 3);
    add_object(create_enemysunflora_2960(5648, 912), 3);
    add_object(create_enemyslime_741(2255, 1205), 3);
    add_object(create_enemyslime_741(2327, 1205), 3);
    add_object(create_enemylimiter_350(2389, 1202), 3);
    add_object(create_enemylimiter_350(2197, 1202), 3);
    add_object(create_enemyslime_741(2775, 1045), 3);
    add_object(create_enemylimiter_350(2845, 1042), 3);
    add_object(create_enemylimiter_350(2733, 1042), 3);
    add_object(create_enemysunflora_2960(2832, 2128), 3);
    add_object(create_monitorcrate_409(2832, 2040), 3);
    add_object(create_objectcrystal_279(4589, 1250), 3);
    add_object(create_objectcrystal_279(4621, 1250), 3);
    add_object(create_objectcrystal_279(4605, 1274), 3);
    add_object(create_objectcrystal_279(4621, 1298), 3);
    add_object(create_objectcrystal_279(4589, 1298), 3);
    add_object(create_objectcrystal_279(4021, 1106), 3);
    add_object(create_objectcrystal_279(4061, 1106), 3);
    add_object(create_objectcrystal_279(4101, 1106), 3);
    add_object(create_objectcrystal_279(4021, 1170), 3);
    add_object(create_objectcrystal_279(4061, 1170), 3);
    add_object(create_objectcrystal_279(4101, 1170), 3);
    add_object(create_objectcrystal_279(4021, 1234), 3);
    add_object(create_objectcrystal_279(4061, 1234), 3);
    add_object(create_objectcrystal_279(4101, 1234), 3);
    add_object(create_objectcrystal_279(4021, 1290), 3);
    add_object(create_objectcrystal_279(4061, 1290), 3);
    add_object(create_objectcrystal_279(4101, 1290), 3);
    add_object(create_levelelectriccrusher_3540(5728, 2088), 3);
    add_object(create_levelelectriccrusherbolt_3538(5728, 2088), 3);
    add_object(create_levelelectriccrusher_3540(5728, 1568), 3);
    add_object(create_levelelectriccrusherbolt_3538(5728, 1568), 3);
    add_object(create_enemyaxleturret_2201(5648, 1760), 3);
    add_object(create_enemyaxleturret2_2202(5648, 1760), 3);
    add_object(create_enemyaxleturret_2201(5872, 1536), 3);
    add_object(create_enemyaxleturret2_2202(5872, 1536), 3);
    add_object(create_redspringup_440(5952, 2256), 3);
    add_object(create_objecttransporter_3344(5568, 1856), 3);
    add_object(create_enemyelitespawner_3345(5567, 1855), 3);
    add_object(create_enemytankbot_2821(5567, 1817), 3);
    add_object(create_enemylimiter_350(5541, 1842), 3);
    add_object(create_enemylimiter_350(5685, 1842), 3);
    add_object(create_enemytankbot_2821(5911, 2233), 3);
    add_object(create_enemylimiter_350(5861, 2258), 3);
    add_object(create_enemylimiter_350(5973, 2258), 3);
    add_object(create_enemytankbot_2821(5615, 2201), 3);
    add_object(create_enemylimiter_350(5685, 2226), 3);
    add_object(create_enemylimiter_350(5573, 2226), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fdlabfloor12_3520(1952, 1536), 4);
    add_background_object(create_fdlabfloor12_3520(2176, 1536), 4);
    add_background_object(create_fdlabfloor4_3510(2624, 1696), 4);
    add_background_object(create_fdlabfloor17_3543(2624, 1696), 4);
    add_background_object(create_fdlabfloor8_3517(2592, 1696), 4);
    add_background_object(create_fdlabfloor4_3510(2560, 1696), 4);
    add_background_object(create_fdlabfloor4_3510(2560, 1824), 4);
    add_background_object(create_fdlabfloor4_3510(2560, 1888), 4);
    add_background_object(create_fdlabwall1_3508(2432, 1824), 4);
    add_background_object(create_fdlabfloor17_3543(2560, 1920), 4);
    add_background_object(create_fdlabwall2_3509(2432, 1696), 4);
    add_background_object(create_fdlabfloor4_3510(2560, 1760), 4);
    add_background_object(create_fdlabfloor17_3543(4288, 1152), 4);
    add_background_object(create_fdlabfloor12_3520(3136, 1408), 4);
    add_background_object(create_fdlabfloor12_3520(3904, 2048), 4);
    add_background_object(create_fdlabfloor12_3520(1664, 1728), 4);
    add_background_object(create_fdlabwall1_3508(1984, 1120), 4);
    add_background_object(create_fdlabfloor17_3543(2112, 1120), 4);
    add_background_object(create_fdlabwall1_3508(2432, 1088), 4);
    add_background_object(create_fdlabfloor4_3510(2528, 1088), 4);
    add_background_object(create_fdlabfloor8_3517(2432, 1088), 4);
    add_background_object(create_fdlabfloor4_3510(2528, 1152), 4);
    add_background_object(create_fdlabfloor8_3517(2432, 1152), 4);
    add_background_object(create_fdlabfloor17_3543(2528, 1088), 4);
    add_background_object(create_fdlabfloor12_3520(1280, 1728), 4);
    add_background_object(create_fdlabwall1_3508(4160, 1056), 4);
    add_background_object(create_fdlabfloor12_3520(4192, 1344), 4);
    add_background_object(create_fdlabfloor12_3520(4176, 2432), 4);
    add_background_object(create_fdlabfloor12_3520(4960, 2432), 4);
    add_background_object(create_fdlabfloor12_3520(6112, 1376), 4);
    add_object(create_labdoorfront_3507(1928, 1472), 4);
    add_object(create_lockedlabdoorfront_3544(3880, 1984), 4);
    add_object(create_lockeddoorseal_2672(3884, 2000), 4);
    add_object(create_labdoorfront_3507(2152, 1472), 4);
    add_object(create_lockedlabdoorfront_3544(1256, 1664), 4);
    add_object(create_lockeddoorseal_2672(1260, 1680), 4);
    add_object(create_lockedlabdoorfront_3544(2408, 2112), 4);
    add_object(create_lockeddoorseal_2672(2412, 2128), 4);
    add_object(create_labdoorfront_3507(1640, 1664), 4);
    add_object(create_labdoorfront_3507(4152, 2368), 4);
    add_object(create_labdoorfront_3507(4168, 1280), 4);
    add_object(create_labdoorfront_3507(4936, 2368), 4);
    add_object(create_labdoorfront_3507(6088, 1312), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossleft_421(5504, 120), 5);
    add_object(create_cameralimitbossright_422(5823, 120), 5);
    add_object(create_cameralimitbosstop_423(5664, 96), 5);
    add_object(create_cameratriggerboss_424(5656, 32), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_basementlight_3545(-200, 897), 5);
    add_object(create_cameralimitbossbottom_420(160, 735), 5);
    add_object(create_cameralimitbossbottom_420(480, 735), 5);
    add_object(create_cameralimitbossbottom_420(800, 735), 5);
    add_object(create_cameralimitbossbottom_420(1784, 1759), 5);
    add_object(create_cameralimitbossbottom_420(5664, 135), 5);
    add_object(create_cameralimitbossright_422(2151, 416), 5);
    add_object(create_cameralimitbossright_422(2151, 608), 5);
    add_object(create_cameralimitbossbottom_420(3144, 2335), 5);
    add_object(create_cameralimitbossbottom_420(3360, 2335), 5);
    add_object(create_cameralimitbossbottom_420(4296, 2015), 5);
    add_object(create_cameralimitbossbottom_420(4576, 2015), 5);
    add_object(create_cameralimitbossbottom_420(4896, 2015), 5);
    add_object(create_cameralimitbossright_422(5119, 1896), 5);
    add_object(create_cameralimitbossright_422(5119, 1656), 5);
    add_object(create_cameralimitbossbottom_420(4128, 1391), 5);
    add_object(create_cameralimitbossbottom_420(4448, 1391), 5);
    add_object(create_cameralimitbossright_422(5119, 1416), 5);
    add_object(create_cameralimitbossright_422(2151, 248), 5);
    add_object(create_cameralimitbossbottom_420(5304, 991), 5);
    add_object(create_cameralimitbossbottom_420(5624, 991), 5);
    add_object(create_cameralimitbossbottom_420(5944, 991), 5);
    add_object(create_cameralimitbossbottom_420(6080, 991), 5);
    add_object(create_cameralimitbossright_422(6143, 864), 5);
    add_object(create_cameralimitbossright_422(6143, 632), 5);
    add_object(create_cameralimitbossright_422(6143, 408), 5);
    add_object(create_cameralimitbossbottom_420(1480, 1759), 5);
    add_object(create_cameralimitbossbottom_420(1184, 1759), 5);
    add_object(create_cameralimitbosstop_423(512, 864), 5);
    add_object(create_cameralimitbossleft_421(384, 984), 5);
    add_object(create_cameralimitbossleft_421(384, 1168), 5);
    add_object(create_cameralimitbosstop_423(832, 864), 5);
    add_object(create_cameralimitbosstop_423(1152, 864), 5);
    add_object(create_cameralimitbosstop_423(2840, 864), 5);
    add_object(create_cameralimitbosstop_423(2520, 864), 5);
    add_object(create_cameralimitbossright_422(2943, 984), 5);
    add_object(create_cameralimitbossbottom_420(2456, 2239), 5);
    add_object(create_cameralimitbossbottom_420(2176, 2239), 5);
    add_object(create_cameralimitbossbottom_420(2768, 2239), 5);
    add_object(create_cameralimitbossleft_421(2048, 2120), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_slug_running = false;
    loop_slug_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_slug_floor_running = false;
    loop_slug_floor_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_67, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_67, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_67, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_67, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_67, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_67, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_67, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_67, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_67, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_67, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_67, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_67, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_67, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_67, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_67, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_67, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_67, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_67, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_67, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_67, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_67, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_67, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_67, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_67, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_67, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_67, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_67, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_67, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_67, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_67, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_67, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_67, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_67, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_67, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_67, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_67, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_67, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_67, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_67, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_67, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_67, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_67, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_67, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_67, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_67, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_67, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_67, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_67, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_67, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_67, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_67, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_67, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_67, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1635_44 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    once_condition_1837_65 = false;
    not_always_600_13 = loop_count;
    not_always_1803_67 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    not_always_1802_67 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1984_67 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1804_67 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_1467_65 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_1634_44 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_68()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_11381();
    event_func_9426();
    event_func_8592();
}
void Frames::event_func_14434()
{
    // event 2225_68
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2225_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2225_68_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss6_ogg_213, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2225_68_end: ;
}
void Frames::event_func_14435()
{
    // event 2226_68
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2226_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2226_68_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss6b_ogg_234, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2226_68_end: ;
}
void Frames::loop_play_music_4_68()
{
    event_func_14434();
    event_func_14435();
}
void Frames::event_func_14436()
{
    // event 2227_68
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2227_68_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10b_ogg_233, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2227_68_end: ;
}
void Frames::loop_play_music_5_68()
{
    event_func_14436();
}
void Frames::event_func_14437()
{
    // event 2228_68
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2228_68_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2228_68_end: ;
}
void Frames::loop_play_music_6_68()
{
    event_func_14437();
}
void Frames::loop_wrapper_sound_kick1_68(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_68(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_68(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_68(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_68(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
