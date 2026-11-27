#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16113()
{
    // event 1599_73
    {
        if (!(group_main_engine_1)) goto event_1599_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (109))) goto event_1599_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringleft_442_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringleft_442(-200, 0), 2);
            redspringleft_442_instances.add_back();
        }
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1599_73_end: ;
}
void Frames::event_func_16114()
{
    // event 1600_73
    {
        if (!(group_main_engine_1)) goto event_1600_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (110))) goto event_1600_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringright_441_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringright_441(-200, 0), 2);
            redspringright_441_instances.add_back();
        }
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1600_73_end: ;
}
void Frames::event_func_16115()
{
    // event 1601_73
    {
        if (!(group_main_engine_1)) goto event_1601_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (111))) goto event_1601_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringupright_438_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringupright_438(-200, 0), 2);
            redspringupright_438_instances.add_back();
        }
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1601_73_end: ;
}
void Frames::event_func_16116()
{
    // event 1602_73
    {
        if (!(group_main_engine_1)) goto event_1602_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (112))) goto event_1602_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringupleft_439_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringupleft_439(-200, 0), 2);
            redspringupleft_439_instances.add_back();
        }
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1602_73_end: ;
}
void Frames::event_func_16117()
{
    // event 1603_73
    {
        if (!(group_main_engine_1)) goto event_1603_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (113))) goto event_1603_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        hazardspikesup_558_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspikesup_3118(-200, 0), 2);
            hazardspikesup_558_instances.add_back();
        }
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1603_73_end: ;
}
void Frames::event_func_16118()
{
    // event 1604_73
    {
        if (!(group_main_engine_1)) goto event_1604_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (114))) goto event_1604_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        hazardspikesdown_559_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspikesdown_3106(-200, 0), 2);
            hazardspikesdown_559_instances.add_back();
        }
        for (ObjectIterator it(hazardspikesdown_559_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1604_73_end: ;
}
void Frames::event_func_16119()
{
    // event 1605_73
    {
        if (!(group_main_engine_1)) goto event_1605_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (115))) goto event_1605_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        hazardspikesleft_560_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspikesleft_3119(-200, 0), 2);
            hazardspikesleft_560_instances.add_back();
        }
        for (ObjectIterator it(hazardspikesleft_560_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1605_73_end: ;
}
void Frames::event_func_16120()
{
    // event 1606_73
    {
        if (!(group_main_engine_1)) goto event_1606_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (116))) goto event_1606_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        hazardspikesright_561_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspikesright_3120(-200, 0), 2);
            hazardspikesright_561_instances.add_back();
        }
        for (ObjectIterator it(hazardspikesright_561_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1606_73_end: ;
}
void Frames::event_func_16121()
{
    // event 1607_73
    {
        if (!(group_main_engine_1)) goto event_1607_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (117))) goto event_1607_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        laddertopmaker_3842_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_laddertopmaker_3842(-200, 0), 2);
            laddertopmaker_3842_instances.add_back();
        }
        for (ObjectIterator it(laddertopmaker_3842_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1607_73_end: ;
}
void Frames::event_func_16122()
{
    // event 1608_73
    {
        if (!(group_main_engine_1)) goto event_1608_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (118))) goto event_1608_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        laddermaker_3828_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_laddermaker_3828(-200, 0), 2);
            laddermaker_3828_instances.add_back();
        }
        for (ObjectIterator it(laddermaker_3828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1608_73_end: ;
}
void Frames::event_func_16123()
{
    // event 1609_73
    {
        if (!(group_main_engine_1)) goto event_1609_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (119))) goto event_1609_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objectspiketrapmask_3836_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectspiketrapmask_3836(-200, 0), 2);
            objectspiketrapmask_3836_instances.add_back();
        }
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1609_73_end: ;
}
void Frames::event_func_16124()
{
    // event 1610_73
    {
        if (!(group_main_engine_1)) goto event_1610_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (120))) goto event_1610_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objectplatformmaker1_3838_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectplatformmaker1_3838(-200, 0), 2);
            objectplatformmaker1_3838_instances.add_back();
        }
        for (ObjectIterator it(objectplatformmaker1_3838_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1610_73_end: ;
}
void Frames::event_func_16125()
{
    // event 1611_73
    {
        if (!(group_main_engine_1)) goto event_1611_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (121))) goto event_1611_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objectplatformmaker2_3839_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectplatformmaker2_3839(-200, 0), 2);
            objectplatformmaker2_3839_instances.add_back();
        }
        for (ObjectIterator it(objectplatformmaker2_3839_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1611_73_end: ;
}
void Frames::event_func_16126()
{
    // event 1612_73
    {
        if (!(group_main_engine_1)) goto event_1612_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (122))) goto event_1612_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        gimmickspikechainmaker_3843_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickspikechainmaker_3843(-200, 0), 2);
            gimmickspikechainmaker_3843_instances.add_back();
        }
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1612_73_end: ;
}
void Frames::event_func_16127()
{
    // event 1613_73
    {
        if (!(group_main_engine_1)) goto event_1613_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (123))) goto event_1613_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        gimmickhangingidlebar_3827_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickhangingidlebar_3827(-200, 0), 2);
            gimmickhangingidlebar_3827_instances.add_back();
        }
        for (ObjectIterator it(gimmickhangingidlebar_3827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1613_73_end: ;
}
void Frames::event_func_16128()
{
    // event 1614_73
    {
        if (!(group_main_engine_1)) goto event_1614_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (200))) goto event_1614_73_end;
        if (!((startlocationmaker_3830_instances.size()) > (0))) goto event_1614_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1614_73_end: ;
}
void Frames::event_func_16129()
{
    // event 1615_73
    {
        if (!(group_main_engine_1)) goto event_1615_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (200))) goto event_1615_73_end;
        if (!((startlocationmaker_3830_instances.size()) == (0))) goto event_1615_73_end;
        startlocationmaker_3830_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_startlocationmaker_3830(-200, 0), 2);
            startlocationmaker_3830_instances.add_back();
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1615_73_end: ;
}
void Frames::event_func_16130()
{
    // event 1616_73
    {
        if (!(group_main_engine_1)) goto event_1616_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (201))) goto event_1616_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objecttargetmaker_3829_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objecttargetmaker_3829(-200, 0), 2);
            objecttargetmaker_3829_instances.add_back();
        }
        for (ObjectIterator it(objecttargetmaker_3829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1616_73_end: ;
}
void Frames::event_func_16131()
{
    // event 1617_73
    {
        if (!(group_main_engine_1)) goto event_1617_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (202))) goto event_1617_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objectmonitormaker_3831_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectmonitormaker_3831(-200, 0), 2);
            objectmonitormaker_3831_instances.add_back();
        }
        for (ObjectIterator it(objectmonitormaker_3831_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1617_73_end: ;
}
void Frames::event_func_16132()
{
    // event 1618_73
    {
        if (!(group_main_engine_1)) goto event_1618_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (203))) goto event_1618_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        objectbombmaker_3832_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectbombmaker_3832(-200, 0), 2);
            objectbombmaker_3832_instances.add_back();
        }
        for (ObjectIterator it(objectbombmaker_3832_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1618_73_end: ;
}
void Frames::loop_create_73()
{
    event_func_16076();
    event_func_16077();
    event_func_16078();
    event_func_16079();
    event_func_16080();
    event_func_16081();
    event_func_16082();
    event_func_16083();
    event_func_16084();
    event_func_16085();
    event_func_16086();
    event_func_16087();
    event_func_16088();
    event_func_16089();
    event_func_16090();
    event_func_16091();
    event_func_16092();
    event_func_16093();
    event_func_16094();
    event_func_16095();
    event_func_16096();
    event_func_16097();
    event_func_16098();
    event_func_16099();
    event_func_16100();
    event_func_16101();
    event_func_16102();
    event_func_16103();
    event_func_16104();
    event_func_16105();
    event_func_16106();
    event_func_16107();
    event_func_16108();
    event_func_16109();
    event_func_16110();
    event_func_16111();
    event_func_16112();
    event_func_16113();
    event_func_16114();
    event_func_16115();
    event_func_16116();
    event_func_16117();
    event_func_16118();
    event_func_16119();
    event_func_16120();
    event_func_16121();
    event_func_16122();
    event_func_16123();
    event_func_16124();
    event_func_16125();
    event_func_16126();
    event_func_16127();
    event_func_16128();
    event_func_16129();
    event_func_16130();
    event_func_16131();
    event_func_16132();
}
void Frames::event_func_16133()
{
    // event 1419_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1419_73_end;
        if (!((((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262)) > (0))) goto event_1419_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, ((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(0, 3-loop_load_index);
        {
            loop_create_running = true;
            int times = int(1);
            loop_create_index = 0;
            while (loop_create_index < times) {
                loop_create_73();
                if (!loop_create_running) break;
                loop_create_index++;
            }
        }
    }
    event_1419_73_end: ;
}
void Frames::event_func_16134()
{
    // event 1420_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1420_73_end;
        if (!((((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262)) > (0))) goto event_1420_73_end;
        {
            qualifier_7.clear_selection();
            for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
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
            minibossgolem_1252_instances.clear_selection();
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
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
            qualifier_29.clear_selection();
            for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1420_73_end: ;
}
void Frames::event_func_16135()
{
    // event 1542_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1)) goto event_1542_73_end;
        if (!((((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262)) > (0))) goto event_1542_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, ((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262));
        {
            loop_create_running = true;
            int times = int(1);
            loop_create_index = 0;
            while (loop_create_index < times) {
                loop_create_73();
                if (!loop_create_running) break;
                loop_create_index++;
            }
        }
    }
    event_1542_73_end: ;
}
void Frames::event_func_16136()
{
    // event 1543_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1)) goto event_1543_73_end;
        if (!((((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_id_262)) > (0))) goto event_1543_73_end;
        {
            qualifier_7.clear_selection();
            for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
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
            minibossgolem_1252_instances.clear_selection();
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
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
            qualifier_29.clear_selection();
            for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->set_x(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_x_263));
            ((Active*)*it)->set_y(((INI*)get_instance(ini_3855_instances))->get_value(str_object_261+number_to_string(loop_load_index), str_y_264));
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
    }
    event_1543_73_end: ;
}
void Frames::loop_load_73()
{
    event_func_16133();
    event_func_16134();
    event_func_16135();
    event_func_16136();
}
void Frames::event_func_16137()
{
    // event 1263_73
    {
        if (!(group_main_engine_1)) goto event_1263_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1263_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1263_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1263_73_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringup_440_instances)) goto event_1263_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1263_73_0; single_instance_1263_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringup_440_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1263_73_0 == NULL)
                    single_instance_1263_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1263_73_0))->set_layer(((Active*)get_single(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1263_73_end: ;
}
void Frames::event_func_16138()
{
    // event 1267_73
    {
        if (!(group_main_engine_1)) goto event_1267_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1267_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1267_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1267_73_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupright_438_instances)) goto event_1267_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1267_73_0; single_instance_1267_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupright_438_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1267_73_0 == NULL)
                    single_instance_1267_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1267_73_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1267_73_end: ;
}
void Frames::event_func_16139()
{
    // event 1268_73
    {
        if (!(group_main_engine_1)) goto event_1268_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1268_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1268_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1268_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1268_73_end;
        playersensorleftbig_391_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, redspringupright_438_instances)) goto event_1268_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1268_73_0; single_instance_1268_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupright_438_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1268_73_0 == NULL)
                    single_instance_1268_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1268_73_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1268_73_end: ;
}
void Frames::event_func_16140()
{
    // event 1269_73
    {
        if (!(group_main_engine_1)) goto event_1269_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1269_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1269_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1269_73_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupleft_439_instances)) goto event_1269_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1269_73_0; single_instance_1269_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupleft_439_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1269_73_0 == NULL)
                    single_instance_1269_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1269_73_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1269_73_end: ;
}
void Frames::event_func_16141()
{
    // event 1270_73
    {
        if (!(group_main_engine_1)) goto event_1270_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1270_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1270_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1270_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1270_73_end;
        playersensorrightbig_393_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, redspringupleft_439_instances)) goto event_1270_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1270_73_0; single_instance_1270_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupleft_439_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1270_73_0 == NULL)
                    single_instance_1270_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1270_73_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1270_73_end: ;
}
void Frames::event_func_16142()
{
    // event 1271_73
    {
        if (!(group_main_engine_1)) goto event_1271_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1271_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1271_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1271_73_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringup_434_instances)) goto event_1271_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1271_73_0; single_instance_1271_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringup_434_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1271_73_0 == NULL)
                    single_instance_1271_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1271_73_0))->set_layer(((Active*)get_single(yellowspringup_434_instances, default_active_instance))->layer->index+1-1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1271_73_end: ;
}
void Frames::event_func_16143()
{
    // event 1275_73
    {
        if (!(group_main_engine_1)) goto event_1275_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1275_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1275_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1275_73_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupright_433_instances)) goto event_1275_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1275_73_0; single_instance_1275_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupright_433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1275_73_0 == NULL)
                    single_instance_1275_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1275_73_0))->set_layer(((Active*)get_single(yellowspringupright_433_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1275_73_end: ;
}
void Frames::event_func_16144()
{
    // event 1276_73
    {
        if (!(group_main_engine_1)) goto event_1276_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1276_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1276_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1276_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1276_73_end;
        playersensorleftbig_391_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, yellowspringupright_433_instances)) goto event_1276_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1276_73_0; single_instance_1276_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupright_433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1276_73_0 == NULL)
                    single_instance_1276_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1276_73_0))->set_layer(((Active*)get_single(yellowspringupright_433_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1276_73_end: ;
}
void Frames::event_func_16145()
{
    // event 1277_73
    {
        if (!(group_main_engine_1)) goto event_1277_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1277_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1277_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1277_73_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupleft_432_instances)) goto event_1277_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1277_73_0; single_instance_1277_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupleft_432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1277_73_0 == NULL)
                    single_instance_1277_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1277_73_0))->set_layer(((Active*)get_single(yellowspringupleft_432_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1277_73_end: ;
}
void Frames::event_func_16146()
{
    // event 1278_73
    {
        if (!(group_main_engine_1)) goto event_1278_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1278_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1278_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1278_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1278_73_end;
        playersensorrightbig_393_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, yellowspringupleft_432_instances)) goto event_1278_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1278_73_0; single_instance_1278_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupleft_432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1278_73_0 == NULL)
                    single_instance_1278_73_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1278_73_0))->set_layer(((Active*)get_single(yellowspringupleft_432_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1278_73_end: ;
}
void Frames::loop_player01_interruption_control_73()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_1308();
    event_func_16137();
    event_func_2713();
    event_func_2714();
    event_func_2715();
    event_func_16138();
    event_func_16139();
    event_func_16140();
    event_func_16141();
    event_func_16142();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_16143();
    event_func_16144();
    event_func_16145();
    event_func_16146();
}
void Frames::loop_wrapper_sound_kick1_73(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_73(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_73(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_73(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_73(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_process_call_unlock_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_process_call_reset_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_73(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_73(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_73(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_73(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_73(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_73(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_play_music_2_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_46();
}
void Frames::loop_wrapper_sound_attack1_73(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_73(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_73(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_73(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_73(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_73();
}
void Frames::loop_wrapper_play_music_6_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_73();
}
void Frames::loop_wrapper_sound_go0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_process_call_me_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_73();
}
void Frames::loop_wrapper_play_music_8_73(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_cyclone0_73(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_73(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_16147()
{
    // event 1453_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1453_73_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1453_73_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        media.play_id(SOUND_COMMON_TARGETHIT_145, -1, 1);
        effectsconfetti_2890_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(12));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
        }
        FrameObject * single_instance_1453_73_1; single_instance_1453_73_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1453_73_1 == NULL)
                single_instance_1453_73_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->flags.disable(6);
    }
    event_1453_73_end: ;
}
void Frames::col_2_73()
{
    event_func_16147();
}
void Frames::event_func_16148()
{
    // event 1058_73
    {
        if (!(group_main_engine_1)) goto event_1058_73_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1058_73_end;
        if (((Active*)col_instance_2)->is_near_border(-50)) goto event_1058_73_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_73();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1058_73_end: ;
}
void Frames::col_3_73()
{
    event_func_16148();
}
void Frames::event_func_16149()
{
    // event 1453_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1453_73_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(6))) goto event_1453_73_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        media.play_id(SOUND_COMMON_TARGETHIT_145, -1, 1);
        effectsconfetti_2890_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsconfetti_2890(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsconfetti_2890_instances.add_back();
        }
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(12));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
        }
        FrameObject * single_instance_1453_73_1; single_instance_1453_73_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1453_73_1 == NULL)
                single_instance_1453_73_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(6);
    }
    event_1453_73_end: ;
}
void Frames::col_13_73()
{
    event_func_16149();
}
void Frames::test_collisions_73()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_7, objecttarget_367_instances, 536870912, 1, (EventFunction)&Frames::col_2_73);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_3_73);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 67108864, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
    for (it1 = objecttarget_367_instances.begin(); it1 != objecttarget_367_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_73();
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
void Frames::event_func_16150()
{
    // event 40_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_40_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_40_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_40_73_end;
        if (not_always_40_73 > loop_count) {
            not_always_40_73 = loop_count + 2;
            goto event_40_73_end;
        }
        not_always_40_73 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_40_73_end: ;
}
void Frames::event_func_16151()
{
    // event 41_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_41_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_41_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_41_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_41_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_41_73_end;
        if (not_always_41_73 > loop_count) {
            not_always_41_73 = loop_count + 2;
            goto event_41_73_end;
        }
        not_always_41_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -7);
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0334);
            ((Active*)*it)->alterables->values.set(15, 0.2);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_41_73_end: ;
}
void Frames::event_func_16152()
{
    // event 42_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_42_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_42_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_42_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_42_73_end;
        if (not_always_42_73 > loop_count) {
            not_always_42_73 = loop_count + 2;
            goto event_42_73_end;
        }
        not_always_42_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -7);
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0334);
            ((Active*)*it)->alterables->values.set(15, 0.2);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_42_73_end: ;
}
void Frames::event_func_16153()
{
    // event 43_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_43_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_43_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_43_73_end;
        if (not_always_43_73 > loop_count) {
            not_always_43_73 = loop_count + 2;
            goto event_43_73_end;
        }
        not_always_43_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.05688);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -6);
            ((Active*)*it)->alterables->values.set(1, -2);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0217);
            ((Active*)*it)->alterables->values.set(15, 0.12);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_43_73_end: ;
}
void Frames::event_func_16154()
{
    // event 44_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_44_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_44_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_44_73_end;
        if (not_always_44_73 > loop_count) {
            not_always_44_73 = loop_count + 2;
            goto event_44_73_end;
        }
        not_always_44_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.05688);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -6);
            ((Active*)*it)->alterables->values.set(1, -2);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0217);
            ((Active*)*it)->alterables->values.set(15, 0.12);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_44_73_end: ;
}
void Frames::event_func_16155()
{
    // event 47_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_47_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_47_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_47_73_end;
        if (not_always_47_73 > loop_count) {
            not_always_47_73 = loop_count + 2;
            goto event_47_73_end;
        }
        not_always_47_73 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_47_73_end: ;
}
void Frames::event_func_16156()
{
    // event 48_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_48_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_48_73_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (1))) goto event_48_73_end;
        if (once_condition_48_73) goto event_48_73_end;
        once_condition_48_73 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
        }
    }
    event_48_73_end: ;
}
void Frames::event_func_16157()
{
    // event 49_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_49_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_49_73_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (2))) goto event_49_73_end;
        if (once_condition_49_73) goto event_49_73_end;
        once_condition_49_73 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
        }
    }
    event_49_73_end: ;
}
void Frames::event_func_16158()
{
    // event 50_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_50_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_50_73_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (3))) goto event_50_73_end;
        if (once_condition_50_73) goto event_50_73_end;
        once_condition_50_73 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
        }
    }
    event_50_73_end: ;
}
void Frames::event_func_16159()
{
    // event 51_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_51_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_51_73_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (4))) goto event_51_73_end;
        if (once_condition_51_73) goto event_51_73_end;
        once_condition_51_73 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
        }
    }
    event_51_73_end: ;
}
void Frames::event_func_16160()
{
    // event 53_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_53_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_53_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_53_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_53_73_end;
        if (not_always_53_73 > loop_count) {
            not_always_53_73 = loop_count + 2;
            goto event_53_73_end;
        }
        not_always_53_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -7);
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0334);
            ((Active*)*it)->alterables->values.set(15, 0.2);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_53_73_end: ;
}
void Frames::event_func_16161()
{
    // event 54_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_54_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_54_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_54_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_54_73_end;
        if (not_always_54_73 > loop_count) {
            not_always_54_73 = loop_count + 2;
            goto event_54_73_end;
        }
        not_always_54_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -7);
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0334);
            ((Active*)*it)->alterables->values.set(15, 0.2);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_54_73_end: ;
}
void Frames::event_func_16162()
{
    // event 65_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_65_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_65_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_65_73_end;
        if (not_always_65_73 > loop_count) {
            not_always_65_73 = loop_count + 2;
            goto event_65_73_end;
        }
        not_always_65_73 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_65_73_end: ;
}
void Frames::event_func_16163()
{
    // event 66_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_66_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_66_73_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_66_73_end;
        if (not_always_66_73 > loop_count) {
            not_always_66_73 = loop_count + 2;
            goto event_66_73_end;
        }
        not_always_66_73 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_66_73_end: ;
}
void Frames::event_func_16164()
{
    // event 67_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_67_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_67_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_67_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_67_73_end;
        if (not_always_67_73 > loop_count) {
            not_always_67_73 = loop_count + 2;
            goto event_67_73_end;
        }
        not_always_67_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 4.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.5);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -7);
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(4, -170);
            ((Active*)*it)->alterables->values.set(6, 170);
            ((Active*)*it)->alterables->values.set(7, 4);
            ((Active*)*it)->alterables->values.set(8, 0.5);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(11, 0.01);
            ((Active*)*it)->alterables->values.set(12, 6);
            ((Active*)*it)->alterables->values.set(13, 12);
            ((Active*)*it)->alterables->values.set(14, 0.0334);
            ((Active*)*it)->alterables->values.set(15, 0.2);
            ((Active*)*it)->alterables->values.set(16, 0.035);
            ((Active*)*it)->alterables->values.set(17, 0.25);
            ((Active*)*it)->alterables->values.set(18, 0.7);
        }
    }
    event_67_73_end: ;
}
