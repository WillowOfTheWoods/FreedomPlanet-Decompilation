#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::test_collisions_55()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(playersensorbottombig_397_instances, objectcyclonetop_2963_instances, 1, 1, (EventFunction)&Frames::col_8_50);
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 1073741824, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(qualifier_8, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_20, gimmickbowarrow_2979_instances, 268435456, 1, (EventFunction)&Frames::col_17_51);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemyobelisklaser_3002_instances, 1, 1, (EventFunction)&Frames::col_7_53);
    test_collisions(playersensorleftbig_391_instances, breakableplrock_2987_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(qualifier_7, playerreflect_447_instances, 33554432, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_19, enemyobelisklaser_3002_instances, 536870912, 2, (EventFunction)&Frames::col_8_51);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(gimmickbowarrow_2979_instances, breakableplrock_2987_instances, 2, 2, (EventFunction)&Frames::col_7_51);
    test_collisions(player_389_instances, bossholodragonflame_3046_instances, 1, 1, (EventFunction)&Frames::col_16_55);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_19, hazardgiantsword_3043_instances, 268435456, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(playersensorrightbig_393_instances, breakableplrock_2987_instances, 1, 4, (EventFunction)&Frames::col_6_16);
    test_collisions(player_389_instances, objecttimegate_2965_instances, 2, 1, (EventFunction)&Frames::col_20_55);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 4, (EventFunction)&Frames::col_8_13);
    ObjectList::iterator it1, it2;
    for (it1 = bossholodragonflame_3046_instances.begin(); it1 != bossholodragonflame_3046_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_25_55();
    }
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
}
void Frames::event_func_12132()
{
    // event 11_55
    {
        if (!(group_main_engine_1)) goto event_11_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_11_55_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) > (0))) goto event_11_55_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) < (4))) goto event_11_55_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)*-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9));
    }
    event_11_55_end: ;
}
void Frames::event_func_12133()
{
    // event 1447_55
    {
        if (!(group_main_engine_1)) goto event_1447_55_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1447_55_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8), 2));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -1));
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+1, 100));
    }
    event_1447_55_end: ;
}
void Frames::event_func_12134()
{
    // event 1492_55
    {
        if (!(group_main_engine_1)) goto event_1492_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.set(0, (((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)+1)%math_helper%210);
        ((Active*)get_instance(objectvanishingblock_3034_instances))->force_frame(((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(1));
    }
    event_1492_55_end: ;
}
void Frames::event_func_12135()
{
    // event 1493_55
    {
        if (!(group_main_engine_1)) goto event_1493_55_end;
        if (((Active*)get_instance(objectvanishingblock_3034_instances))->is_near_border(-32)) goto event_1493_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)) == (60))) goto event_1493_55_end;
        if (not_always_1493_55 > loop_count) {
            not_always_1493_55 = loop_count + 2;
            goto event_1493_55_end;
        }
        not_always_1493_55 = loop_count + 2;
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
    }
    event_1493_55_end: ;
}
void Frames::event_func_12136()
{
    // event 1494_55
    {
        if (!(group_main_engine_1)) goto event_1494_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)) >= (60))) goto event_1494_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)) < (150))) goto event_1494_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.set(1, get_max(((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(1)-1, 0));
    }
    event_1494_55_end: ;
}
void Frames::event_func_12137()
{
    // event 1495_55
    {
        if (!(group_main_engine_1)) goto event_1495_55_end;
        if (((Active*)get_instance(objectvanishingblock_3034_instances))->is_near_border(-32)) goto event_1495_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)) == (150))) goto event_1495_55_end;
        if (not_always_1495_55 > loop_count) {
            not_always_1495_55 = loop_count + 2;
            goto event_1495_55_end;
        }
        not_always_1495_55 = loop_count + 2;
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_1495_55_end: ;
}
void Frames::event_func_12138()
{
    // event 1496_55
    {
        if (!(group_main_engine_1)) goto event_1496_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)) >= (150))) goto event_1496_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.set(1, get_min(((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(1)+1, 14));
    }
    event_1496_55_end: ;
}
void Frames::event_func_12139()
{
    // event 1497_55
    {
        if (!(group_main_engine_1)) goto event_1497_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(1)) >= (14))) goto event_1497_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->set_visible(false);
    }
    event_1497_55_end: ;
}
void Frames::event_func_12140()
{
    // event 1498_55
    {
        if (!(group_main_engine_1)) goto event_1498_55_end;
        if (!(((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->flags.is_off(0))) goto event_1498_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->set_visible(true);
    }
    event_1498_55_end: ;
}
void Frames::event_func_12141()
{
    // event 1499_55
    {
        if (!(group_main_engine_1)) goto event_1499_55_end;
        if (!(((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->flags.is_off(0))) goto event_1499_55_end;
        if (!((((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(1)) >= (14))) goto event_1499_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->flags.enable(0);
    }
    event_1499_55_end: ;
}
void Frames::event_func_12142()
{
    // event 1501_55
    {
        if (!(group_main_engine_1)) goto event_1501_55_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*120);
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*-120);
        ((Active*)get_instance(gimmickspinballchain_3030_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain_3030_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain_3030_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain_3030_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain2_3031_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain2_3031_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain2_3031_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain2_3031_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain3_3032_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain3_3032_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain3_3032_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain3_3032_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain4_3033_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain4_3033_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain4_3033_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain4_3033_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.set(3, (((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)+358)%math_helper%360);
    }
    event_1501_55_end: ;
}
void Frames::event_func_12143()
{
    // event 1622_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1622_55_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1622_55_end;
        if (!((global_values->get(0)) != (2))) goto event_1622_55_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_frame_transition_boss_defeated_1) {
            group_main_engine_level_specific_methods_frame_transition_boss_defeated_1 = true;
        }
    }
    event_1622_55_end: ;
}
void Frames::event_func_12144()
{
    // event 1623_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1623_55_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1623_55_end;
        if (!((global_values->get(0)) == (2))) goto event_1623_55_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 = true;
        }
    }
    event_1623_55_end: ;
}
void Frames::event_func_12145()
{
    // event 1624_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_boss_defeated_1)) goto event_1624_55_end;
        if (not_always_1624_55 > loop_count) {
            not_always_1624_55 = loop_count + 2;
            goto event_1624_55_end;
        }
        not_always_1624_55 = loop_count + 2;
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
    }
    event_1624_55_end: ;
}
void Frames::event_func_12146()
{
    // event 1625_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_boss_defeated_1)) goto event_1625_55_end;
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
    event_1625_55_end: ;
}
void Frames::event_func_12147()
{
    // event 1626_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_boss_defeated_1)) goto event_1626_55_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1626_55_end;
        next_frame = 8 + 0;    
    
    }
    event_1626_55_end: ;
}
void Frames::event_func_12148()
{
    // event 1628_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1628_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1628_55_end: ;
}
void Frames::event_func_12149()
{
    // event 1629_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1629_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1629_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2, ((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48));
    }
    event_1629_55_end: ;
}
void Frames::event_func_12150()
{
    // event 1630_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1630_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1630_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2, ((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1630_55_end: ;
}
void Frames::event_func_12151()
{
    // event 1631_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1631_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) == (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1631_55_end;
        if (not_always_1631_55 > loop_count) {
            not_always_1631_55 = loop_count + 2;
            goto event_1631_55_end;
        }
        not_always_1631_55 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(objectstonedoor1_2993_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor3_2994_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor4_2995_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor2_2996_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
    }
    event_1631_55_end: ;
}
void Frames::event_func_12152()
{
    // event 1633_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1633_55_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(2)) == (120))) goto event_1633_55_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
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
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.add(2, 1);
    }
    event_1633_55_end: ;
}
void Frames::event_func_12153()
{
    // event 1635_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1635_55_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(2)) > (120))) goto event_1635_55_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1635_55_end;
            group_main_engine_level_specific_methods_frame_transition_1 = false;
    
        if (!group_main_engine_level_specific_methods_boss_arena_1) {
            group_main_engine_level_specific_methods_boss_arena_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 6080);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
    }
    event_1635_55_end: ;
}
void Frames::event_func_12154()
{
    // event 1643_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1643_55_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1643_55_end;
        FrameObject * single_instance_1643_55_0; single_instance_1643_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1643_55_0 == NULL)
                    single_instance_1643_55_0 = new_obj;
            }
        }
    }
    event_1643_55_end: ;
}
void Frames::event_func_12155()
{
    // event 1644_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1644_55_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1644_55_end;
        FrameObject * single_instance_1644_55_0; single_instance_1644_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1644_55_0 == NULL)
                    single_instance_1644_55_0 = new_obj;
            }
        }
    }
    event_1644_55_end: ;
}
void Frames::event_func_12156()
{
    // event 1645_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1645_55_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1645_55_end;
        FrameObject * single_instance_1645_55_0; single_instance_1645_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1645_55_0 == NULL)
                    single_instance_1645_55_0 = new_obj;
            }
        }
    }
    event_1645_55_end: ;
}
void Frames::event_func_12157()
{
    // event 1646_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1646_55_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1646_55_end;
        FrameObject * single_instance_1646_55_0; single_instance_1646_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1646_55_0 == NULL)
                    single_instance_1646_55_0 = new_obj;
            }
        }
    }
    event_1646_55_end: ;
}
void Frames::event_func_12158()
{
    // event 1647_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1647_55_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1647_55_end;
        FrameObject * single_instance_1647_55_0; single_instance_1647_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1647_55_0 == NULL)
                    single_instance_1647_55_0 = new_obj;
            }
        }
    }
    event_1647_55_end: ;
}
void Frames::event_func_12159()
{
    // event 1648_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1648_55_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1648_55_end;
        FrameObject * single_instance_1648_55_0; single_instance_1648_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1648_55_0 == NULL)
                    single_instance_1648_55_0 = new_obj;
            }
        }
    }
    event_1648_55_end: ;
}
void Frames::event_func_12160()
{
    // event 1649_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1649_55_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1649_55_end;
        FrameObject * single_instance_1649_55_0; single_instance_1649_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1649_55_0 == NULL)
                    single_instance_1649_55_0 = new_obj;
            }
        }
    }
    event_1649_55_end: ;
}
void Frames::event_func_12161()
{
    // event 1650_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1650_55_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1650_55_end;
        FrameObject * single_instance_1650_55_0; single_instance_1650_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1650_55_0 == NULL)
                    single_instance_1650_55_0 = new_obj;
            }
        }
    }
    event_1650_55_end: ;
}
void Frames::event_func_12162()
{
    // event 1651_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1651_55_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1651_55_end;
        FrameObject * single_instance_1651_55_0; single_instance_1651_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1651_55_0 == NULL)
                    single_instance_1651_55_0 = new_obj;
            }
        }
    }
    event_1651_55_end: ;
}
void Frames::event_func_12163()
{
    // event 1652_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1652_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1652_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1652_55_end: ;
}
void Frames::event_func_12164()
{
    // event 1653_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1653_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1653_55_end;
        if (not_always_1653_55 > loop_count) {
            not_always_1653_55 = loop_count + 2;
            goto event_1653_55_end;
        }
        not_always_1653_55 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1653_55_end: ;
}
void Frames::event_func_12165()
{
    // event 1654_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1654_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1654_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_55();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1654_55_end: ;
}
void Frames::event_func_12166()
{
    // event 1655_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1655_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1655_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1655_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1655_55_end: ;
}
void Frames::event_func_12167()
{
    // event 1656_55
    bool or_result_1656_55 = false;
    bool or_temp_result_1656_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto or_event_1656_55_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1656_55_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1656_55_0_end;
        if (not_always_1656_55 > loop_count) {
            not_always_1656_55 = loop_count + 2;
            goto or_event_1656_55_0_end;
        }
        not_always_1656_55 = loop_count + 2;
        or_result_1656_55 = true;
        or_temp_result_1656_55_0 = true;
    }
    or_event_1656_55_0_end: ;
    // event 1656_55
    bool or_temp_result_1656_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto or_event_1656_55_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1656_55_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1656_55_1_end;
        if (not_always_1656_55 > loop_count) {
            not_always_1656_55 = loop_count + 2;
            goto or_event_1656_55_1_end;
        }
        not_always_1656_55 = loop_count + 2;
        or_result_1656_55 = true;
        or_temp_result_1656_55_1 = true;
        or_event_1656_55_1_end: ;
        if (!or_result_1656_55) goto or_final_or_event_1656_55_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1656_55_1_end: ;
}
void Frames::event_func_12168()
{
    // event 1657_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1657_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1657_55_end;
        if (not_always_1657_55 > loop_count) {
            not_always_1657_55 = loop_count + 2;
            goto event_1657_55_end;
        }
        not_always_1657_55 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1657_55_end: ;
}
void Frames::event_func_12169()
{
    // event 1658_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1658_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1658_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1658_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1658_55_end: ;
}
void Frames::event_func_12170()
{
    // event 1659_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1659_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1659_55_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1659_55_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1659_55_end: ;
}
void Frames::event_func_12171()
{
    // event 1660_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1660_55_end;
        if (!((global_values->get(27)) == (0))) goto event_1660_55_end;
        if (not_always_1660_55 > loop_count) {
            not_always_1660_55 = loop_count + 2;
            goto event_1660_55_end;
        }
        not_always_1660_55 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1660_55_end: ;
}
void Frames::event_func_12172()
{
    // event 1664_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1664_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1664_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1664_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1664_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1664_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1664_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1664_55_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1664_55_end: ;
}
void Frames::event_func_12173()
{
    // event 1665_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1665_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1665_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1665_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1665_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1665_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1665_55_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1665_55_end: ;
}
void Frames::event_func_12174()
{
    // event 1666_55
    bool or_result_1666_55 = false;
    bool or_temp_result_1666_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1666_55_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1666_55_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1666_55_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1666_55_0_end;
        or_result_1666_55 = true;
        or_temp_result_1666_55_0 = true;
    }
    or_event_1666_55_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1666_55_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1666_55
    bool or_temp_result_1666_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1666_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1666_55_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1666_55_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1666_55_1_end;
        or_result_1666_55 = true;
        or_temp_result_1666_55_1 = true;
        or_event_1666_55_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1666_55_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1666_55) goto or_final_or_event_1666_55_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1666_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1666_55_0 || or_temp_result_1666_55_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1666_55_1_end: ;
}
void Frames::event_func_12175()
{
    // event 1667_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1667_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1667_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1667_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1667_55_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1667_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1667_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1667_55_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1667_55_end: ;
}
void Frames::event_func_12176()
{
    // event 1668_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1668_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1668_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1668_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1668_55_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1668_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1668_55_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1668_55_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1668_55_end: ;
}
void Frames::event_func_12177()
{
    // event 1669_55
    bool or_result_1669_55 = false;
    bool or_temp_result_1669_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1669_55_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1669_55_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1669_55_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1669_55_0_end;
        or_result_1669_55 = true;
        or_temp_result_1669_55_0 = true;
    }
    or_event_1669_55_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1669_55_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1669_55
    bool or_temp_result_1669_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1669_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1669_55_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1669_55_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1669_55_1_end;
        or_result_1669_55 = true;
        or_temp_result_1669_55_1 = true;
        or_event_1669_55_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1669_55_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1669_55) goto or_final_or_event_1669_55_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1669_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1669_55_0 || or_temp_result_1669_55_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1669_55_1_end: ;
}
void Frames::event_func_12178()
{
    // event 1670_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1670_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1670_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1670_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1670_55_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1670_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1670_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1670_55_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1670_55_end: ;
}
void Frames::event_func_12179()
{
    // event 1671_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1671_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1671_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1671_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1671_55_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1671_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1671_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1671_55_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1671_55_end: ;
}
void Frames::event_func_12180()
{
    // event 1672_55
    bool or_result_1672_55 = false;
    bool or_temp_result_1672_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1672_55_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1672_55_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1672_55_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1672_55_0_end;
        or_result_1672_55 = true;
        or_temp_result_1672_55_0 = true;
    }
    or_event_1672_55_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1672_55_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1672_55
    bool or_temp_result_1672_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1672_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1672_55_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1672_55_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1672_55_1_end;
        or_result_1672_55 = true;
        or_temp_result_1672_55_1 = true;
        or_event_1672_55_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1672_55_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1672_55) goto or_final_or_event_1672_55_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1672_55_0 || or_temp_result_1672_55_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1672_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1672_55_1_end: ;
}
void Frames::event_func_12181()
{
    // event 1673_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1673_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1673_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1673_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1673_55_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1673_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1673_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1673_55_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1673_55_end: ;
}
void Frames::event_func_12182()
{
    // event 1674_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1674_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1674_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1674_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1674_55_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1674_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1674_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1674_55_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1674_55_end: ;
}
void Frames::event_func_12183()
{
    // event 1675_55
    bool or_result_1675_55 = false;
    bool or_temp_result_1675_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1675_55_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1675_55_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1675_55_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1675_55_0_end;
        or_result_1675_55 = true;
        or_temp_result_1675_55_0 = true;
    }
    or_event_1675_55_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1675_55_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1675_55
    bool or_temp_result_1675_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1675_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1675_55_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1675_55_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1675_55_1_end;
        or_result_1675_55 = true;
        or_temp_result_1675_55_1 = true;
        or_event_1675_55_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1675_55_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1675_55) goto or_final_or_event_1675_55_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1675_55_0 || or_temp_result_1675_55_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1675_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1675_55_1_end: ;
}
void Frames::event_func_12184()
{
    // event 1676_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1676_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1676_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1676_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1676_55_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1676_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1676_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1676_55_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1676_55_end: ;
}
void Frames::event_func_12185()
{
    // event 1677_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1677_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1677_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1677_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1677_55_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1677_55_end;
        if (!media.is_channel_playing(20-1)) goto event_1677_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1677_55_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1677_55_end: ;
}
void Frames::event_func_12186()
{
    // event 1678_55
    bool or_result_1678_55 = false;
    bool or_temp_result_1678_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1678_55_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1678_55_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1678_55_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1678_55_0_end;
        or_result_1678_55 = true;
        or_temp_result_1678_55_0 = true;
    }
    or_event_1678_55_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1678_55_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1678_55
    bool or_temp_result_1678_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1678_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1678_55_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1678_55_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1678_55_1_end;
        or_result_1678_55 = true;
        or_temp_result_1678_55_1 = true;
        or_event_1678_55_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1678_55_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1678_55) goto or_final_or_event_1678_55_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1678_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1678_55_0 || or_temp_result_1678_55_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1678_55_1_end: ;
}
void Frames::event_func_12187()
{
    // event 1679_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1679_55_end;
        if (!((global_values->get(27)) == (1))) goto event_1679_55_end;
        if (not_always_1679_55 > loop_count) {
            not_always_1679_55 = loop_count + 2;
            goto event_1679_55_end;
        }
        not_always_1679_55 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1679_55_end: ;
}
void Frames::event_func_12188()
{
    // event 1680_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1680_55_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1680_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1680_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1680_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1680_55_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1680_55_end: ;
}
void Frames::event_func_12189()
{
    // event 1681_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1681_55_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1681_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1681_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1681_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1681_55_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1681_55_end: ;
}
void Frames::event_func_12190()
{
    // event 1682_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1682_55_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1682_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1682_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1682_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1682_55_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1682_55_end: ;
}
void Frames::event_func_12191()
{
    // event 1683_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1683_55_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1683_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1683_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1683_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1683_55_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1683_55_end: ;
}
void Frames::event_func_12192()
{
    // event 1684_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1684_55_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1684_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1684_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1684_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1684_55_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1684_55_end: ;
}
void Frames::event_func_12193()
{
    // event 1685_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1685_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1685_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1685_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1685_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1685_55_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1685_55_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1685_55_end: ;
}
void Frames::event_func_12194()
{
    // event 1686_55
    bool or_result_1686_55 = false;
    bool or_temp_result_1686_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1686_55_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1686_55_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1686_55_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1686_55_0_end;
        or_result_1686_55 = true;
        or_temp_result_1686_55_0 = true;
    }
    or_event_1686_55_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1686_55_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1686_55
    bool or_temp_result_1686_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1686_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1686_55_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1686_55_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1686_55_1_end;
        or_result_1686_55 = true;
        or_temp_result_1686_55_1 = true;
        or_event_1686_55_1_end: ;
        if (or_temp_result_1686_55_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1686_55) goto or_final_or_event_1686_55_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1686_55_0 || or_temp_result_1686_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1686_55_0 || or_temp_result_1686_55_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1686_55_1_end: ;
}
void Frames::event_func_12195()
{
    // event 1687_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1687_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1687_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1687_55_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1687_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1687_55_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1687_55_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1687_55_end: ;
}
void Frames::event_func_12196()
{
    // event 1688_55
    bool or_result_1688_55 = false;
    bool or_temp_result_1688_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1688_55_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1688_55_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1688_55_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1688_55_0_end;
        or_result_1688_55 = true;
        or_temp_result_1688_55_0 = true;
    }
    or_event_1688_55_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1688_55_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1688_55
    bool or_temp_result_1688_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1688_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1688_55_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1688_55_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1688_55_1_end;
        or_result_1688_55 = true;
        or_temp_result_1688_55_1 = true;
        or_event_1688_55_1_end: ;
        if (or_temp_result_1688_55_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1688_55) goto or_final_or_event_1688_55_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1688_55_0 || or_temp_result_1688_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1688_55_0 || or_temp_result_1688_55_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1688_55_1_end: ;
}
void Frames::event_func_12197()
{
    // event 1689_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1689_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1689_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1689_55_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1689_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1689_55_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1689_55_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1689_55_end: ;
}
void Frames::event_func_12198()
{
    // event 1690_55
    bool or_result_1690_55 = false;
    bool or_temp_result_1690_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1690_55_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1690_55_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1690_55_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1690_55_0_end;
        or_result_1690_55 = true;
        or_temp_result_1690_55_0 = true;
    }
    or_event_1690_55_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1690_55_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1690_55
    bool or_temp_result_1690_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1690_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1690_55_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1690_55_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1690_55_1_end;
        or_result_1690_55 = true;
        or_temp_result_1690_55_1 = true;
        or_event_1690_55_1_end: ;
        if (or_temp_result_1690_55_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1690_55) goto or_final_or_event_1690_55_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1690_55_0 || or_temp_result_1690_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1690_55_0 || or_temp_result_1690_55_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1690_55_1_end: ;
}
void Frames::event_func_12199()
{
    // event 1691_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1691_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1691_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1691_55_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1691_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1691_55_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1691_55_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1691_55_end: ;
}
void Frames::event_func_12200()
{
    // event 1692_55
    bool or_result_1692_55 = false;
    bool or_temp_result_1692_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1692_55_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1692_55_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1692_55_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1692_55_0_end;
        or_result_1692_55 = true;
        or_temp_result_1692_55_0 = true;
    }
    or_event_1692_55_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1692_55_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1692_55
    bool or_temp_result_1692_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1692_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1692_55_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1692_55_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1692_55_1_end;
        or_result_1692_55 = true;
        or_temp_result_1692_55_1 = true;
        or_event_1692_55_1_end: ;
        if (or_temp_result_1692_55_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1692_55) goto or_final_or_event_1692_55_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1692_55_0 || or_temp_result_1692_55_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1692_55_0 || or_temp_result_1692_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1692_55_1_end: ;
}
void Frames::event_func_12201()
{
    // event 1693_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto event_1693_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1693_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1693_55_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1693_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1693_55_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1693_55_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1693_55_end: ;
}
void Frames::event_func_12202()
{
    // event 1694_55
    bool or_result_1694_55 = false;
    bool or_temp_result_1694_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1694_55_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1694_55_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1694_55_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1694_55_0_end;
        or_result_1694_55 = true;
        or_temp_result_1694_55_0 = true;
    }
    or_event_1694_55_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1694_55_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1694_55
    bool or_temp_result_1694_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1)) goto or_event_1694_55_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1694_55_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1694_55_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1694_55_1_end;
        or_result_1694_55 = true;
        or_temp_result_1694_55_1 = true;
        or_event_1694_55_1_end: ;
        if (or_temp_result_1694_55_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1694_55) goto or_final_or_event_1694_55_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1694_55_0 || or_temp_result_1694_55_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1694_55_0 || or_temp_result_1694_55_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1694_55_1_end: ;
}
void Frames::event_func_12203()
{
    // event 1696_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1696_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1696_55_end: ;
}
void Frames::event_func_12204()
{
    // event 1697_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1697_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(13, 1);
    }
    event_1697_55_end: ;
}
void Frames::event_func_12205()
{
    // event 1698_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1698_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (0))) goto event_1698_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
            group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1 = false;
    
    }
    event_1698_55_end: ;
}
void Frames::event_func_12206()
{
    // event 1699_55
    bool or_result_1699_55 = false;
    bool or_temp_result_1699_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto or_event_1699_55_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1699_55_0_end;
        or_result_1699_55 = true;
        or_temp_result_1699_55_0 = true;
    }
    or_event_1699_55_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1699_55_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1699_55
    bool or_temp_result_1699_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto or_event_1699_55_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1699_55_1_end;
        or_result_1699_55 = true;
        or_temp_result_1699_55_1 = true;
    }
    or_event_1699_55_1_end: ;
    if (or_temp_result_1699_55_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1699_55
    bool or_temp_result_1699_55_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto or_event_1699_55_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1699_55_2_end;
        or_result_1699_55 = true;
        or_temp_result_1699_55_2 = true;
        or_event_1699_55_2_end: ;
        if (or_temp_result_1699_55_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1699_55) goto or_final_or_event_1699_55_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1699_55_0 || or_temp_result_1699_55_1 || or_temp_result_1699_55_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1699_55_2_end: ;
}
void Frames::event_func_12207()
{
    // event 1700_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1700_55_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1700_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1700_55_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1700_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1700_55_end: ;
}
void Frames::event_func_12208()
{
    // event 1701_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1701_55_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1701_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1701_55_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1701_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(1);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
        media.play_id(SOUND_COMMON_GACHAPONSTART_187, -1, 1);
    }
    event_1701_55_end: ;
}
void Frames::event_func_12209()
{
    // event 1702_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1702_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (2))) goto event_1702_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->set_angle(((Active*)get_instance(npchologram2_3074_instances))->get_angle()+30, 0);
    }
    event_1702_55_end: ;
}
void Frames::event_func_12210()
{
    // event 1703_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1703_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (2))) goto event_1703_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (90))) goto event_1703_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(2);
        media.play_id(SOUND_ERROR_426, -1, 1);
    }
    event_1703_55_end: ;
}
void Frames::event_func_12211()
{
    // event 1704_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1704_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (2))) goto event_1704_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (130))) goto event_1704_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
    }
    event_1704_55_end: ;
}
void Frames::event_func_12212()
{
    // event 1705_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1705_55_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1705_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (2))) goto event_1705_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (7))) goto event_1705_55_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1705_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1705_55_end: ;
}
void Frames::event_func_12213()
{
    // event 1706_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1706_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1706_55_end;
        if (!((media.get_channel_position(-1 +20)) > (2000))) goto event_1706_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 15);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, -2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, -2);
    }
    event_1706_55_end: ;
}
void Frames::event_func_12214()
{
    // event 1707_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1707_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1707_55_end;
        if (!((media.get_channel_position(-1 +20)) > (2300))) goto event_1707_55_end;
        if (once_condition_1707_55) goto event_1707_55_end;
        once_condition_1707_55 = true;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(9, -90);
    }
    event_1707_55_end: ;
}
void Frames::event_func_12215()
{
    // event 1708_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1708_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1708_55_end;
        if (!((media.get_channel_position(-1 +20)) > (2600))) goto event_1708_55_end;
        if (once_condition_1708_55) goto event_1708_55_end;
        once_condition_1708_55 = true;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(9, -90);
    }
    event_1708_55_end: ;
}
void Frames::event_func_12216()
{
    // event 1709_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1709_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1709_55_end;
        if (!((media.get_channel_position(-1 +20)) > (2900))) goto event_1709_55_end;
        if (once_condition_1709_55) goto event_1709_55_end;
        once_condition_1709_55 = true;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(9, -90);
    }
    event_1709_55_end: ;
}
void Frames::event_func_12217()
{
    // event 1710_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1710_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1710_55_end;
        if (!((media.get_channel_position(-1 +20)) > (3100))) goto event_1710_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 65);
    }
    event_1710_55_end: ;
}
void Frames::event_func_12218()
{
    // event 1711_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1711_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1711_55_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1711_55_end;
        if (!((media.get_channel_position(-1 +20)) > (3700))) goto event_1711_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.enable(1);
    }
    event_1711_55_end: ;
}
void Frames::event_func_12219()
{
    // event 1712_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1712_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1712_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(9, 0);
    }
    event_1712_55_end: ;
}
void Frames::event_func_12220()
{
    // event 1713_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1713_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1713_55_end;
        if (once_condition_1713_55) goto event_1713_55_end;
        once_condition_1713_55 = true;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
    }
    event_1713_55_end: ;
}
void Frames::event_func_12221()
{
    // event 1714_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1714_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1714_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (138))) goto event_1714_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (190))) goto event_1714_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_angle(((Active*)get_instance(npcpangu_3073_instances))->get_angle()+1, 0);
    }
    event_1714_55_end: ;
}
void Frames::event_func_12222()
{
    // event 1715_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1715_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1715_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (190))) goto event_1715_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_angle(0, 0);
    }
    event_1715_55_end: ;
}
void Frames::event_func_12223()
{
    // event 1716_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1716_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1716_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (190))) goto event_1716_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (544))) goto event_1716_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 15);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, -2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, -2);
    }
    event_1716_55_end: ;
}
void Frames::event_func_12224()
{
    // event 1717_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1717_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1717_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (240))) goto event_1717_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(9, -90);
    }
    event_1717_55_end: ;
}
void Frames::event_func_12225()
{
    // event 1718_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1718_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1718_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (310))) goto event_1718_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (340))) goto event_1718_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 35);
    }
    event_1718_55_end: ;
}
void Frames::event_func_12226()
{
    // event 1719_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1719_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1719_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (330))) goto event_1719_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (340))) goto event_1719_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 35);
    }
    event_1719_55_end: ;
}
void Frames::event_func_12227()
{
    // event 1720_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1720_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1720_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (360))) goto event_1720_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (534))) goto event_1720_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 35);
    }
    event_1720_55_end: ;
}
void Frames::event_func_12228()
{
    // event 1721_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1721_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1721_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (360))) goto event_1721_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_angle(60, 0);
    }
    event_1721_55_end: ;
}
void Frames::event_func_12229()
{
    // event 1722_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1722_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1722_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (400))) goto event_1722_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_angle(340, 0);
    }
    event_1722_55_end: ;
}
void Frames::event_func_12230()
{
    // event 1723_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1723_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1723_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (500))) goto event_1723_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (534))) goto event_1723_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 35);
    }
    event_1723_55_end: ;
}
