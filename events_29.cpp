#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2518()
{
    // event 1386_13
    {
        if (!(group_main_engine_1)) goto event_1386_13_end;
        if (!((((Counter*)get_instance(guikeystonecount_459_instances))->value) == (0))) goto event_1386_13_end;
        if (not_always_1386_13 > loop_count) {
            not_always_1386_13 = loop_count + 2;
            goto event_1386_13_end;
        }
        not_always_1386_13 = loop_count + 2;
        ((Active*)get_instance(guikeystones_458_instances))->set_visible(false);
        ((Counter*)get_instance(guikeystonecount_459_instances))->set_visible(false);
    }
    event_1386_13_end: ;
}
void Frames::event_func_2519()
{
    // event 1388_13
    {
        if (!(group_main_engine_1)) goto event_1388_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (0))) goto event_1388_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1388_13_end;
        if (not_always_1388_13 > loop_count) {
            not_always_1388_13 = loop_count + 2;
            goto event_1388_13_end;
        }
        not_always_1388_13 = loop_count + 2;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1388_13_end: ;
}
void Frames::event_func_2520()
{
    // event 1389_13
    {
        if (!(group_main_engine_1)) goto event_1389_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) > (0))) goto event_1389_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y()-10+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1389_13_end: ;
}
void Frames::event_func_2521()
{
    // event 1390_13
    {
        if (!(group_main_engine_1)) goto event_1390_13_end;
        {
            player_389_instances.clear_selection();
            for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            playerskinsash_418_instances.clear_selection();
            for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()+cos_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_layer(((Active*)get_single(player_389_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            ObjectIterator other_it(playerskinsash_418_instances);
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (other_it.end()) goto action_1390_13_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1390_13_0_end: ;
    }
    event_1390_13_end: ;
}
void Frames::event_func_2522()
{
    // event 1391_13
    {
        if (!(group_main_engine_1)) goto event_1391_13_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1391_13_end;
        if (not_always_1391_13 > loop_count) {
            not_always_1391_13 = loop_count + 2;
            goto event_1391_13_end;
        }
        not_always_1391_13 = loop_count + 2;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1391_13_end: ;
}
void Frames::event_func_2523()
{
    // event 1392_13
    {
        if (!(group_main_engine_1)) goto event_1392_13_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1392_13_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1392_13_end: ;
}
void Frames::event_func_2524()
{
    // event 1393_13
    {
        if (!(group_main_engine_1)) goto event_1393_13_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1393_13_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1393_13_end: ;
}
void Frames::event_func_2525()
{
    // event 1394_13
    {
        if (!(group_main_engine_1)) goto event_1394_13_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-2))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1394_13_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1394_13_end: ;
}
void Frames::event_func_2526()
{
    // event 1395_13
    {
        if (!(group_main_engine_1)) goto event_1395_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) > (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1395_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+3, 0);
        }
    }
    event_1395_13_end: ;
}
void Frames::event_func_2527()
{
    // event 1396_13
    {
        if (!(group_main_engine_1)) goto event_1396_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (16))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1396_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1396_13_end: ;
}
void Frames::event_func_2528()
{
    // event 1397_13
    {
        if (!(group_main_engine_1)) goto event_1397_13_end;
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            if (parent == NULL) goto pos_end_1397_13_0;
            ((Active*)get_instance(playerskinsashhair_417_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1397_13_0: ;
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(((Active*)get_instance(playerskinsash_418_instances))->current_animation);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction());
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_layer(((Active*)get_instance(playerskinsash_418_instances))->layer->index+1-1);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1397_13_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1397_13_1: ;
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances, it.current_index));
            if (parent == NULL) goto pos_end_1397_13_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1397_13_2: ;
        }
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
    }
    event_1397_13_end: ;
}
void Frames::event_func_2529()
{
    // event 1398_13
    {
        if (!(group_main_engine_1)) goto event_1398_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (46))) goto event_1398_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_back(((Active*)get_instance(playerskinsash_418_instances)));
        {
            playerskincarol_445_instances.clear_selection();
            ObjectIterator other_it(playerskincarol_445_instances);
            playerskincaroltail_444_instances.clear_selection();
            for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1398_13_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1398_13_0_end: ;
        {
            playerskinmilla_446_instances.clear_selection();
            ObjectIterator other_it(playerskinmilla_446_instances);
            playerskinmillatail_381_instances.clear_selection();
            for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1398_13_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1398_13_1_end: ;
    }
    event_1398_13_end: ;
}
void Frames::event_func_2530()
{
    // event 1399_13
    {
        if (!(group_main_engine_1)) goto event_1399_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (46))) goto event_1399_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
        {
            playerskincarol_445_instances.clear_selection();
            ObjectIterator other_it(playerskincarol_445_instances);
            playerskincaroltail_444_instances.clear_selection();
            for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1399_13_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1399_13_0_end: ;
        {
            playerskinmilla_446_instances.clear_selection();
            ObjectIterator other_it(playerskinmilla_446_instances);
            playerskinmillatail_381_instances.clear_selection();
            for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1399_13_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1399_13_1_end: ;
    }
    event_1399_13_end: ;
}
void Frames::event_func_2531()
{
    // event 1400_13
    {
        if (!(group_main_engine_1)) goto event_1400_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->flags & VISIBLE)) goto event_1400_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(true);
    }
    event_1400_13_end: ;
}
void Frames::event_func_2532()
{
    // event 1401_13
    {
        if (!(group_main_engine_1)) goto event_1401_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->flags & VISIBLE) goto event_1401_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
    }
    event_1401_13_end: ;
}
void Frames::event_func_2533()
{
    // event 1402_13
    {
        if (!(group_main_engine_1)) goto event_1402_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1402_13_end;
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1402_13_end: ;
}
void Frames::event_func_2534()
{
    // event 1403_13
    {
        if (!(group_main_engine_1)) goto event_1403_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1403_13_end;
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1403_13_end: ;
}
void Frames::event_func_2535()
{
    // event 1404_13
    {
        if (!(group_main_engine_1)) goto event_1404_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1404_13_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1404_13_end: ;
}
void Frames::event_func_2536()
{
    // event 1405_13
    {
        if (!(group_main_engine_1)) goto event_1405_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1405_13_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1405_13_end: ;
}
void Frames::event_func_2537()
{
    // event 1406_13
    {
        if (!(group_main_engine_1)) goto event_1406_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1406_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1406_13_end: ;
}
void Frames::event_func_2538()
{
    // event 1407_13
    {
        if (!(group_main_engine_1)) goto event_1407_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, 0));
        }
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64+((Active*)*it)->alterables->values.get(0)*2);
        }
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1407_13_end: ;
}
void Frames::event_func_2539()
{
    // event 1411_13
    {
        if (!(group_main_engine_1)) goto event_1411_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1411_13_end;
        media.play_id(SOUND_BOUNCESHOT_235, global_values->get(3)%math_helper%4+5-1);
        FrameObject * single_instance_1411_13_0; single_instance_1411_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerprojectile_320_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1411_13_0 == NULL)
                    single_instance_1411_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
            ((Active*)*it)->alterables->values.sub(10, 1);
            ((Active*)*it)->alterables->values.set(11, atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)));
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(11)+randrange(91)*((Active*)*it)->alterables->values.get(12)+180);
            ((Active*)*it)->alterables->values.set(2, cos_deg(((Active*)*it)->alterables->values.get(11))*8);
            ((Active*)*it)->alterables->values.set(3, sin_deg(((Active*)*it)->alterables->values.get(11))*8);
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(11), 0);
            ((Active*)*it)->alterables->values.set(7, 0-((Active*)*it)->alterables->values.get(10)*10);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1411_13_end: ;
}
void Frames::event_func_2540()
{
    // event 1412_13
    {
        if (!(group_main_engine_1)) goto event_1412_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1412_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)));
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(11)+12*((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.set(2, cos_deg(((Active*)*it)->alterables->values.get(11))*8);
            ((Active*)*it)->alterables->values.set(3, sin_deg(((Active*)*it)->alterables->values.get(11))*8);
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(11), 0);
        }
    }
    event_1412_13_end: ;
}
void Frames::event_func_2541()
{
    // event 1413_13
    {
        if (!(group_main_engine_1)) goto event_1413_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1413_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1413_13_end: ;
}
void Frames::event_func_2542()
{
    // event 1414_13
    {
        if (!(group_main_engine_1)) goto event_1414_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1414_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1414_13_0; single_instance_1414_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerprojectile_320_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1414_13_0 == NULL)
                    single_instance_1414_13_0 = new_obj;
            }
        }
    }
    event_1414_13_end: ;
}
void Frames::event_func_2543()
{
    // event 1415_13
    {
        if (!(group_main_engine_1)) goto event_1415_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1415_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
    }
    event_1415_13_end: ;
}
void Frames::event_func_2544()
{
    // event 1417_13
    {
        if (!(group_main_engine_1)) goto event_1417_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1417_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        FrameObject * single_instance_1417_13_0; single_instance_1417_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerprojectile_320_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1417_13_0 == NULL)
                    single_instance_1417_13_0 = new_obj;
            }
        }
    }
    event_1417_13_end: ;
}
void Frames::event_func_2545()
{
    // event 1418_13
    {
        if (!(group_main_engine_1)) goto event_1418_13_end;
        if (!((((Active*)get_instance(effectsspadeimage_321_instances, default_active_instance))->get_direction()) > (1))) goto event_1418_13_end;
        if (!((((Active*)get_instance(effectsspadeimage_321_instances, default_active_instance))->get_direction()) < (8))) goto event_1418_13_end;
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(0)*4);
        }
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.2+((Active*)*it)->alterables->values.get(0)*0.05);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12);
        }
    }
    event_1418_13_end: ;
}
void Frames::event_func_2546()
{
    // event 1419_13
    {
        if (!(group_main_engine_1)) goto event_1419_13_end;
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (32))) { it.deselect(); continue; }
        }
        if (!effectsspadeimage_321_instances.has_selection()) goto event_1419_13_end;
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1419_13_end: ;
}
void Frames::event_func_2547()
{
    // event 1420_13
    {
        if (!(group_main_engine_1)) goto event_1420_13_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1420_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1420_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (4))) goto event_1420_13_end;
        if (not_always_1420_13 > loop_count) {
            not_always_1420_13 = loop_count + 2;
            goto event_1420_13_end;
        }
        not_always_1420_13 = loop_count + 2;
        FrameObject * single_instance_1420_13_0; single_instance_1420_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1420_13_0 == NULL)
                    single_instance_1420_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1420_13_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1420_13_0))->set_direction(pick_random(3, 8, 9, 10));
    }
    event_1420_13_end: ;
}
void Frames::event_func_2548()
{
    // event 1421_13
    {
        if (!(group_main_engine_1)) goto event_1421_13_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1421_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1421_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (4))) goto event_1421_13_end;
        if (not_always_1421_13 > loop_count) {
            not_always_1421_13 = loop_count + 2;
            goto event_1421_13_end;
        }
        not_always_1421_13 = loop_count + 2;
        FrameObject * single_instance_1421_13_0; single_instance_1421_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1421_13_0 == NULL)
                    single_instance_1421_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1421_13_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1421_13_0))->set_direction(pick_random(3, 6, 7, 8));
    }
    event_1421_13_end: ;
}
void Frames::event_func_2549()
{
    // event 1422_13
    {
        if (!(group_main_engine_1)) goto event_1422_13_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1422_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (47))) goto event_1422_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1422_13_end;
        if (not_always_1422_13 > loop_count) {
            not_always_1422_13 = loop_count + 2;
            goto event_1422_13_end;
        }
        not_always_1422_13 = loop_count + 2;
        FrameObject * single_instance_1422_13_0; single_instance_1422_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 14;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1422_13_0 == NULL)
                    single_instance_1422_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1422_13_0))->get_movement()->set_speed(0);
        ((Active*)((Active*)single_instance_1422_13_0))->set_direction(randrange(32));
        ((Active*)((Active*)single_instance_1422_13_0))->set_x(((Active*)single_instance_1422_13_0)->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*16);
        ((Active*)((Active*)single_instance_1422_13_0))->set_scale(0.75);
        ((Active*)((Active*)single_instance_1422_13_0))->force_speed(50);
    }
    event_1422_13_end: ;
}
void Frames::event_func_2550()
{
    // event 1423_13
    {
        if (!(group_main_engine_1)) goto event_1423_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1423_13_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1423_13_end;
        FrameObject * single_instance_1423_13_0; single_instance_1423_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1423_13_0 == NULL)
                    single_instance_1423_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1423_13_0))->set_x(((Active*)single_instance_1423_13_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1423_13_0))->set_y(((Active*)single_instance_1423_13_0)->get_y()-8+randrange(17));
    }
    event_1423_13_end: ;
}
void Frames::event_func_2551()
{
    // event 1424_13
    {
        if (!(group_main_engine_1)) goto event_1424_13_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1424_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1424_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (23))) goto event_1424_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_1424_13_end;
        if (not_always_1424_13 > loop_count) {
            not_always_1424_13 = loop_count + 2;
            goto event_1424_13_end;
        }
        not_always_1424_13 = loop_count + 2;
        FrameObject * single_instance_1424_13_0; single_instance_1424_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1424_13_0 == NULL)
                    single_instance_1424_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1424_13_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1424_13_0))->set_direction(pick_random(3, 8, 9, 10));
    }
    event_1424_13_end: ;
}
void Frames::event_func_2552()
{
    // event 1425_13
    {
        if (!(group_main_engine_1)) goto event_1425_13_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1425_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1425_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (23))) goto event_1425_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_1425_13_end;
        if (not_always_1425_13 > loop_count) {
            not_always_1425_13 = loop_count + 2;
            goto event_1425_13_end;
        }
        not_always_1425_13 = loop_count + 2;
        FrameObject * single_instance_1425_13_0; single_instance_1425_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1425_13_0 == NULL)
                    single_instance_1425_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1425_13_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1425_13_0))->set_direction(pick_random(3, 6, 7, 8));
    }
    event_1425_13_end: ;
}
void Frames::event_func_2553()
{
    // event 1426_13
    {
        if (!(group_main_engine_1)) goto event_1426_13_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1426_13_end: ;
}
void Frames::event_func_2554()
{
    // event 1427_13
    {
        if (!(group_main_engine_1)) goto event_1427_13_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!effectsdebris_319_instances.has_selection()) goto event_1427_13_end;
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1427_13_end: ;
}
void Frames::event_func_2555()
{
    // event 1431_13
    {
        if (!(group_main_engine_1)) goto event_1431_13_end;
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!effectshade_356_instances.has_selection()) goto event_1431_13_end;
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
        }
    }
    event_1431_13_end: ;
}
void Frames::event_func_2556()
{
    // event 1432_13
    {
        if (!(group_main_engine_1)) goto event_1432_13_end;
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
        }
        if (!effectshade_356_instances.has_selection()) goto event_1432_13_end;
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-(sin_deg(((Active*)*it)->alterables->values.get(5))*((Active*)*it)->alterables->values.get(2)));
            ((Active*)*it)->alterables->values.add(5, 4);
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1432_13_end: ;
}
void Frames::event_func_2557()
{
    // event 1433_13
    {
        if (!(group_main_engine_1)) goto event_1433_13_end;
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!effectshade_356_instances.has_selection()) goto event_1433_13_end;
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1433_13_end: ;
}
void Frames::event_func_2558()
{
    // event 1434_13
    {
        if (!(group_main_engine_1)) goto event_1434_13_end;
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!effectshade_356_instances.has_selection()) goto event_1434_13_end;
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1434_13_end: ;
}
void Frames::event_func_2559()
{
    // event 1435_13
    {
        if (!(group_main_engine_1)) goto event_1435_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (1))) goto event_1435_13_end;
        if (!(((Active*)get_instance(playerothers_123_instances))->alterables->flags.is_off(10))) goto event_1435_13_end;
        {
            shieldwater_318_instances.clear_selection();
            for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            shieldearth_314_instances.clear_selection();
            for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            shieldflamefront_316_instances.clear_selection();
            for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            shieldmagnetic_317_instances.clear_selection();
            for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            shieldwood_313_instances.clear_selection();
            for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            shieldflameback_315_instances.clear_selection();
            for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
        }
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1435_13_end: ;
}
void Frames::event_func_2560()
{
    // event 1436_13
    {
        if (!(group_main_engine_1)) goto event_1436_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (1))) goto event_1436_13_end;
        if (!(((Active*)get_instance(playerothers_123_instances))->alterables->flags.is_off(10))) goto event_1436_13_end;
        FrameObject * single_instance_1436_13_0; single_instance_1436_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle1_300(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1436_13_0 == NULL)
                    single_instance_1436_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1436_13_1; single_instance_1436_13_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle2_333(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1436_13_1 == NULL)
                    single_instance_1436_13_1 = new_obj;
            }
        }
        FrameObject * single_instance_1436_13_2; single_instance_1436_13_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle3_334(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1436_13_2 == NULL)
                    single_instance_1436_13_2 = new_obj;
            }
        }
        FrameObject * single_instance_1436_13_3; single_instance_1436_13_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle4_335(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1436_13_3 == NULL)
                    single_instance_1436_13_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1436_13_0))->alterables->values.set(2, 20);
        ((Active*)((Active*)single_instance_1436_13_0))->alterables->values.set(3, 0);
        ((Active*)((Active*)single_instance_1436_13_1))->alterables->values.set(2, 20);
        ((Active*)((Active*)single_instance_1436_13_1))->alterables->values.set(3, 180);
        ((Active*)((Active*)single_instance_1436_13_2))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_1436_13_2))->alterables->values.set(3, 0);
        ((Active*)((Active*)single_instance_1436_13_3))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_1436_13_3))->alterables->values.set(3, 180);
        ((Active*)get_instance(playerothers_123_instances))->alterables->flags.enable(10);
    }
    event_1436_13_end: ;
}
void Frames::event_func_2561()
{
    // event 1437_13
    {
        if (!(group_main_engine_1)) goto event_1437_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (1))) goto event_1437_13_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1437_13_end;
        sparkle5_336_instances.empty_selection();
        // select single: false true false
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator p_it(sparkle1_300_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator p_it(sparkle2_333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator p_it(sparkle3_334_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator p_it(sparkle4_335_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
    }
    event_1437_13_end: ;
}
void Frames::event_func_2562()
{
    // event 1438_13
    {
        if (!(group_main_engine_1)) goto event_1438_13_end;
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1438_13_end: ;
}
void Frames::event_func_2563()
{
    // event 1439_13
    {
        if (!(group_main_engine_1)) goto event_1439_13_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1439_13_end;
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y()-4);
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y()-4);
        }
    }
    event_1439_13_end: ;
}
void Frames::event_func_2564()
{
    // event 1440_13
    {
        if (!(group_main_engine_1)) goto event_1440_13_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1440_13_end;
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y()-4);
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y()-4);
        }
    }
    event_1440_13_end: ;
}
void Frames::event_func_2565()
{
    // event 1441_13
    {
        if (!(group_main_engine_1)) goto event_1441_13_end;
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
    }
    event_1441_13_end: ;
}
void Frames::event_func_2566()
{
    // event 1442_13
    {
        if (!(group_main_engine_1)) goto event_1442_13_end;
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+10);
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+10);
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+7);
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+7);
        }
    }
    event_1442_13_end: ;
}
void Frames::event_func_2567()
{
    // event 1443_13
    {
        if (!(group_main_engine_1)) goto event_1443_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1443_13_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->flags.disable(10);
    }
    event_1443_13_end: ;
}
void Frames::event_func_2568()
{
    // event 1444_13
    {
        if (!(group_main_engine_1)) goto event_1444_13_end;
        obj1up_337_instances.clear_selection();
        for (ObjectIterator it(obj1up_337_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1444_13_end: ;
}
void Frames::event_func_2569()
{
    // event 1445_13
    {
        if (!(group_main_engine_1)) goto event_1445_13_end;
        obj1up_337_instances.clear_selection();
        for (ObjectIterator it(obj1up_337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (26))) { it.deselect(); continue; }
        }
        if (!obj1up_337_instances.has_selection()) goto event_1445_13_end;
        for (ObjectIterator it(obj1up_337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)*it);
            if (parent == NULL) goto pos_end_1445_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 1);
            pos_end_1445_13_0: ;
        }
    }
    event_1445_13_end: ;
}
void Frames::event_func_2570()
{
    // event 1446_13
    {
        if (!(group_main_engine_1)) goto event_1446_13_end;
        obj1up_337_instances.clear_selection();
        for (ObjectIterator it(obj1up_337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (32))) { it.deselect(); continue; }
        }
        if (!obj1up_337_instances.has_selection()) goto event_1446_13_end;
        for (ObjectIterator it(obj1up_337_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1446_13_end: ;
}
void Frames::event_func_2571()
{
    // event 1447_13
    {
        if (!(group_main_engine_1)) goto event_1447_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1447_13_end;
        if (not_always_1447_13 > loop_count) {
            not_always_1447_13 = loop_count + 2;
            goto event_1447_13_end;
        }
        not_always_1447_13 = loop_count + 2;
        FrameObject * single_instance_1447_13_0; single_instance_1447_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldmagnetic_317_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 13), parent->layer);
                if (single_instance_1447_13_0 == NULL)
                    single_instance_1447_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1447_13_0))->set_direction(12);
    }
    event_1447_13_end: ;
}
void Frames::event_func_2572()
{
    // event 1448_13
    {
        if (!(group_main_engine_1)) goto event_1448_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1448_13_end;
        if (not_always_1448_13 > loop_count) {
            not_always_1448_13 = loop_count + 2;
            goto event_1448_13_end;
        }
        not_always_1448_13 = loop_count + 2;
        FrameObject * single_instance_1448_13_0; single_instance_1448_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldmagnetic_317_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 13), parent->layer);
                if (single_instance_1448_13_0 == NULL)
                    single_instance_1448_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1448_13_0))->set_direction(20);
    }
    event_1448_13_end: ;
}
void Frames::event_func_2573()
{
    // event 1449_13
    {
        if (!(group_main_engine_1)) goto event_1449_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1449_13_end;
        if (not_always_1449_13 > loop_count) {
            not_always_1449_13 = loop_count + 2;
            goto event_1449_13_end;
        }
        not_always_1449_13 = loop_count + 2;
        FrameObject * single_instance_1449_13_0; single_instance_1449_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldmagnetic_317_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 13), parent->layer);
                if (single_instance_1449_13_0 == NULL)
                    single_instance_1449_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1449_13_0))->set_direction(28);
    }
    event_1449_13_end: ;
}
void Frames::event_func_2574()
{
    // event 1450_13
    {
        if (!(group_main_engine_1)) goto event_1450_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1450_13_end;
        if (not_always_1450_13 > loop_count) {
            not_always_1450_13 = loop_count + 2;
            goto event_1450_13_end;
        }
        not_always_1450_13 = loop_count + 2;
        FrameObject * single_instance_1450_13_0; single_instance_1450_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldmagnetic_317_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 13), parent->layer);
                if (single_instance_1450_13_0 == NULL)
                    single_instance_1450_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1450_13_0))->set_direction(4);
    }
    event_1450_13_end: ;
}
void Frames::event_func_2575()
{
    // event 1454_13
    bool or_result_1454_13 = false;
    bool or_temp_result_1454_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1454_13_0_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto or_event_1454_13_0_end;
        or_result_1454_13 = true;
        or_temp_result_1454_13_0 = true;
    }
    or_event_1454_13_0_end: ;
    cameratriggerboss_424_instances.clear_saved_selection();
    if (or_temp_result_1454_13_0) {
        cameratriggerboss_424_instances.save_selection();
    }
    // event 1454_13
    bool or_temp_result_1454_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1454_13_1_end;
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossleft_421_instances.has_selection()) goto or_event_1454_13_1_end;
        or_result_1454_13 = true;
        or_temp_result_1454_13_1 = true;
    }
    or_event_1454_13_1_end: ;
    cameralimitbossleft_421_instances.clear_saved_selection();
    if (or_temp_result_1454_13_1) {
        cameralimitbossleft_421_instances.save_selection();
    }
    // event 1454_13
    bool or_temp_result_1454_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1454_13_2_end;
        cameralimitbossright_422_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossright_422_instances.has_selection()) goto or_event_1454_13_2_end;
        or_result_1454_13 = true;
        or_temp_result_1454_13_2 = true;
    }
    or_event_1454_13_2_end: ;
    cameralimitbossright_422_instances.clear_saved_selection();
    if (or_temp_result_1454_13_2) {
        cameralimitbossright_422_instances.save_selection();
    }
    // event 1454_13
    bool or_temp_result_1454_13_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1454_13_3_end;
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossbottom_420_instances.has_selection()) goto or_event_1454_13_3_end;
        or_result_1454_13 = true;
        or_temp_result_1454_13_3 = true;
    }
    or_event_1454_13_3_end: ;
    cameralimitbossbottom_420_instances.clear_saved_selection();
    if (or_temp_result_1454_13_3) {
        cameralimitbossbottom_420_instances.save_selection();
    }
    // event 1454_13
    bool or_temp_result_1454_13_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto or_event_1454_13_4_end;
        cameralimitbosstop_423_instances.clear_selection();
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbosstop_423_instances.has_selection()) goto or_event_1454_13_4_end;
        or_result_1454_13 = true;
        or_temp_result_1454_13_4 = true;
        or_event_1454_13_4_end: ;
        cameralimitbosstop_423_instances.clear_saved_selection();
        if (or_temp_result_1454_13_4) {
            cameralimitbosstop_423_instances.save_selection();
        }
        if (!or_result_1454_13) goto or_final_or_event_1454_13_4_end;
        cameralimitbossleft_421_instances.empty_selection();
        cameralimitbossbottom_420_instances.empty_selection();
        cameralimitbossright_422_instances.empty_selection();
        cameratriggerboss_424_instances.empty_selection();
        cameralimitbosstop_423_instances.empty_selection();
        if (or_temp_result_1454_13_3) {
            cameralimitbossbottom_420_instances.restore_selection();
        }
        if (or_temp_result_1454_13_2) {
            cameralimitbossright_422_instances.restore_selection();
        }
        if (or_temp_result_1454_13_1) {
            cameralimitbossleft_421_instances.restore_selection();
        }
        if (or_temp_result_1454_13_0) {
            cameratriggerboss_424_instances.restore_selection();
        }
        if (or_temp_result_1454_13_4) {
            cameralimitbosstop_423_instances.restore_selection();
        }
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1454_13_4_end: ;
}
void Frames::event_func_2576()
{
    // event 1455_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1455_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1455_13_end;
        if (!((global_values->get(4)) < (10))) goto event_1455_13_end;
        if (not_always_1455_13 > loop_count) {
            not_always_1455_13 = loop_count + 2;
            goto event_1455_13_end;
        }
        not_always_1455_13 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)+(106-global_values->get(19)*53));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1455_13_end: ;
}
void Frames::event_func_2577()
{
    // event 1456_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1456_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1456_13_end;
        if (!((global_values->get(4)) >= (10))) goto event_1456_13_end;
        if (not_always_1456_13 > loop_count) {
            not_always_1456_13 = loop_count + 2;
            goto event_1456_13_end;
        }
        not_always_1456_13 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1456_13_end: ;
}
void Frames::event_func_2578()
{
    // event 1457_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1457_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1457_13_end;
        if (not_always_1457_13 > loop_count) {
            not_always_1457_13 = loop_count + 2;
            goto event_1457_13_end;
        }
        not_always_1457_13 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(frame_left(), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(frame_top(), ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(frame_right(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+(106-global_values->get(19)*53)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(frame_bottom(), ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1457_13_end: ;
}
void Frames::event_func_2579()
{
    // event 1458_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1458_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (2))) goto event_1458_13_end;
        if (not_always_1458_13 > loop_count) {
            not_always_1458_13 = loop_count + 2;
            goto event_1458_13_end;
        }
        not_always_1458_13 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_instance(sign_351_instances))->get_y()-160);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)+(106-global_values->get(19)*53));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(sign_351_instances))->get_y()+80);
    }
    event_1458_13_end: ;
}
void Frames::event_func_2580()
{
    // event 1459_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1459_13_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_camera_mode_81+number_to_string(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)));
            if (dyn_it == (*loops).end()) goto dynamic_1459_13_0_end;
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
        dynamic_1459_13_0_end: ;
    }
    event_1459_13_end: ;
}
void Frames::event_func_2581()
{
    // event 1487_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1487_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1487_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1487_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
    }
    event_1487_13_end: ;
}
void Frames::event_func_2582()
{
    // event 1488_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1488_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1488_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1488_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-2, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
    }
    event_1488_13_end: ;
}
void Frames::event_func_2583()
{
    // event 1489_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1489_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1489_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1489_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+2, ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
    }
    event_1489_13_end: ;
}
void Frames::event_func_2584()
{
    // event 1490_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1490_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1490_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1490_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-2, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1490_13_end: ;
}
void Frames::event_func_2585()
{
    // event 1496_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1496_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1496_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1496_13_end: ;
}
void Frames::event_func_2586()
{
    // event 1497_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1497_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1497_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1497_13_end: ;
}
void Frames::event_func_2587()
{
    // event 1498_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1498_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1498_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1498_13_end: ;
}
void Frames::event_func_2588()
{
    // event 1499_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1499_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1499_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1499_13_end: ;
}
void Frames::event_func_2589()
{
    // event 1500_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1500_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1500_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto event_1500_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-4, 0));
    }
    event_1500_13_end: ;
}
void Frames::event_func_2590()
{
    // event 1501_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1501_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1501_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto event_1501_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+4, 0));
    }
    event_1501_13_end: ;
}
void Frames::event_func_2591()
{
    // event 1502_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1502_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1502_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) > (0))) goto event_1502_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-4, 0));
    }
    event_1502_13_end: ;
}
void Frames::event_func_2592()
{
    // event 1503_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1503_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1503_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) < (0))) goto event_1503_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+4, 0));
    }
    event_1503_13_end: ;
}
void Frames::event_func_2593()
{
    // event 1504_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1504_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
    }
    event_1504_13_end: ;
}
void Frames::event_func_2594()
{
    // event 1505_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1505_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)))) goto event_1505_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 0));
    }
    event_1505_13_end: ;
}
void Frames::event_func_2595()
{
    // event 1506_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1506_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)))) goto event_1506_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 0));
    }
    event_1506_13_end: ;
}
void Frames::event_func_2596()
{
    // event 1507_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1507_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)) > (0))) goto event_1507_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)));
    }
    event_1507_13_end: ;
}
void Frames::event_func_2597()
{
    // event 1508_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1508_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)) < (0))) goto event_1508_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)));
    }
    event_1508_13_end: ;
}
void Frames::event_func_2598()
{
    // event 1509_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1509_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
    }
    event_1509_13_end: ;
}
void Frames::event_func_2599()
{
    // event 1510_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1510_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)))) goto event_1510_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)), 0));
    }
    event_1510_13_end: ;
}
void Frames::event_func_2600()
{
    // event 1511_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1511_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)))) goto event_1511_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)), 0));
    }
    event_1511_13_end: ;
}
void Frames::event_func_2601()
{
    // event 1512_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1512_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)) > (0))) goto event_1512_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
    }
    event_1512_13_end: ;
}
void Frames::event_func_2602()
{
    // event 1513_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1513_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)) < (0))) goto event_1513_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
    }
    event_1513_13_end: ;
}
void Frames::event_func_2603()
{
    // event 1514_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1514_13_end;
        set_display_center(get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18))+(106-global_values->get(19)*53), -1);
        set_display_center(-1, get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)-0.1, 0));
    }
    event_1514_13_end: ;
}
void Frames::event_func_2604()
{
    // event 1515_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1515_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(21, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_1515_13_end: ;
}
void Frames::event_func_2605()
{
    // event 1516_13
    {
        if (!(group_main_engine_1)) goto event_1516_13_end;
        ((Counter*)get_instance(guitimerm_364_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/60000));
        ((Counter*)get_instance(guitimers_362_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/1000)%math_helper%60);
        ((Counter*)get_instance(guitimermilli_360_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/10)%math_helper%100);
        ((Counter*)get_instance(guilives_454_instances))->set(manager.lives);
        ((Active*)get_instance(guilifebasemeter_125_instances))->set_x_scale(get_min(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(0)*0.02, 1));
        ((Active*)get_instance(guiicon_452_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(guienergy_124_instances))->set_x_scale(get_max(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)*0.01, 1)));
    }
    event_1516_13_end: ;
}
void Frames::event_func_2606()
{
    // event 1517_13
    {
        if (!(group_main_engine_1)) goto event_1517_13_end;
        if (!(((Active*)get_instance(guiscoretimerings_451_instances))->test_directions(2))) goto event_1517_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1517_13_end: ;
}
void Frames::event_func_2607()
{
    // event 1518_13
    {
        if (!(group_main_engine_1)) goto event_1518_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1518_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (8))) goto event_1518_13_end;
        ((Counter*)get_instance(guirings_122_instances))->set(8);
    }
    event_1518_13_end: ;
}
void Frames::event_func_2608()
{
    // event 1519_13
    {
        if (!(group_main_engine_1)) goto event_1519_13_end;
        if (!((((Counter*)get_instance(guicrystal_121_instances))->value) == (999))) goto event_1519_13_end;
        ((Counter*)get_instance(guicrystal_121_instances))->set(global_values->get(18));
    }
    event_1519_13_end: ;
}
void Frames::event_func_2609()
{
    // event 1520_13
    {
        if (!(group_main_engine_1)) goto event_1520_13_end;
        if (!((((Counter*)get_instance(guitimermilli_360_instances))->value) < (10))) goto event_1520_13_end;
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(true);
    }
    event_1520_13_end: ;
}
void Frames::event_func_2610()
{
    // event 1521_13
    {
        if (!(group_main_engine_1)) goto event_1521_13_end;
        if (!((((Counter*)get_instance(guitimermilli_360_instances))->value) >= (10))) goto event_1521_13_end;
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(false);
    }
    event_1521_13_end: ;
}
void Frames::event_func_2611()
{
    // event 1522_13
    {
        if (!(group_main_engine_1)) goto event_1522_13_end;
        if (!((((Counter*)get_instance(guitimers_362_instances))->value) < (10))) goto event_1522_13_end;
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(true);
    }
    event_1522_13_end: ;
}
void Frames::event_func_2612()
{
    // event 1523_13
    {
        if (!(group_main_engine_1)) goto event_1523_13_end;
        if (!((((Counter*)get_instance(guitimers_362_instances))->value) >= (10))) goto event_1523_13_end;
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(false);
    }
    event_1523_13_end: ;
}
void Frames::event_func_2613()
{
    // event 1524_13
    {
        if (!(group_main_engine_1)) goto event_1524_13_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) < (10))) goto event_1524_13_end;
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(true);
    }
    event_1524_13_end: ;
}
void Frames::event_func_2614()
{
    // event 1525_13
    {
        if (!(group_main_engine_1)) goto event_1525_13_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) >= (10))) goto event_1525_13_end;
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
    }
    event_1525_13_end: ;
}
void Frames::event_func_2615()
{
    // event 1526_13
    {
        if (!(group_main_engine_1)) goto event_1526_13_end;
        guilinkbonus_280_instances.clear_selection();
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!guilinkbonus_280_instances.has_selection()) goto event_1526_13_end;
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+6);
        }
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 6);
        }
    }
    event_1526_13_end: ;
}
void Frames::event_func_2616()
{
    // event 1527_13
    {
        if (!(group_main_engine_1)) goto event_1527_13_end;
        if (!((((Active*)get_instance(guilinkbonus_280_instances, default_active_instance))->alterables->values.get(0)) >= (128))) goto event_1527_13_end;
        guilinkbonus_280_instances.clear_selection();
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1527_13_end: ;
}
void Frames::event_func_2617()
{
    // event 1528_13
    {
        if (!(group_main_engine_1)) goto event_1528_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_1528_13_end;
        if (not_always_1528_13 > loop_count) {
            not_always_1528_13 = loop_count + 2;
            goto event_1528_13_end;
        }
        not_always_1528_13 = loop_count + 2;
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_animation(0);
    }
    event_1528_13_end: ;
}
