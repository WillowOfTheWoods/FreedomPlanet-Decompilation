#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11843()
{
    // event 4_50
    {
        if (!(group_main_engine_1)) goto event_4_50_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 81);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 32);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_4_50_end: ;
}
void Frames::event_func_11844()
{
    // event 21_50
    {
        if (!(group_main_engine_1)) goto event_21_50_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.92);
    }
    event_21_50_end: ;
}
void Frames::event_func_11845()
{
    // event 1409_50
    {
        if (!(group_main_engine_1)) goto event_1409_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
    }
    event_1409_50_end: ;
}
void Frames::event_func_11846()
{
    // event 1435_50
    {
        if (!(group_main_engine_1)) goto event_1435_50_end;
        objecttimegate_2965_instances.clear_selection();
        spread_value(objecttimegate_2965_instances, 0, 0);
        objecttimegatepiece_2966_instances.clear_selection();
        spread_value(objecttimegatepiece_2966_instances, 0, 0);
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%10);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(0)*36);
        }
        spread_value(objecttimegatepiece_2966_instances, 1, 0);
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_floor(((Active*)*it)->alterables->values.get(1)/math_helper/10));
        }
    }
    event_1435_50_end: ;
}
void Frames::event_func_11847()
{
    // event 1446_50
    {
        if (!(group_main_engine_1)) goto event_1446_50_end;
        objectpinwheel_2956_instances.clear_selection();
        spread_value(objectpinwheel_2956_instances, 0, 0);
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*30)%math_helper%360);
            ((Active*)*it)->move_back();
        }
    }
    event_1446_50_end: ;
}
void Frames::event_func_11848()
{
    // event 1456_50
    {
        if (!(group_main_engine_1)) goto event_1456_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(6));
            ((Active*)*it)->restore_frame();
        }
        spread_value(enemystinger_2891_instances, 8, 0);
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)*10)%math_helper%50);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
    }
    event_1456_50_end: ;
}
void Frames::event_func_11849()
{
    // event 1486_50
    {
        if (!(group_main_engine_1)) goto event_1486_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1486_50_end: ;
}
void Frames::event_func_11850()
{
    // event 1495_50
    {
        if (!(group_main_engine_1)) goto event_1495_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1495_50_end: ;
}
void Frames::event_func_11851()
{
    // event 1685_50
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1685_50_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
    }
    event_1685_50_end: ;
}
void Frames::on_frame_51_start_events()
{
    event_func_3980();
    event_func_11842();
    event_func_4133();
    event_func_11843();
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
    event_func_11844();
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
    event_func_11845();
    event_func_9635();
    event_func_3275();
    event_func_11846();
    event_func_11847();
    event_func_11848();
    event_func_11849();
    event_func_11850();
    event_func_2686();
    event_func_2687();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_11851();
    event_func_3999();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_51_init()
{
    index = 50;
    width = 13840;
    height = 1864;
    virtual_width = 13840;
    virtual_height = 1864;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &active_2962_instances, &levellagoonplatform1_2967_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &levellagoonplatform1_2967_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemystinger_2891_instances, &enemysunflora_2960_instances, &enemystingernest_2961_instances, NULL};
    qualifier_20.set(3, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(7, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &pllayer11_2957_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, &pllayer12_2964_instances, NULL};
    qualifier_7.set(30, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &objecttimegatepiece_2966_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer11_2957_instances, &pllayer12_2964_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levellagoonplatform1_2967_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levellagoonplatform1_2967_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2884(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2885(0, 120), 0);
    add_background_object(create_levelparallaxpiece2_2886(0, 40), 0);
    add_background_object(create_levelparallaxpiece4_858(0, 1032), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 144), 0);
    add_background_object(create_levelparallaxpiece5_2887(0, 136), 0);
    add_background_object(create_levelparallaxpiece6_2888(0, 136), 0);
    add_background_object(create_plbackwall7_2892(6528, 368), 1);
    add_background_object(create_plbackwall7_2892(1944, 1368), 1);
    add_background_object(create_plbackwall9_2893(2072, 888), 1);
    add_background_object(create_plbackwall7_2892(2008, 1208), 1);
    add_background_object(create_plbackwall7_2892(2072, 1048), 1);
    add_background_object(create_plbackwall7_2892(2072, 728), 1);
    add_background_object(create_plbackwall7_2892(2416, 952), 1);
    add_background_object(create_plbackwall9_2893(2416, 1112), 1);
    add_background_object(create_plbackwall7_2892(2480, 792), 1);
    add_background_object(create_plbackwall9_2893(2480, 1272), 1);
    add_background_object(create_plbackwall9_2893(2544, 1432), 1);
    add_background_object(create_plbackwall7_2892(2544, 632), 1);
    add_background_object(create_plbackwall9_2893(2728, 632), 1);
    add_background_object(create_plbackwall9_2893(2792, 792), 1);
    add_background_object(create_plbackwall7_2892(2792, 952), 1);
    add_background_object(create_plbackwall7_2892(2728, 1112), 1);
    add_background_object(create_plbackwall9_2893(2728, 1272), 1);
    add_background_object(create_plbackwall7_2892(2728, 1432), 1);
    add_background_object(create_plbackwall9_2893(2968, 1344), 1);
    add_background_object(create_plbackwall7_2892(2968, 1504), 1);
    add_background_object(create_plbackwall7_2892(2968, 1184), 1);
    add_background_object(create_plbackwall7_2892(3032, 1024), 1);
    add_background_object(create_plbackwall9_2893(3032, 864), 1);
    add_background_object(create_plbackwall7_2892(3032, 704), 1);
    add_background_object(create_plbackwall7_2892(3096, 544), 1);
    add_background_object(create_plbackwall9_2893(3472, 1440), 1);
    add_background_object(create_plbackwall9_2893(3408, 1280), 1);
    add_background_object(create_plbackwall7_2892(3408, 1120), 1);
    add_background_object(create_plbackwall9_2893(3408, 960), 1);
    add_background_object(create_plbackwall7_2892(3408, 800), 1);
    add_background_object(create_plbackwall7_2892(3472, 640), 1);
    add_background_object(create_plbackwall9_2893(3472, 480), 1);
    add_background_object(create_plbackwall7_2892(3816, 1440), 1);
    add_background_object(create_plbackwall7_2892(3880, 1280), 1);
    add_background_object(create_plbackwall7_2892(3944, 1120), 1);
    add_background_object(create_plbackwall7_2892(4008, 960), 1);
    add_background_object(create_plbackwall9_2893(4008, 800), 1);
    add_background_object(create_plbackwall7_2892(4008, 640), 1);
    add_background_object(create_plbackwall7_2892(4072, 480), 1);
    add_background_object(create_plbackwall9_2893(4272, 1440), 1);
    add_background_object(create_plbackwall7_2892(4272, 1280), 1);
    add_background_object(create_plbackwall9_2893(4272, 1120), 1);
    add_background_object(create_plbackwall7_2892(4272, 960), 1);
    add_background_object(create_plbackwall7_2892(4336, 800), 1);
    add_background_object(create_plbackwall7_2892(4400, 640), 1);
    add_background_object(create_plbackwall9_2893(4400, 480), 1);
    add_background_object(create_plbackwall9_2893(4592, 640), 1);
    add_background_object(create_plbackwall9_2893(4656, 800), 1);
    add_background_object(create_plbackwall7_2892(4656, 960), 1);
    add_background_object(create_plbackwall7_2892(4592, 1120), 1);
    add_background_object(create_plbackwall9_2893(4592, 1280), 1);
    add_background_object(create_plbackwall7_2892(4592, 1440), 1);
    add_background_object(create_plbackwall9_2893(4832, 1352), 1);
    add_background_object(create_plbackwall7_2892(4832, 1512), 1);
    add_background_object(create_plbackwall7_2892(4832, 1192), 1);
    add_background_object(create_plbackwall7_2892(4896, 1032), 1);
    add_background_object(create_plbackwall9_2893(4896, 872), 1);
    add_background_object(create_plbackwall7_2892(4896, 712), 1);
    add_background_object(create_plbackwall7_2892(4960, 552), 1);
    add_background_object(create_plbackwall9_2893(5336, 1448), 1);
    add_background_object(create_plbackwall9_2893(5272, 1288), 1);
    add_background_object(create_plbackwall7_2892(5272, 1128), 1);
    add_background_object(create_plbackwall9_2893(5272, 968), 1);
    add_background_object(create_plbackwall7_2892(5272, 808), 1);
    add_background_object(create_plbackwall7_2892(5336, 648), 1);
    add_background_object(create_plbackwall9_2893(5336, 488), 1);
    add_background_object(create_plbackwall7_2892(5680, 1448), 1);
    add_background_object(create_plbackwall7_2892(5744, 1288), 1);
    add_background_object(create_plbackwall7_2892(5808, 1128), 1);
    add_background_object(create_plbackwall7_2892(5872, 968), 1);
    add_background_object(create_plbackwall9_2893(5872, 808), 1);
    add_background_object(create_plbackwall7_2892(5872, 648), 1);
    add_background_object(create_plbackwall7_2892(5936, 488), 1);
    add_background_object(create_plbackwall9_2893(6136, 1448), 1);
    add_background_object(create_plbackwall7_2892(6136, 1288), 1);
    add_background_object(create_plbackwall9_2893(6136, 1128), 1);
    add_background_object(create_plbackwall7_2892(6136, 968), 1);
    add_background_object(create_plbackwall7_2892(6200, 808), 1);
    add_background_object(create_plbackwall7_2892(6264, 648), 1);
    add_background_object(create_plbackwall9_2893(6264, 488), 1);
    add_background_object(create_plbackwall7_2892(4592, 480), 1);
    add_background_object(create_plbackwall9_2893(6400, 1488), 1);
    add_background_object(create_plbackwall7_2892(6400, 1328), 1);
    add_background_object(create_plbackwall9_2893(6400, 1168), 1);
    add_background_object(create_plbackwall7_2892(6400, 1008), 1);
    add_background_object(create_plbackwall7_2892(6464, 848), 1);
    add_background_object(create_plbackwall7_2892(6464, 528), 1);
    add_background_object(create_plbackwall9_2893(6464, 688), 1);
    add_background_object(create_plbackwall9_2893(6744, 1448), 1);
    add_background_object(create_plbackwall9_2893(6680, 1288), 1);
    add_background_object(create_plbackwall7_2892(6680, 1128), 1);
    add_background_object(create_plbackwall9_2893(6680, 968), 1);
    add_background_object(create_plbackwall7_2892(6680, 808), 1);
    add_background_object(create_plbackwall7_2892(6744, 648), 1);
    add_background_object(create_plbackwall9_2893(6744, 488), 1);
    add_background_object(create_plbackwall9_2893(7160, 1456), 1);
    add_background_object(create_plbackwall9_2893(7096, 1296), 1);
    add_background_object(create_plbackwall7_2892(7096, 1136), 1);
    add_background_object(create_plbackwall9_2893(7096, 976), 1);
    add_background_object(create_plbackwall7_2892(7096, 816), 1);
    add_background_object(create_plbackwall7_2892(7160, 656), 1);
    add_background_object(create_plbackwall9_2893(7160, 496), 1);
    add_background_object(create_plbackwall7_2892(2136, 568), 1);
    add_background_object(create_plbackwall7_2892(2200, 408), 1);
    add_background_object(create_plbackwall7_2892(2264, 248), 1);
    add_background_object(create_plbackwall7_2892(2328, 88), 1);
    add_background_object(create_plbackwall7_2892(5024, 392), 1);
    add_background_object(create_plbackwall9_2893(5272, 328), 1);
    add_background_object(create_plbackwall7_2892(6000, 328), 1);
    add_background_object(create_plbackwall9_2893(6200, 328), 1);
    add_background_object(create_plbackwall9_2893(6680, 328), 1);
    add_background_object(create_plbackwall7_2892(10744, 688), 1);
    add_background_object(create_plbackwall9_2893(10744, 528), 1);
    add_background_object(create_plbackwall7_2892(10744, 368), 1);
    add_background_object(create_plbackwall7_2892(10744, 1008), 1);
    add_background_object(create_plbackwall9_2893(10744, 848), 1);
    add_background_object(create_plbackwall9_2893(10744, 1168), 1);
    add_background_object(create_plbackwall7_2892(10808, 208), 1);
    add_background_object(create_plbackwall7_2892(10872, 48), 1);
    add_background_object(create_plbackwall7_2892(10744, 1328), 1);
    add_background_object(create_plbackwall7_2892(10440, 1112), 1);
    add_background_object(create_plbackwall7_2892(10504, 952), 1);
    add_background_object(create_plbackwall9_2893(10504, 792), 1);
    add_background_object(create_plbackwall9_2893(10440, 1272), 1);
    add_background_object(create_plbackwall9_2893(10440, 632), 1);
    add_background_object(create_plbackwall7_2892(10440, 472), 1);
    add_background_object(create_plbackwall7_2892(10504, 312), 1);
    add_background_object(create_plbackwall9_2893(10504, 152), 1);
    add_background_object(create_plbackwall7_2892(10504, -8), 1);
    add_background_object(create_plbackwall7_2892(10936, -112), 1);
    add_background_object(create_plbackwall7_2892(9480, 680), 1);
    add_background_object(create_plbackwall9_2893(9480, 520), 1);
    add_background_object(create_plbackwall7_2892(9480, 360), 1);
    add_background_object(create_plbackwall7_2892(9480, 1000), 1);
    add_background_object(create_plbackwall9_2893(9480, 840), 1);
    add_background_object(create_plbackwall9_2893(9480, 1160), 1);
    add_background_object(create_plbackwall7_2892(9544, 200), 1);
    add_background_object(create_plbackwall7_2892(9608, 40), 1);
    add_background_object(create_plbackwall7_2892(9480, 1320), 1);
    add_background_object(create_plbackwall7_2892(9176, 1104), 1);
    add_background_object(create_plbackwall7_2892(9240, 944), 1);
    add_background_object(create_plbackwall9_2893(9240, 784), 1);
    add_background_object(create_plbackwall9_2893(9176, 1264), 1);
    add_background_object(create_plbackwall9_2893(9176, 624), 1);
    add_background_object(create_plbackwall7_2892(9176, 464), 1);
    add_background_object(create_plbackwall7_2892(9240, 304), 1);
    add_background_object(create_plbackwall9_2893(9240, 144), 1);
    add_background_object(create_plbackwall7_2892(9240, -16), 1);
    add_background_object(create_plbackwall7_2892(9672, -120), 1);
    add_background_object(create_plbackwall7_2892(7160, 336), 1);
    add_background_object(create_plbackwall7_2892(7224, 176), 1);
    add_background_object(create_plbackwall7_2892(6680, 168), 1);
    add_background_object(create_plbackwall7_2892(6744, 8), 1);
    add_background_object(create_plbackwall7_2892(7288, 16), 1);
    add_background_object(create_plbackwall4_2894(9680, 472), 2);
    add_background_object(create_plbackwall1_2895(10008, 1112), 2);
    add_background_object(create_plbackwall5_2896(10136, 984), 2);
    add_background_object(create_plbackwall6_2897(9696, 976), 2);
    add_background_object(create_plbackwall5_2896(9696, 848), 2);
    add_background_object(create_plruins5_2898(9440, 920), 2);
    add_background_object(create_plruins5_2898(9312, 808), 2);
    add_background_object(create_plruins5_2898(13744, 672), 2);
    add_background_object(create_plplant1_2899(12144, 1136), 2);
    add_background_object(create_plplant2_2900(13256, 736), 2);
    add_background_object(create_plruins5_2898(12592, 672), 2);
    add_background_object(create_plsignup3_2901(11040, 1120), 2);
    add_background_object(create_plsignup3_2901(11040, 1152), 2);
    add_background_object(create_plruins3_2902(4944, 1136), 2);
    add_background_object(create_plbackwall2_2903(5112, 1248), 2);
    add_background_object(create_plbackwall2_2903(3896, 1464), 2);
    add_background_object(create_plbackwall5_2896(4024, 1464), 2);
    add_background_object(create_plgrass_2904(7184, 1256), 2);
    add_background_object(create_plbackwall1_2895(7392, 1184), 2);
    add_background_object(create_plgrass_2904(7432, 1144), 2);
    add_background_object(create_plbackwall3_2905(7264, 1184), 2);
    add_background_object(create_plbackwall2_2903(7264, 1312), 2);
    add_background_object(create_plbackwall6_2897(7104, 1328), 2);
    add_background_object(create_plruins5_2898(6528, 984), 2);
    add_background_object(create_plruins5_2898(5104, 1288), 2);
    add_background_object(create_plruins5_2898(5104, 1416), 2);
    add_background_object(create_plruins5_2898(5104, 1544), 2);
    add_background_object(create_plruins5_2898(4792, 1304), 2);
    add_background_object(create_plruins5_2898(4792, 1432), 2);
    add_background_object(create_plruins5_2898(4792, 1560), 2);
    add_background_object(create_plgrass_2904(2888, 1216), 2);
    add_background_object(create_plruins5_2898(2776, 1088), 2);
    add_background_object(create_plruins5_2898(2776, 1472), 2);
    add_background_object(create_plruins5_2898(2512, 1472), 2);
    add_background_object(create_plruins5_2898(1568, 1480), 2);
    add_background_object(create_plruins5_2898(1736, 1480), 2);
    add_background_object(create_plruins5_2898(1568, 1608), 2);
    add_background_object(create_plruins5_2898(1736, 1608), 2);
    add_background_object(create_plruins4_2906(2056, 1592), 2);
    add_background_object(create_plruins3_2902(1944, 1592), 2);
    add_background_object(create_plruins2_2907(2168, 1592), 2);
    add_background_object(create_plruins2_2907(864, 1552), 2);
    add_background_object(create_plruins5_2898(1352, 1576), 2);
    add_background_object(create_plgrass_2904(1672, 1672), 2);
    add_background_object(create_plgrass_2904(736, 1656), 2);
    add_background_object(create_plgrass_2904(832, 1672), 2);
    add_background_object(create_plgrass_2904(1040, 1664), 2);
    add_background_object(create_plgrass_2904(1000, 1680), 2);
    add_background_object(create_plgrass_2904(792, 1680), 2);
    add_background_object(create_plgrass_2904(440, 1768), 2);
    add_background_object(create_plgrass_2904(360, 1768), 2);
    add_background_object(create_plgrass_2904(624, 1672), 2);
    add_background_object(create_plgrass_2904(1240, 1648), 2);
    add_background_object(create_plgrass_2904(1312, 1664), 2);
    add_background_object(create_plgrass_2904(1552, 1680), 2);
    add_background_object(create_plgrass_2904(1728, 1688), 2);
    add_background_object(create_plgrass_2904(1880, 1704), 2);
    add_background_object(create_plruins1_2908(944, 1616), 2);
    add_background_object(create_plruins1_2908(1072, 1576), 2);
    add_background_object(create_plruins1_2908(1432, 1608), 2);
    add_background_object(create_plplant2_2900(1240, 1488), 2);
    add_background_object(create_plplant1_2899(224, 1744), 2);
    add_background_object(create_plplant1_2899(1008, 1656), 2);
    add_background_object(create_plplant2_2900(1392, 1632), 2);
    add_background_object(create_plplant1_2899(1840, 1680), 2);
    add_background_object(create_plgrass_2904(2576, 1216), 2);
    add_background_object(create_plgrass_2904(2680, 1208), 2);
    add_background_object(create_plgrass_2904(2544, 1552), 2);
    add_background_object(create_plgrass_2904(2760, 1568), 2);
    add_background_object(create_plgrass_2904(1552, 1392), 2);
    add_background_object(create_plgrass_2904(1720, 1384), 2);
    add_background_object(create_plruins5_2898(1352, 1448), 2);
    add_background_object(create_plruins7_2909(1368, -160), 2);
    add_background_object(create_plruins6_2910(1352, 1384), 2);
    add_background_object(create_plruins5_2898(2776, 1344), 2);
    add_background_object(create_plruins6_2910(2512, 1408), 2);
    add_background_object(create_plruins6_2910(2776, 1024), 2);
    add_background_object(create_plruins5_2898(2776, 1216), 2);
    add_background_object(create_plbackwall1_2895(2936, 1496), 2);
    add_background_object(create_plbackwall3_2905(2808, 1496), 2);
    add_background_object(create_plbackwall1_2895(2808, 1240), 2);
    add_background_object(create_plbackwall2_2903(2808, 1368), 2);
    add_background_object(create_plbackwall2_2903(2680, 1240), 2);
    add_background_object(create_plbackwall1_2895(2936, 1368), 2);
    add_background_object(create_plbackwall5_2896(3192, 1368), 2);
    add_background_object(create_plbackwall5_2896(3296, 984), 2);
    add_background_object(create_plbackwall2_2903(3040, 984), 2);
    add_background_object(create_plbackwall6_2897(3168, 984), 2);
    add_background_object(create_plbackwall5_2896(3168, 856), 2);
    add_background_object(create_plbackwall6_2897(3040, 856), 2);
    add_background_object(create_plbackwall2_2903(3296, 1240), 2);
    add_background_object(create_plbackwall5_2896(3424, 1112), 2);
    add_background_object(create_plbackwall4_2894(3424, 1240), 2);
    add_background_object(create_plbackwall3_2905(3256, 1336), 2);
    add_background_object(create_plbackwall5_2896(3512, 1336), 2);
    add_background_object(create_plbackwall6_2897(3384, 1336), 2);
    add_background_object(create_plbackwall4_2894(3512, 1464), 2);
    add_background_object(create_plbackwall1_2895(3256, 1464), 2);
    add_background_object(create_plruins5_2898(3992, 1472), 2);
    add_background_object(create_plruins8_2911(3992, 1456), 2);
    add_background_object(create_plruins5_2898(4160, 1424), 2);
    add_background_object(create_plruins8_2911(4160, 1408), 2);
    add_background_object(create_plruins5_2898(4160, 1552), 2);
    add_background_object(create_plruins5_2898(5104, 1672), 2);
    add_background_object(create_plruins3_2902(4480, 1608), 2);
    add_background_object(create_plgrass_2904(3576, 1568), 2);
    add_background_object(create_plgrass_2904(3664, 1552), 2);
    add_background_object(create_plgrass_2904(3856, 1544), 2);
    add_background_object(create_plgrass_2904(3944, 1560), 2);
    add_background_object(create_plgrass_2904(4240, 1712), 2);
    add_background_object(create_plgrass_2904(4176, 1688), 2);
    add_background_object(create_plgrass_2904(4368, 1736), 2);
    add_background_object(create_plruins1_2908(4040, 1512), 2);
    add_background_object(create_plruins1_2908(4752, 1552), 2);
    add_background_object(create_plruins1_2908(4824, 1680), 2);
    add_background_object(create_plgrass_2904(4648, 1600), 2);
    add_background_object(create_plbackwall3_2905(5112, 1648), 2);
    add_background_object(create_plbackwall3_2905(5240, 1520), 2);
    add_background_object(create_plbackwall6_2897(5240, 1648), 2);
    add_background_object(create_plbackwall2_2903(5240, 1376), 2);
    add_background_object(create_plbackwall3_2905(5112, 1120), 2);
    add_background_object(create_plbackwall1_2895(5240, 1248), 2);
    add_background_object(create_plbackwall1_2895(5240, 1120), 2);
    add_background_object(create_plbackwall2_2903(5112, 992), 2);
    add_background_object(create_plbackwall1_2895(5240, 992), 2);
    add_background_object(create_plbackwall1_2895(5112, 864), 2);
    add_background_object(create_plbackwall5_2896(5368, 864), 2);
    add_background_object(create_plbackwall5_2896(5496, 992), 2);
    add_background_object(create_plbackwall4_2894(5496, 1120), 2);
    add_background_object(create_plbackwall5_2896(5496, 1248), 2);
    add_background_object(create_plruins5_2898(4160, 1680), 2);
    add_background_object(create_plgrass_2904(4904, 1256), 2);
    add_background_object(create_plgrass_2904(4808, 1256), 2);
    add_background_object(create_plgrass_2904(5080, 1096), 2);
    add_background_object(create_plgrass_2904(5008, 1736), 2);
    add_background_object(create_plgrass_2904(5544, 1336), 2);
    add_background_object(create_plgrass_2904(5384, 1336), 2);
    add_background_object(create_plplant1_2899(5488, 1304), 2);
    add_background_object(create_plplant2_2900(3528, 1216), 2);
    add_background_object(create_plbackwall4_2894(5368, 736), 2);
    add_background_object(create_plbackwall1_2895(5112, 736), 2);
    add_background_object(create_plbackwall2_2903(5496, 736), 2);
    add_background_object(create_plbackwall3_2905(5624, 992), 2);
    add_background_object(create_plbackwall2_2903(5624, 1120), 2);
    add_background_object(create_plbackwall2_2903(5624, 864), 2);
    add_background_object(create_plbackwall2_2903(5752, 1248), 2);
    add_background_object(create_plbackwall1_2895(5752, 1120), 2);
    add_background_object(create_plbackwall1_2895(5752, 992), 2);
    add_background_object(create_plbackwall1_2895(5752, 864), 2);
    add_background_object(create_plbackwall1_2895(5624, 736), 2);
    add_background_object(create_plgrass_2904(5544, 1064), 2);
    add_background_object(create_plbackwall1_2895(5880, 736), 2);
    add_background_object(create_plbackwall4_2894(6136, 736), 2);
    add_background_object(create_plbackwall4_2894(6008, 864), 2);
    add_background_object(create_plbackwall5_2896(6008, 992), 2);
    add_background_object(create_plbackwall4_2894(6008, 1120), 2);
    add_background_object(create_plbackwall5_2896(6008, 1248), 2);
    add_background_object(create_plbackwall6_2897(5880, 1248), 2);
    add_background_object(create_plgrass_2904(5800, 1344), 2);
    add_background_object(create_plbackwall1_2895(5880, 608), 2);
    add_background_object(create_plbackwall5_2896(6136, 608), 2);
    add_background_object(create_plbackwall5_2896(6008, 480), 2);
    add_background_object(create_plplant1_2899(6080, 784), 2);
    add_background_object(create_plplant2_2900(6024, 800), 2);
    add_background_object(create_plgrass_2904(5928, 848), 2);
    add_background_object(create_plgrass_2904(6232, 776), 2);
    add_background_object(create_plgrass_2904(6600, 784), 2);
    add_background_object(create_plgrass_2904(6352, 1032), 2);
    add_background_object(create_plgrass_2904(6424, 1016), 2);
    add_background_object(create_plgrass_2904(6600, 1032), 2);
    add_background_object(create_plbackwall3_2905(6264, 1128), 2);
    add_background_object(create_plbackwall2_2903(6264, 1256), 2);
    add_background_object(create_plbackwall3_2905(6264, 1384), 2);
    add_background_object(create_plbackwall1_2895(6392, 1384), 2);
    add_background_object(create_plbackwall1_2895(6392, 1256), 2);
    add_background_object(create_plbackwall1_2895(6392, 1128), 2);
    add_background_object(create_plbackwall4_2894(6648, 1128), 2);
    add_background_object(create_plbackwall5_2896(6648, 1256), 2);
    add_background_object(create_plbackwall5_2896(6776, 1384), 2);
    add_background_object(create_plbackwall6_2897(6648, 1384), 2);
    add_background_object(create_plruins3_2902(6728, 976), 2);
    add_background_object(create_plruins6_2910(6528, 920), 2);
    add_background_object(create_plplant1_2899(6824, 1072), 2);
    add_background_object(create_plstonewall6_2912(7144, 1344), 2);
    add_background_object(create_plstonewall6_2912(7208, 1320), 2);
    add_background_object(create_plbackwall2_2903(6848, 1200), 2);
    add_background_object(create_plbackwall2_2903(6976, 1328), 2);
    add_background_object(create_plbackwall6_2897(6976, 1200), 2);
    add_background_object(create_plbackwall5_2896(7104, 1200), 2);
    add_background_object(create_plbackwall1_2895(7392, 1312), 2);
    add_background_object(create_plruins5_2898(7360, 1080), 2);
    add_background_object(create_plruins6_2910(7360, 1016), 2);
    add_background_object(create_plbackwall5_2896(3064, 1240), 2);
    add_background_object(create_plbackwall6_2897(3296, 1112), 2);
    add_background_object(create_plbackwall2_2903(3168, 1112), 2);
    add_background_object(create_plstonewall6_2912(3232, 1440), 2);
    add_background_object(create_plbackwall4_2894(7648, 1184), 2);
    add_background_object(create_plbackwall5_2896(7648, 1312), 2);
    add_background_object(create_plbackwall5_2896(7776, 1440), 2);
    add_background_object(create_plbackwall6_2897(7648, 1440), 2);
    add_background_object(create_plgrass_2904(6832, 1472), 2);
    add_background_object(create_plgrass_2904(6936, 1448), 2);
    add_background_object(create_plgrass_2904(6200, 1480), 2);
    add_background_object(create_plgrass_2904(6112, 1456), 2);
    add_background_object(create_plgrass_2904(7456, 1400), 2);
    add_background_object(create_plruins5_2898(7920, 1296), 2);
    add_background_object(create_plruins6_2910(7920, 1232), 2);
    add_background_object(create_plruins1_2908(8232, 1448), 2);
    add_background_object(create_plruins1_2908(7952, 1464), 2);
    add_background_object(create_plplant2_2900(8264, 1272), 2);
    add_background_object(create_plbackwall2_2903(8304, 1176), 2);
    add_background_object(create_plbackwall6_2897(8432, 1176), 2);
    add_background_object(create_plbackwall4_2894(8560, 1176), 2);
    add_background_object(create_plbackwall3_2905(8304, 1176), 2);
    add_background_object(create_plbackwall3_2905(8304, 920), 2);
    add_background_object(create_plbackwall2_2903(8304, 792), 2);
    add_background_object(create_plbackwall1_2895(8432, 920), 2);
    add_background_object(create_plbackwall1_2895(8432, 792), 2);
    add_background_object(create_plbackwall1_2895(8560, 1048), 2);
    add_background_object(create_plbackwall5_2896(8688, 920), 2);
    add_background_object(create_plbackwall4_2894(8688, 792), 2);
    add_background_object(create_plstonewall1_2913(7096, 480), 2);
    add_background_object(create_plstonewall1_2913(7224, 608), 2);
    add_background_object(create_plstonewall12_2914(7224, 736), 2);
    add_background_object(create_plstonewall13_2915(7352, 736), 2);
    add_background_object(create_plplant1_2899(8296, 1240), 2);
    add_background_object(create_plplant2_2900(8352, 1232), 2);
    add_background_object(create_plplant2_2900(8528, 1224), 2);
    add_background_object(create_plplant1_2899(8584, 1248), 2);
    add_background_object(create_plbackwall2_2903(3768, 1336), 2);
    add_background_object(create_plbackwall5_2896(3896, 1336), 2);
    add_background_object(create_plbackwall3_2905(3768, 1208), 2);
    add_background_object(create_plbackwall4_2894(3896, 1208), 2);
    add_background_object(create_plbackwall2_2903(3768, 1080), 2);
    add_background_object(create_plbackwall5_2896(3896, 1080), 2);
    add_background_object(create_plbackwall2_2903(3640, 952), 2);
    add_background_object(create_plbackwall6_2897(3768, 952), 2);
    add_background_object(create_plbackwall4_2894(3896, 952), 2);
    add_background_object(create_plbackwall1_2895(3640, 824), 2);
    add_background_object(create_plbackwall6_2897(3896, 824), 2);
    add_background_object(create_plbackwall4_2894(4024, 824), 2);
    add_background_object(create_plbackwall5_2896(8816, 1048), 2);
    add_background_object(create_plruins5_2898(7688, 968), 2);
    add_background_object(create_plruins6_2910(7688, 904), 2);
    add_background_object(create_plgrass_2904(8824, 1112), 2);
    add_background_object(create_plruins5_2898(8960, 1032), 2);
    add_background_object(create_plruins4_2906(5056, 1136), 2);
    add_background_object(create_plgrass_2904(5024, 1240), 2);
    add_background_object(create_plruins6_2910(8960, 968), 2);
    add_background_object(create_plruins5_2898(11776, 1312), 2);
    add_background_object(create_plruins5_2898(11776, 1440), 2);
    add_background_object(create_plruins5_2898(11776, 1568), 2);
    add_background_object(create_plruins5_2898(11584, 1440), 2);
    add_background_object(create_plruins5_2898(11584, 1568), 2);
    add_background_object(create_plruins5_2898(11392, 1440), 2);
    add_background_object(create_plruins5_2898(11392, 1568), 2);
    add_background_object(create_plruins5_2898(11200, 1056), 2);
    add_background_object(create_plruins5_2898(11200, 1568), 2);
    add_background_object(create_plruins5_2898(11008, 1440), 2);
    add_background_object(create_plruins5_2898(11008, 1568), 2);
    add_background_object(create_plruins5_2898(10816, 1304), 2);
    add_background_object(create_plruins5_2898(10816, 1432), 2);
    add_background_object(create_plruins5_2898(10624, 1296), 2);
    add_background_object(create_plruins5_2898(10624, 1424), 2);
    add_background_object(create_plruins5_2898(10432, 1296), 2);
    add_background_object(create_plruins5_2898(10432, 1424), 2);
    add_background_object(create_plruins5_2898(10816, 1176), 2);
    add_background_object(create_plruins5_2898(10624, 1168), 2);
    add_background_object(create_plruins5_2898(10432, 1168), 2);
    add_background_object(create_plruins5_2898(10816, 1048), 2);
    add_background_object(create_plruins5_2898(10624, 912), 2);
    add_background_object(create_plruins5_2898(10432, 1040), 2);
    add_background_object(create_plruins6_2910(10432, 976), 2);
    add_background_object(create_plruins6_2910(10624, 848), 2);
    add_background_object(create_plruins5_2898(10624, 1040), 2);
    add_background_object(create_plruins6_2910(10816, 984), 2);
    add_background_object(create_plruins5_2898(11008, 1312), 2);
    add_background_object(create_plruins5_2898(11008, 1184), 2);
    add_background_object(create_plruins5_2898(11392, 1184), 2);
    add_background_object(create_plruins5_2898(11392, 1312), 2);
    add_background_object(create_plruins5_2898(11392, 928), 2);
    add_background_object(create_plruins6_2910(11392, 864), 2);
    add_background_object(create_plruins6_2910(11200, 992), 2);
    add_background_object(create_plruins6_2910(11008, 1120), 2);
    add_background_object(create_plruins5_2898(11584, 1312), 2);
    add_background_object(create_plruins5_2898(11584, 1056), 2);
    add_background_object(create_plruins6_2910(11584, 992), 2);
    add_background_object(create_plruins5_2898(11584, 1184), 2);
    add_background_object(create_plruins5_2898(11200, 1440), 2);
    add_background_object(create_plruins5_2898(11200, 1312), 2);
    add_background_object(create_plruins5_2898(11200, 1184), 2);
    add_background_object(create_plruins5_2898(11392, 1056), 2);
    add_background_object(create_plruins5_2898(11808, 928), 2);
    add_background_object(create_plruins6_2910(11808, 864), 2);
    add_background_object(create_plruins5_2898(11808, 1056), 2);
    add_background_object(create_plruins1_2908(11856, 1104), 2);
    add_background_object(create_plbackwall3_2905(8304, 664), 2);
    add_background_object(create_plsignup_2916(11608, 1616), 2);
    add_background_object(create_plsignup_2916(11416, 1616), 2);
    add_background_object(create_plsignup_2916(11224, 1616), 2);
    add_background_object(create_plsignup_2916(11032, 1568), 2);
    add_background_object(create_plsignup2_2917(11032, 1088), 2);
    add_background_object(create_plsignup_2916(10840, 1464), 2);
    add_background_object(create_plsignup_2916(10648, 1456), 2);
    add_background_object(create_plsignup_2916(10456, 1456), 2);
    add_background_object(create_plruins4_2906(12416, 904), 2);
    add_background_object(create_plruins2_2907(11984, 1032), 2);
    add_background_object(create_plruins5_2898(12752, 928), 2);
    add_background_object(create_plruins5_2898(12752, 800), 2);
    add_background_object(create_plruins5_2898(13072, 928), 2);
    add_background_object(create_plruins5_2898(13072, 800), 2);
    add_background_object(create_plruins5_2898(12752, 672), 2);
    add_background_object(create_plruins5_2898(13072, 672), 2);
    add_background_object(create_plruins5_2898(13424, 928), 2);
    add_background_object(create_plruins5_2898(13568, 928), 2);
    add_background_object(create_plruins5_2898(13712, 928), 2);
    add_background_object(create_plruins5_2898(13376, 672), 2);
    add_background_object(create_plgrass_2904(12576, 776), 2);
    add_background_object(create_plgrass_2904(12896, 776), 2);
    add_background_object(create_plgrass_2904(13192, 784), 2);
    add_background_object(create_plgrass_2904(13272, 768), 2);
    add_background_object(create_plgrass_2904(13464, 776), 2);
    add_background_object(create_plgrass_2904(13760, 768), 2);
    add_background_object(create_plgrass_2904(13672, 776), 2);
    add_background_object(create_plruins5_2898(12728, 416), 2);
    add_background_object(create_plruins5_2898(12968, 464), 2);
    add_background_object(create_plruins6_2910(12728, 352), 2);
    add_background_object(create_plruins6_2910(12968, 400), 2);
    add_background_object(create_plruins5_2898(13224, 416), 2);
    add_background_object(create_plruins6_2910(13224, 352), 2);
    add_background_object(create_plplant1_2899(13616, 752), 2);
    add_background_object(create_plgrass_2904(12176, 1144), 2);
    add_background_object(create_plgrass_2904(12248, 1112), 2);
    add_background_object(create_plgrass_2904(12384, 1024), 2);
    add_background_object(create_plgrass_2904(12064, 1160), 2);
    add_background_object(create_plruins5_2898(13744, 544), 2);
    add_background_object(create_plruins5_2898(13744, 416), 2);
    add_background_object(create_plruins6_2910(13744, 352), 2);
    add_background_object(create_plplant1_2899(1856, 1376), 2);
    add_background_object(create_plplant1_2899(5128, 1232), 2);
    add_background_object(create_plgrass_2904(3904, 968), 2);
    add_background_object(create_plgrass_2904(4256, 968), 2);
    add_background_object(create_plbackwall2_2903(4024, 808), 2);
    add_background_object(create_plbackwall1_2895(4152, 808), 2);
    add_background_object(create_plbackwall3_2905(4024, 936), 2);
    add_background_object(create_plbackwall6_2897(4152, 936), 2);
    add_background_object(create_plbackwall4_2894(4280, 936), 2);
    add_background_object(create_plbackwall4_2894(4408, 808), 2);
    add_background_object(create_plgrass_2904(2112, 1336), 2);
    add_background_object(create_plbackwall4_2894(8944, 664), 2);
    add_background_object(create_plbackwall4_2894(9072, 536), 2);
    add_background_object(create_plbackwall4_2894(9072, 280), 2);
    add_background_object(create_plbackwall5_2896(9072, 408), 2);
    add_background_object(create_plbackwall6_2897(8944, 536), 2);
    add_background_object(create_plbackwall6_2897(8944, 408), 2);
    add_background_object(create_plbackwall6_2897(8944, 280), 2);
    add_background_object(create_plbackwall1_2895(8944, 152), 2);
    add_background_object(create_plbackwall4_2894(9200, 152), 2);
    add_background_object(create_plplant1_2899(9040, 1104), 2);
    add_background_object(create_plgrass_2904(8968, 1136), 2);
    add_background_object(create_plgrass_2904(9216, 472), 2);
    add_background_object(create_plbackwall2_2903(9464, 312), 2);
    add_background_object(create_plbackwall2_2903(9336, 184), 2);
    add_background_object(create_plbackwall6_2897(9464, 184), 2);
    add_background_object(create_plgrass_2904(9296, 912), 2);
    add_background_object(create_plgrass_2904(9440, 976), 2);
    add_background_object(create_plgrass_2904(9560, 1008), 2);
    add_background_object(create_plruins5_2898(9600, 824), 2);
    add_background_object(create_plruins5_2898(9600, 952), 2);
    add_background_object(create_plruins5_2898(9312, 680), 2);
    add_background_object(create_plruins5_2898(9312, 552), 2);
    add_background_object(create_plruins5_2898(9440, 664), 2);
    add_background_object(create_plruins5_2898(9440, 792), 2);
    add_background_object(create_plruins5_2898(10240, 1032), 2);
    add_background_object(create_plruins5_2898(10240, 904), 2);
    add_background_object(create_plbackwall3_2905(9752, 456), 2);
    add_background_object(create_plbackwall2_2903(9752, 584), 2);
    add_background_object(create_plbackwall5_2896(9680, 584), 2);
    add_background_object(create_plbackwall4_2894(9680, 712), 2);
    add_background_object(create_plbackwall3_2905(9752, 704), 2);
    add_background_object(create_plbackwall2_2903(9752, 832), 2);
    add_background_object(create_plbackwall5_2896(9824, 976), 2);
    add_background_object(create_plbackwall5_2896(10008, 352), 2);
    add_background_object(create_plbackwall5_2896(10136, 480), 2);
    add_background_object(create_plbackwall1_2895(9880, 480), 2);
    add_background_object(create_plbackwall4_2894(10136, 608), 2);
    add_background_object(create_plbackwall4_2894(10008, 736), 2);
    add_background_object(create_plbackwall1_2895(9880, 608), 2);
    add_background_object(create_plbackwall5_2896(10008, 856), 2);
    add_background_object(create_plbackwall1_2895(9880, 984), 2);
    add_background_object(create_plgrass_2904(9664, 1008), 2);
    add_background_object(create_plgrass_2904(9800, 992), 2);
    add_background_object(create_plgrass_2904(9968, 1096), 2);
    add_background_object(create_plgrass_2904(10120, 1136), 2);
    add_background_object(create_plbackwall1_2895(8688, 280), 2);
    add_background_object(create_plbackwall1_2895(8688, 408), 2);
    add_background_object(create_plgrass_2904(11080, 1656), 2);
    add_background_object(create_plgrass_2904(11280, 1656), 2);
    add_background_object(create_plgrass_2904(11472, 1656), 2);
    add_background_object(create_plgrass_2904(11664, 1656), 2);
    add_background_object(create_plgrass_2904(10696, 1504), 2);
    add_background_object(create_plgrass_2904(10504, 1504), 2);
    add_background_object(create_plgrass_2904(10328, 1480), 2);
    add_background_object(create_plbackwall3_2905(9752, 224), 2);
    add_background_object(create_plbackwall2_2903(9752, 352), 2);
    add_background_object(create_plbackwall5_2896(9880, 224), 2);
    add_background_object(create_plbackwall6_2897(9880, 352), 2);
    add_background_object(create_plbackwall4_2894(9712, 184), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(13864, -43), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-109, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plbackwall5_2896(9680, 344), 3);
    add_background_object(create_plbrickwall1_2918(9584, 184), 3);
    add_background_object(create_plbrickwall2_2919(9680, 184), 3);
    add_background_object(create_plpinwheelstalk_2920(11712, 1672), 3);
    add_background_object(create_plpinwheelstalk_2920(11520, 1648), 3);
    add_background_object(create_plpinwheelstalk_2920(11328, 1648), 3);
    add_background_object(create_plpinwheelstalk_2920(11128, 1648), 3);
    add_background_object(create_plpinwheelstalk_2920(10752, 1512), 3);
    add_background_object(create_plbrickwall5_2921(9920, 360), 3);
    add_background_object(create_plbrickwall1_2918(10208, 136), 3);
    add_background_object(create_plbrickwall1_2918(10208, 8), 3);
    add_background_object(create_plbrickwall2_2919(10336, 8), 3);
    add_background_object(create_plplant3_2922(9432, 600), 3);
    add_background_object(create_plstonewall1_2913(9856, 1288), 3);
    add_background_object(create_plstonewall1_2913(9856, 1416), 3);
    add_background_object(create_plstonewall1_2913(9856, 1160), 3);
    add_background_object(create_plbrickwall1_2918(9344, 1096), 3);
    add_background_object(create_plbrickwall5_2921(9248, 488), 3);
    add_background_object(create_plbrickwall1_2918(9216, 1032), 3);
    add_background_object(create_plbrickwall3_2923(9216, 1032), 3);
    add_background_object(create_plstonewall11_2924(9088, 1080), 3);
    add_background_object(create_plground8_2925(9088, 1040), 3);
    add_background_object(create_plstonewall3_2926(8944, 696), 3);
    add_background_object(create_plstonewall1_2913(8688, 696), 3);
    add_background_object(create_plstonewall8_2927(8688, 824), 3);
    add_background_object(create_plstonewall9_2928(8816, 824), 3);
    add_background_object(create_plstonewall6_2912(8832, 728), 3);
    add_background_object(create_plstonewall6_2912(8744, 792), 3);
    add_background_object(create_plstonewall22_2929(5576, 1112), 3);
    add_background_object(create_plstonewall22_2929(5472, 1120), 3);
    add_background_object(create_plstonewall12_2914(5472, 1112), 3);
    add_background_object(create_plstonewall12_2914(5600, 1112), 3);
    add_background_object(create_plstonewall20_2930(2152, 1312), 3);
    add_background_object(create_plstonewall12_2914(2072, 1392), 3);
    add_background_object(create_plplant3_2922(4104, 928), 3);
    add_background_object(create_plground4_2931(3656, 992), 3);
    add_background_object(create_plstonewall5_2932(3880, 1000), 3);
    add_background_object(create_plstonewall16_2933(3944, 1000), 3);
    add_background_object(create_plstonewall5_2932(4008, 1000), 3);
    add_background_object(create_plstonewall16_2933(4072, 1000), 3);
    add_background_object(create_plstonewall5_2932(4136, 1000), 3);
    add_background_object(create_plstonewall16_2933(4200, 1000), 3);
    add_background_object(create_plstonewall5_2932(4264, 1000), 3);
    add_background_object(create_plstonewall16_2933(4328, 1000), 3);
    add_background_object(create_plstonewall12_2914(3880, 1064), 3);
    add_background_object(create_plstonewall12_2914(4136, 1064), 3);
    add_background_object(create_plpinwheelstalk_2920(13696, 752), 3);
    add_background_object(create_plgrass_2904(13672, 776), 3);
    add_background_object(create_plpinwheelstalk_2920(12336, 1048), 3);
    add_background_object(create_plpinwheelstalk_2920(12280, 1064), 3);
    add_background_object(create_plpinwheelstalk_2920(12280, 1112), 3);
    add_background_object(create_plpinwheelstalk_2920(8360, 992), 3);
    add_background_object(create_plpinwheelstalk_2920(8448, 1000), 3);
    add_background_object(create_plpinwheelstalk_2920(8544, 1008), 3);
    add_background_object(create_plpinwheelstalk_2920(7768, 1000), 3);
    add_background_object(create_plpinwheelstalk_2920(5424, 1320), 3);
    add_background_object(create_plpinwheelstalk_2920(5592, 1328), 3);
    add_background_object(create_plpinwheelstalk_2920(5040, 1080), 3);
    add_background_object(create_plpinwheelstalk_2920(4832, 1240), 3);
    add_background_object(create_plpinwheelstalk_2920(4960, 1232), 3);
    add_background_object(create_plpinwheelstalk_2920(4904, 1240), 3);
    add_background_object(create_plpinwheelstalk_2920(1696, 1320), 3);
    add_background_object(create_plpinwheelstalk_2920(1560, 1384), 3);
    add_background_object(create_plpinwheelstalk_2920(1496, 1384), 3);
    add_background_object(create_plplant3_2922(12928, 728), 3);
    add_background_object(create_plstonewall11_2924(12416, 984), 3);
    add_background_object(create_plstonewall11_2924(12160, 1144), 3);
    add_background_object(create_plstonewall14_2934(12288, 1056), 3);
    add_background_object(create_plground9_2935(12184, 1104), 3);
    add_background_object(create_plstonewall1_2913(12160, 1568), 3);
    add_background_object(create_plstonewall11_2924(8576, 1208), 3);
    add_background_object(create_plstonewall1_2913(8704, 1160), 3);
    add_background_object(create_plstonewall1_2913(8576, 1288), 3);
    add_background_object(create_jcbridgesegment_2425(7816, 1016), 3);
    add_background_object(create_jcbridgesegment_2425(8024, 1016), 3);
    add_background_object(create_jcbridgesegment_2425(8088, 1016), 3);
    add_background_object(create_jcbridgesegment_2425(8296, 1016), 3);
    add_background_object(create_plstonewall5_2932(8032, 1040), 3);
    add_background_object(create_plground13_2936(8032, 1040), 3);
    add_background_object(create_plstonewall8_2927(8264, 1360), 3);
    add_background_object(create_plstonewall5_2932(7936, 1440), 3);
    add_background_object(create_plstonewall3_2926(8000, 1440), 3);
    add_background_object(create_plstonewall16_2933(7936, 1504), 3);
    add_background_object(create_plstonewall4_2937(7912, 1440), 3);
    add_background_object(create_plstonewall3_2926(7680, 1440), 3);
    add_background_object(create_plvine1_2938(6736, 1192), 3);
    add_background_object(create_plstonewall5_2932(6728, 1136), 3);
    add_background_object(create_plground13_2936(6728, 1120), 3);
    add_background_object(create_plground3_2939(3048, 1288), 3);
    add_background_object(create_plstonewall5_2932(2800, 1248), 3);
    add_background_object(create_plstonewall16_2933(2864, 1248), 3);
    add_background_object(create_plstonewall1_2913(3136, 1480), 3);
    add_background_object(create_plstonewall12_2914(7424, 1192), 3);
    add_background_object(create_plstonewall11_2924(7424, 1112), 3);
    add_background_object(create_plstonewall14_2934(7552, 1056), 3);
    add_background_object(create_plstonewall10_2940(7360, 1360), 3);
    add_background_object(create_plstonewall5_2932(7168, 1376), 3);
    add_background_object(create_plstonewall16_2933(7232, 1376), 3);
    add_background_object(create_plstonewall5_2932(7296, 1376), 3);
    add_background_object(create_plstonewall1_2913(7168, 1440), 3);
    add_background_object(create_plstonewall1_2913(7424, 1440), 3);
    add_background_object(create_plstonewall1_2913(7424, 1568), 3);
    add_background_object(create_plstonewall1_2913(7424, 1696), 3);
    add_background_object(create_plstonewall14_2934(7040, 1352), 3);
    add_background_object(create_plstonewall11_2924(6912, 1432), 3);
    add_background_object(create_plstonewall1_2913(6912, 1512), 3);
    add_background_object(create_plvine1_2938(6640, 824), 3);
    add_background_object(create_plvine2_2941(6640, 896), 3);
    add_background_object(create_plvine1_2938(6608, 1208), 3);
    add_background_object(create_plvine1_2938(6472, 1160), 3);
    add_background_object(create_plplant3_2922(5872, 1296), 3);
    add_background_object(create_plstonewall8_2927(6344, 1072), 3);
    add_background_object(create_plplant3_2922(5216, 1040), 3);
    add_background_object(create_plstonewall3_2926(4864, 1640), 3);
    add_background_object(create_plstonewall12_2914(4912, 1296), 3);
    add_background_object(create_plstonewall13_2915(4784, 1304), 3);
    add_background_object(create_plstonewall1_2913(4352, 1768), 3);
    add_background_object(create_plstonewall1_2913(4096, 1768), 3);
    add_background_object(create_plstonewall15_2942(3328, 1448), 3);
    add_background_object(create_plstonewall14_2934(3072, 1448), 3);
    add_background_object(create_plstonewall10_2940(3456, 1528), 3);
    add_background_object(create_plstonewall1_2913(3328, 1608), 3);
    add_background_object(create_plvine1_2938(2864, 984), 3);
    add_background_object(create_plplant3_2922(2656, 1520), 3);
    add_background_object(create_plstonewall1_2913(1576, 1440), 3);
    add_background_object(create_plground3_2939(1784, 1424), 3);
    add_background_object(create_plstonewall3_2926(1776, 1376), 3);
    add_background_object(create_plstonewall4_2937(1624, 1376), 3);
    add_background_object(create_plgrass_2904(2448, 1568), 3);
    add_background_object(create_plstonewall1_2913(2432, 1608), 3);
    add_background_object(create_plstonewall1_2913(2304, 1736), 3);
    add_background_object(create_plstonewall11_2924(2304, 1656), 3);
    add_background_object(create_plplant3_2922(1168, 1488), 3);
    add_background_object(create_plplant3_2922(520, 1640), 3);
    add_background_object(create_plstonewall1_2913(1536, 1720), 3);
    add_background_object(create_plstonewall1_2913(1280, 1704), 3);
    add_background_object(create_plground1_2943(1280, 1688), 3);
    add_background_object(create_plstonewall5_2932(1216, 1576), 3);
    add_background_object(create_plstonewall5_2932(1152, 1576), 3);
    add_background_object(create_plstonewall1_2913(512, 1704), 3);
    add_background_object(create_plstonewall1_2913(256, 1816), 3);
    add_background_object(create_plstonewall1_2913(0, 1816), 3);
    add_background_object(create_plgrass_2904(104, 1760), 3);
    add_background_object(create_plgrass_2904(280, 1760), 3);
    add_background_object(create_plgrass_2904(0, 1752), 3);
    add_background_object(create_plground1_2943(256, 1792), 3);
    add_background_object(create_plground1_2943(0, 1792), 3);
    add_background_object(create_plground2_2944(128, 1792), 3);
    add_background_object(create_plground2_2944(512, 1696), 3);
    add_background_object(create_plstonewall3_2926(1280, 1576), 3);
    add_background_object(create_plstonewall1_2913(768, 1704), 3);
    add_background_object(create_plstonewall1_2913(1024, 1704), 3);
    add_background_object(create_plstonewall5_2932(1216, 1640), 3);
    add_background_object(create_plground1_2943(640, 1696), 3);
    add_background_object(create_plground2_2944(768, 1696), 3);
    add_background_object(create_plground1_2943(896, 1696), 3);
    add_background_object(create_plground2_2944(384, 1792), 3);
    add_background_object(create_plstonewall1_2913(512, 1832), 3);
    add_background_object(create_plstonewall1_2913(768, 1832), 3);
    add_background_object(create_plstonewall1_2913(1024, 1832), 3);
    add_background_object(create_plground4_2931(1280, 1552), 3);
    add_background_object(create_plstonewall4_2937(488, 1816), 3);
    add_background_object(create_plstonewall4_2937(488, 1704), 3);
    add_background_object(create_plground3_2939(488, 1704), 3);
    add_background_object(create_plstonewall4_2937(1128, 1704), 3);
    add_background_object(create_plstonewall5_2932(1152, 1640), 3);
    add_background_object(create_plstonewall6_2912(1168, 1584), 3);
    add_background_object(create_plstonewall6_2912(1088, 1728), 3);
    add_background_object(create_plground2_2944(1152, 1552), 3);
    add_background_object(create_plstonewall1_2913(1280, 1832), 3);
    add_background_object(create_plstonewall3_2926(1280, 1704), 3);
    add_background_object(create_plground1_2943(1408, 1696), 3);
    add_background_object(create_plground1_2943(1536, 1704), 3);
    add_background_object(create_plground1_2943(1664, 1712), 3);
    add_background_object(create_plstonewall1_2913(1536, 1848), 3);
    add_background_object(create_plstonewall1_2913(1792, 1736), 3);
    add_background_object(create_plground1_2943(1792, 1720), 3);
    add_background_object(create_plground1_2943(1920, 1728), 3);
    add_background_object(create_plground5_2945(1272, 1592), 3);
    add_background_object(create_plground6_2946(448, 1736), 3);
    add_background_object(create_plstonewall1_2913(2048, 1736), 3);
    add_background_object(create_plground2_2944(2048, 1728), 3);
    add_background_object(create_plground1_2943(2176, 1728), 3);
    add_background_object(create_plground8_2925(2304, 1616), 3);
    add_background_object(create_plstonewall7_2947(496, 1736), 3);
    add_background_object(create_plstonewall7_2947(216, 1816), 3);
    add_background_object(create_plstonewall7_2947(24, 1816), 3);
    add_background_object(create_plstonewall7_2947(408, 1832), 3);
    add_background_object(create_plstonewall7_2947(632, 1720), 3);
    add_background_object(create_plstonewall7_2947(776, 1744), 3);
    add_background_object(create_plstonewall7_2947(920, 1720), 3);
    add_background_object(create_plstonewall7_2947(1088, 1728), 3);
    add_background_object(create_plstonewall7_2947(1152, 1592), 3);
    add_background_object(create_plstonewall7_2947(1304, 1728), 3);
    add_background_object(create_plstonewall7_2947(1480, 1728), 3);
    add_background_object(create_plstonewall7_2947(1632, 1744), 3);
    add_background_object(create_plstonewall7_2947(1776, 1744), 3);
    add_background_object(create_plstonewall7_2947(1912, 1760), 3);
    add_background_object(create_plstonewall7_2947(2056, 1760), 3);
    add_background_object(create_plvine1_2938(2672, 1328), 3);
    add_background_object(create_plvine2_2941(2672, 1400), 3);
    add_background_object(create_plstonewall8_2927(2560, 1256), 3);
    add_background_object(create_plstonewall9_2928(2688, 1256), 3);
    add_background_object(create_plground3_2939(2560, 1232), 3);
    add_background_object(create_plground2_2944(2672, 1232), 3);
    add_background_object(create_plground1_2943(2576, 1232), 3);
    add_background_object(create_plstonewall7_2947(2624, 1248), 3);
    add_background_object(create_dvceilingoverlay_915(2560, 1256), 3);
    add_background_object(create_dvceilingoverlay_915(2688, 1256), 3);
    add_background_object(create_dvceilingoverlay_915(2616, 1344), 3);
    add_background_object(create_plstonewall1_2913(2560, 1736), 3);
    add_background_object(create_plstonewall1_2913(2816, 1736), 3);
    add_background_object(create_plstonewall1_2913(2816, 1608), 3);
    add_background_object(create_plstonewall1_2913(2560, 1608), 3);
    add_background_object(create_plground2_2944(2560, 1584), 3);
    add_background_object(create_plground2_2944(2432, 1592), 3);
    add_background_object(create_plstonewall6_2912(2464, 1648), 3);
    add_background_object(create_plstonewall7_2947(2256, 1768), 3);
    add_background_object(create_plstonewall7_2947(2392, 1744), 3);
    add_background_object(create_plstonewall7_2947(2584, 1624), 3);
    add_background_object(create_plstonewall7_2947(2728, 1616), 3);
    add_background_object(create_plground1_2943(2688, 1584), 3);
    add_background_object(create_plground2_2944(2816, 1584), 3);
    add_background_object(create_plground10_2948(3072, 1432), 3);
    add_background_object(create_plstonewall8_2927(1448, 1440), 3);
    add_background_object(create_plstonewall9_2928(1832, 1440), 3);
    add_background_object(create_dvceilingoverlay_915(1448, 1440), 3);
    add_background_object(create_dvceilingoverlay_915(1832, 1440), 3);
    add_background_object(create_dvceilingoverlay_915(1512, 1536), 3);
    add_background_object(create_dvceilingoverlay_915(1760, 1536), 3);
    add_background_object(create_plground3_2939(1448, 1424), 3);
    add_background_object(create_plground6_2946(1408, 1440), 3);
    add_background_object(create_plground1_2943(1472, 1424), 3);
    add_background_object(create_plstonewall5_2932(1648, 1376), 3);
    add_background_object(create_plstonewall5_2932(1712, 1376), 3);
    add_background_object(create_plground4_2931(1600, 1432), 3);
    add_background_object(create_plstonewall6_2912(1632, 1376), 3);
    add_background_object(create_plstonewall6_2912(1688, 1424), 3);
    add_background_object(create_plstonewall7_2947(1552, 1440), 3);
    add_background_object(create_plstonewall7_2947(1712, 1440), 3);
    add_background_object(create_plground4_2931(1936, 1432), 3);
    add_background_object(create_plground3_2939(1624, 1368), 3);
    add_background_object(create_plground2_2944(1648, 1360), 3);
    add_background_object(create_plground4_2931(1776, 1360), 3);
    add_background_object(create_plground1_2943(1808, 1424), 3);
    add_background_object(create_plstonewall1_2913(2760, 864), 3);
    add_background_object(create_plstonewall8_2927(2632, 864), 3);
    add_background_object(create_plstonewall9_2928(3016, 864), 3);
    add_background_object(create_plstonewall1_2913(2632, 736), 3);
    add_background_object(create_plstonewall1_2913(2888, 736), 3);
    add_background_object(create_plstonewall4_2937(2608, 736), 3);
    add_background_object(create_plstonewall3_2926(3144, 736), 3);
    add_background_object(create_plstonewall6_2912(2616, 768), 3);
    add_background_object(create_plstonewall6_2912(3032, 768), 3);
    add_background_object(create_dvceilingoverlay_915(2696, 960), 3);
    add_background_object(create_dvceilingoverlay_915(2944, 960), 3);
    add_background_object(create_plstonewall1_2913(2632, 608), 3);
    add_background_object(create_plstonewall1_2913(2888, 608), 3);
    add_background_object(create_plstonewall4_2937(2608, 608), 3);
    add_background_object(create_plstonewall1_2913(2632, 480), 3);
    add_background_object(create_plstonewall1_2913(2888, 480), 3);
    add_background_object(create_plstonewall4_2937(2608, 480), 3);
    add_background_object(create_plstonewall1_2913(2632, 352), 3);
    add_background_object(create_plstonewall1_2913(2888, 352), 3);
    add_background_object(create_plstonewall4_2937(2608, 352), 3);
    add_background_object(create_plstonewall1_2913(2632, 224), 3);
    add_background_object(create_plstonewall1_2913(2888, 224), 3);
    add_background_object(create_plstonewall4_2937(2608, 224), 3);
    add_background_object(create_plstonewall1_2913(2632, 96), 3);
    add_background_object(create_plstonewall1_2913(2888, 96), 3);
    add_background_object(create_plstonewall4_2937(2608, 96), 3);
    add_background_object(create_plstonewall1_2913(2632, -32), 3);
    add_background_object(create_plstonewall1_2913(2888, -32), 3);
    add_background_object(create_plstonewall4_2937(2608, -32), 3);
    add_background_object(create_plvine2_2941(2864, 1056), 3);
    add_background_object(create_plgrass_2904(3448, 1264), 3);
    add_background_object(create_plgrass_2904(3552, 1256), 3);
    add_background_object(create_plstonewall8_2927(3440, 1304), 3);
    add_background_object(create_plstonewall9_2928(3568, 1304), 3);
    add_background_object(create_plground4_2931(3672, 1280), 3);
    add_background_object(create_plground2_2944(3552, 1280), 3);
    add_background_object(create_plground1_2943(3456, 1280), 3);
    add_background_object(create_plstonewall7_2947(3504, 1296), 3);
    add_background_object(create_dvceilingoverlay_915(3440, 1304), 3);
    add_background_object(create_dvceilingoverlay_915(3568, 1304), 3);
    add_background_object(create_dvceilingoverlay_915(3496, 1392), 3);
    add_background_object(create_plstonewall7_2947(2680, 832), 3);
    add_background_object(create_plstonewall7_2947(2912, 856), 3);
    add_background_object(create_plstonewall7_2947(3016, 720), 3);
    add_background_object(create_plstonewall7_2947(2632, 712), 3);
    add_background_object(create_plstonewall7_2947(2632, 544), 3);
    add_background_object(create_plstonewall12_2914(2800, 1312), 3);
    add_background_object(create_plground1_2943(2800, 1232), 3);
    add_background_object(create_plstonewall1_2913(3072, 1736), 3);
    add_background_object(create_plstonewall1_2913(3072, 1608), 3);
    add_background_object(create_plstonewall1_2913(3328, 1736), 3);
    add_background_object(create_plstonewall11_2924(2944, 1528), 3);
    add_background_object(create_plground9_2935(2944, 1504), 3);
    add_background_object(create_plstonewall6_2912(3040, 1544), 3);
    add_background_object(create_plstonewall1_2913(3584, 1608), 3);
    add_background_object(create_plstonewall1_2913(3584, 1736), 3);
    add_background_object(create_plground2_2944(3584, 1584), 3);
    add_background_object(create_dvceilingoverlay_915(2608, 864), 3);
    add_background_object(create_dvceilingoverlay_915(3040, 864), 3);
    add_background_object(create_plstonewall11_2924(3712, 1528), 3);
    add_background_object(create_plground9_2935(3712, 1504), 3);
    add_background_object(create_plstonewall10_2940(3840, 1528), 3);
    add_background_object(create_plground12_2949(3840, 1504), 3);
    add_background_object(create_plstonewall1_2913(3840, 1608), 3);
    add_background_object(create_plstonewall1_2913(3840, 1736), 3);
    add_background_object(create_plground1_2943(3968, 1584), 3);
    add_background_object(create_plground13_2936(4376, 1760), 3);
    add_background_object(create_plstonewall7_2947(2880, 1616), 3);
    add_background_object(create_plstonewall7_2947(3568, 1624), 3);
    add_background_object(create_plstonewall7_2947(3736, 1608), 3);
    add_background_object(create_plstonewall7_2947(3904, 1616), 3);
    add_background_object(create_plstonewall15_2942(4096, 1608), 3);
    add_background_object(create_plstonewall10_2940(4224, 1688), 3);
    add_background_object(create_plground11_2950(4096, 1592), 3);
    add_background_object(create_plground12_2949(4224, 1664), 3);
    add_background_object(create_plground4_2931(4352, 1744), 3);
    add_background_object(create_plstonewall6_2912(4048, 1648), 3);
    add_background_object(create_plstonewall6_2912(4128, 1712), 3);
    add_background_object(create_plground3_2939(4352, 1760), 3);
    add_background_object(create_plstonewall1_2913(4608, 1768), 3);
    add_background_object(create_plstonewall1_2913(4608, 1640), 3);
    add_background_object(create_plstonewall4_2937(4584, 1640), 3);
    add_background_object(create_plground4_2931(4568, 1760), 3);
    add_background_object(create_plground13_2936(4440, 1760), 3);
    add_background_object(create_plground13_2936(4504, 1760), 3);
    add_background_object(create_plground3_2939(4584, 1632), 3);
    add_background_object(create_plground2_2944(4608, 1624), 3);
    add_background_object(create_plground3_2939(4776, 1288), 3);
    add_background_object(create_plground2_2944(4800, 1280), 3);
    add_background_object(create_plground2_2944(4928, 1272), 3);
    add_background_object(create_plground4_2931(5184, 1280), 3);
    add_background_object(create_plstonewall7_2947(4048, 1624), 3);
    add_background_object(create_plstonewall7_2947(4168, 1728), 3);
    add_background_object(create_plstonewall7_2947(4296, 1776), 3);
    add_background_object(create_plstonewall7_2947(4456, 1784), 3);
    add_background_object(create_plstonewall7_2947(4592, 1744), 3);
    add_background_object(create_plstonewall7_2947(4616, 1648), 3);
    add_background_object(create_plstonewall1_2913(4864, 1768), 3);
    add_background_object(create_plstonewall1_2913(5120, 1768), 3);
    add_background_object(create_plground4_2931(4864, 1624), 3);
    add_background_object(create_plground3_2939(4872, 1768), 3);
    add_background_object(create_plground2_2944(4896, 1760), 3);
    add_background_object(create_plground1_2943(5024, 1760), 3);
    add_background_object(create_plstonewall7_2947(4744, 1656), 3);
    add_background_object(create_plstonewall7_2947(4816, 1776), 3);
    add_background_object(create_plstonewall7_2947(4992, 1784), 3);
    add_background_object(create_plground2_2944(5152, 1760), 3);
    add_background_object(create_plstonewall1_2913(5376, 1768), 3);
    add_background_object(create_plstonewall1_2913(5376, 1640), 3);
    add_background_object(create_plground13_2936(5280, 1760), 3);
    add_background_object(create_plstonewall4_2937(5352, 1640), 3);
    add_background_object(create_plground4_2931(5344, 1760), 3);
    add_background_object(create_plground13_2936(4736, 1624), 3);
    add_background_object(create_plground13_2936(4800, 1624), 3);
    add_background_object(create_plstonewall1_2913(5376, 1512), 3);
    add_background_object(create_plstonewall4_2937(5352, 1512), 3);
    add_background_object(create_plstonewall1_2913(5376, 1384), 3);
    add_background_object(create_plstonewall4_2937(5352, 1384), 3);
    add_background_object(create_plground3_2939(5352, 1368), 3);
    add_background_object(create_plground2_2944(5376, 1360), 3);
    add_background_object(create_plground1_2943(5504, 1360), 3);
    add_background_object(create_plstonewall7_2947(5128, 1792), 3);
    add_background_object(create_plstonewall7_2947(5264, 1784), 3);
    add_background_object(create_plstonewall7_2947(5392, 1736), 3);
    add_background_object(create_plstonewall7_2947(5384, 1576), 3);
    add_background_object(create_plstonewall7_2947(5376, 1400), 3);
    add_background_object(create_plground6_2946(4544, 1680), 3);
    add_background_object(create_plground5_2945(4864, 1688), 3);
    add_background_object(create_plstonewall1_2913(3144, 608), 3);
    add_background_object(create_plstonewall1_2913(3144, 480), 3);
    add_background_object(create_plstonewall1_2913(3400, 864), 3);
    add_background_object(create_plstonewall12_2914(3144, 736), 3);
    add_background_object(create_plstonewall13_2915(3272, 736), 3);
    add_background_object(create_plstonewall1_2913(3656, 736), 3);
    add_background_object(create_plstonewall1_2913(3656, 608), 3);
    add_background_object(create_plstonewall1_2913(3912, 736), 3);
    add_background_object(create_plstonewall1_2913(3912, 608), 3);
    add_background_object(create_plstonewall12_2914(3912, 864), 3);
    add_background_object(create_plstonewall13_2915(4040, 864), 3);
    add_background_object(create_plstonewall1_2913(3400, 736), 3);
    add_background_object(create_plstonewall1_2913(3400, 608), 3);
    add_background_object(create_plstonewall1_2913(3400, 480), 3);
    add_background_object(create_plstonewall4_2937(3376, 864), 3);
    add_background_object(create_plstonewall4_2937(3376, 736), 3);
    add_background_object(create_plstonewall3_2926(3656, 864), 3);
    add_background_object(create_plstonewall9_2928(3528, 992), 3);
    add_background_object(create_plstonewall8_2927(3400, 992), 3);
    add_background_object(create_plstonewall6_2912(3376, 904), 3);
    add_background_object(create_plstonewall6_2912(3552, 904), 3);
    add_background_object(create_plstonewall7_2947(3464, 976), 3);
    add_background_object(create_plstonewall7_2947(3392, 872), 3);
    add_background_object(create_plstonewall7_2947(3536, 872), 3);
    add_background_object(create_plstonewall7_2947(3536, 744), 3);
    add_background_object(create_plstonewall7_2947(3392, 744), 3);
    add_background_object(create_plstonewall7_2947(3104, 600), 3);
    add_background_object(create_plstonewall7_2947(3296, 600), 3);
    add_background_object(create_dvceilingoverlay_915(3376, 1000), 3);
    add_background_object(create_dvceilingoverlay_915(3552, 1000), 3);
    add_background_object(create_dvceilingoverlay_915(3432, 1064), 3);
    add_background_object(create_dvceilingoverlay_915(3488, 1064), 3);
    add_background_object(create_plstonewall1_2913(4168, 736), 3);
    add_background_object(create_plstonewall1_2913(4168, 608), 3);
    add_background_object(create_plstonewall12_2914(4168, 864), 3);
    add_background_object(create_plstonewall13_2915(4296, 864), 3);
    add_background_object(create_plstonewall1_2913(4424, 736), 3);
    add_background_object(create_plstonewall1_2913(4424, 608), 3);
    add_background_object(create_plstonewall12_2914(4424, 864), 3);
    add_background_object(create_plstonewall13_2915(4552, 864), 3);
    add_background_object(create_plstonewall1_2913(4680, 736), 3);
    add_background_object(create_plstonewall1_2913(4680, 608), 3);
    add_background_object(create_plstonewall12_2914(4680, 864), 3);
    add_background_object(create_plstonewall13_2915(4808, 864), 3);
    add_background_object(create_plstonewall1_2913(4936, 864), 3);
    add_background_object(create_plstonewall1_2913(4936, 736), 3);
    add_background_object(create_plstonewall4_2937(4912, 864), 3);
    add_background_object(create_plstonewall12_2914(5136, 1136), 3);
    add_background_object(create_plstonewall13_2915(5008, 1144), 3);
    add_background_object(create_plground3_2939(5000, 1128), 3);
    add_background_object(create_plground2_2944(5024, 1120), 3);
    add_background_object(create_plground2_2944(5152, 1112), 3);
    add_background_object(create_plground4_2931(5280, 1112), 3);
    add_background_object(create_plstonewall1_2913(5632, 1768), 3);
    add_background_object(create_plstonewall1_2913(5632, 1640), 3);
    add_background_object(create_plstonewall1_2913(5632, 1512), 3);
    add_background_object(create_plstonewall1_2913(5632, 1384), 3);
    add_background_object(create_plground2_2944(5632, 1360), 3);
    add_background_object(create_plground1_2943(5760, 1360), 3);
    add_background_object(create_plstonewall7_2947(5512, 1392), 3);
    add_background_object(create_plstonewall7_2947(5664, 1392), 3);
    add_background_object(create_plstonewall3_2926(5192, 864), 3);
    add_background_object(create_plstonewall3_2926(5192, 736), 3);
    add_background_object(create_plstonewall1_2913(4936, 608), 3);
    add_background_object(create_plstonewall1_2913(5192, 608), 3);
    add_background_object(create_plstonewall12_2914(5192, 736), 3);
    add_background_object(create_plstonewall13_2915(5320, 736), 3);
    add_background_object(create_plstonewall13_2915(5056, 1296), 3);
    add_background_object(create_plground1_2943(5056, 1272), 3);
    add_background_object(create_plstonewall1_2913(5192, 480), 3);
    add_background_object(create_plstonewall1_2913(4936, 480), 3);
    add_background_object(create_plstonewall1_2913(5448, 608), 3);
    add_background_object(create_plstonewall12_2914(5448, 736), 3);
    add_background_object(create_plstonewall13_2915(5576, 736), 3);
    add_background_object(create_plstonewall1_2913(5448, 480), 3);
    add_background_object(create_plstonewall1_2913(5704, 608), 3);
    add_background_object(create_plstonewall12_2914(5704, 736), 3);
    add_background_object(create_plstonewall13_2915(5832, 736), 3);
    add_background_object(create_plstonewall1_2913(5704, 480), 3);
    add_background_object(create_plground1_2943(5592, 1088), 3);
    add_background_object(create_plground4_2931(5712, 1096), 3);
    add_background_object(create_plground3_2939(5464, 1096), 3);
    add_background_object(create_plground2_2944(5480, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(5496, 1168), 3);
    add_background_object(create_plstonewall1_2913(5888, 1384), 3);
    add_background_object(create_plstonewall1_2913(5888, 1768), 3);
    add_background_object(create_plstonewall1_2913(5888, 1640), 3);
    add_background_object(create_plstonewall1_2913(5888, 1512), 3);
    add_background_object(create_plground2_2944(5888, 1360), 3);
    add_background_object(create_plground1_2943(6016, 1360), 3);
    add_background_object(create_plstonewall9_2928(5960, 608), 3);
    add_background_object(create_plstonewall1_2913(5816, 480), 3);
    add_background_object(create_plstonewall1_2913(5816, 352), 3);
    add_background_object(create_plstonewall3_2926(6072, 480), 3);
    add_background_object(create_plstonewall6_2912(5936, 504), 3);
    add_background_object(create_plstonewall6_2912(5832, 528), 3);
    add_background_object(create_plstonewall1_2913(5816, 224), 3);
    add_background_object(create_plstonewall1_2913(5816, 96), 3);
    add_background_object(create_dvceilingoverlay_915(5880, 704), 3);
    add_background_object(create_dvceilingoverlay_915(5920, 672), 3);
    add_background_object(create_dvceilingoverlay_915(5952, 640), 3);
    add_background_object(create_plstonewall12_2914(6008, 896), 3);
    add_background_object(create_plstonewall13_2915(5864, 896), 3);
    add_background_object(create_plstonewall11_2924(6008, 816), 3);
    add_background_object(create_plstonewall14_2934(6136, 744), 3);
    add_background_object(create_plstonewall12_2914(6136, 872), 3);
    add_background_object(create_plground10_2948(6136, 720), 3);
    add_background_object(create_plground9_2935(6008, 792), 3);
    add_background_object(create_plground2_2944(5880, 872), 3);
    add_background_object(create_plground3_2939(5856, 880), 3);
    add_background_object(create_plground3_2939(6344, 1056), 3);
    add_background_object(create_plstonewall1_2913(6472, 1072), 3);
    add_background_object(create_plstonewall12_2914(6472, 1200), 3);
    add_background_object(create_plstonewall13_2915(6600, 1200), 3);
    add_background_object(create_plstonewall1_2913(6144, 1768), 3);
    add_background_object(create_plstonewall1_2913(6144, 1640), 3);
    add_background_object(create_plstonewall1_2913(6144, 1512), 3);
    add_background_object(create_plstonewall1_2913(6400, 1768), 3);
    add_background_object(create_plstonewall1_2913(6400, 1640), 3);
    add_background_object(create_plstonewall1_2913(6400, 1512), 3);
    add_background_object(create_plstonewall1_2913(6656, 1768), 3);
    add_background_object(create_plstonewall1_2913(6656, 1640), 3);
    add_background_object(create_plstonewall1_2913(6656, 1512), 3);
    add_background_object(create_plstonewall7_2947(3680, 744), 3);
    add_background_object(create_plstonewall7_2947(3840, 744), 3);
    add_background_object(create_plstonewall7_2947(4016, 736), 3);
    add_background_object(create_plstonewall7_2947(4216, 744), 3);
    add_background_object(create_plstonewall7_2947(4448, 736), 3);
    add_background_object(create_plstonewall7_2947(4608, 744), 3);
    add_background_object(create_plstonewall7_2947(4792, 736), 3);
    add_background_object(create_plstonewall7_2947(4920, 864), 3);
    add_background_object(create_plstonewall7_2947(5064, 864), 3);
    add_background_object(create_plstonewall7_2947(5072, 760), 3);
    add_background_object(create_plstonewall7_2947(4928, 744), 3);
    add_background_object(create_plstonewall7_2947(5072, 648), 3);
    add_background_object(create_plstonewall7_2947(5192, 616), 3);
    add_background_object(create_plstonewall7_2947(5320, 608), 3);
    add_background_object(create_plstonewall7_2947(5456, 608), 3);
    add_background_object(create_plstonewall7_2947(5592, 608), 3);
    add_background_object(create_plstonewall7_2947(5736, 616), 3);
    add_background_object(create_plstonewall7_2947(5864, 600), 3);
    add_background_object(create_plstonewall7_2947(5936, 536), 3);
    add_background_object(create_plstonewall1_2913(5816, -32), 3);
    add_background_object(create_plstonewall7_2947(5792, 1384), 3);
    add_background_object(create_plstonewall7_2947(5944, 1392), 3);
    add_background_object(create_plstonewall7_2947(6432, 1072), 3);
    add_background_object(create_plstonewall7_2947(6576, 1080), 3);
    add_background_object(create_jcbridgesegment_2425(6384, 784), 3);
    add_background_object(create_plstonewall3_2926(6264, 744), 3);
    add_background_object(create_plground4_2931(6264, 720), 3);
    add_background_object(create_plstonewall5_2932(6264, 808), 3);
    add_background_object(create_plstonewall16_2933(6328, 808), 3);
    add_background_object(create_plstonewall12_2914(6264, 872), 3);
    add_background_object(create_plground3_2939(6240, 808), 3);
    add_background_object(create_plground13_2936(6256, 808), 3);
    add_background_object(create_plground13_2936(6312, 808), 3);
    add_background_object(create_plground4_2931(6376, 808), 3);
    add_background_object(create_jcbridgesegment_2425(6592, 784), 3);
    add_background_object(create_plstonewall5_2932(6600, 808), 3);
    add_background_object(create_plstonewall16_2933(6664, 808), 3);
    add_background_object(create_plstonewall12_2914(6600, 872), 3);
    add_background_object(create_plground3_2939(6592, 808), 3);
    add_background_object(create_plground13_2936(6656, 808), 3);
    add_background_object(create_plground13_2936(6608, 808), 3);
    add_background_object(create_plvine1_2938(6472, 1232), 3);
    add_background_object(create_plvine2_2941(6472, 1304), 3);
    add_background_object(create_plstonewall7_2947(6008, 1456), 3);
    add_background_object(create_plstonewall7_2947(6136, 1520), 3);
    add_background_object(create_plground1_2943(6272, 1504), 3);
    add_background_object(create_plstonewall10_2940(6144, 1432), 3);
    add_background_object(create_plground7_2951(6144, 1384), 3);
    add_background_object(create_plground2_2944(6400, 1504), 3);
    add_background_object(create_plground2_2944(6528, 1496), 3);
    add_background_object(create_plground1_2943(6656, 1496), 3);
    add_background_object(create_plground2_2944(6784, 1496), 3);
    add_background_object(create_plvine1_2938(6608, 1280), 3);
    add_background_object(create_plvine2_2941(6608, 1352), 3);
    add_background_object(create_plvine2_2941(6736, 1264), 3);
    add_background_object(create_plground4_2931(6712, 808), 3);
    add_background_object(create_plstonewall16_2933(6792, 1136), 3);
    add_background_object(create_plstonewall12_2914(6728, 1200), 3);
    add_background_object(create_plground13_2936(6664, 1056), 3);
    add_background_object(create_plground1_2943(6536, 1048), 3);
    add_background_object(create_plground2_2944(6368, 1048), 3);
    add_background_object(create_plstonewall5_2932(6856, 1136), 3);
    add_background_object(create_plstonewall16_2933(6920, 1136), 3);
    add_background_object(create_plstonewall12_2914(6856, 1200), 3);
    add_background_object(create_plground13_2936(6488, 1048), 3);
    add_background_object(create_plstonewall3_2926(6728, 1072), 3);
    add_background_object(create_plground4_2931(6728, 1056), 3);
    add_background_object(create_plground1_2943(6856, 1120), 3);
    add_background_object(create_plground9_2935(6912, 1416), 3);
    add_background_object(create_plground9_2935(7424, 1112), 3);
    add_background_object(create_plground10_2948(7552, 1040), 3);
    add_background_object(create_plground12_2949(7368, 1352), 3);
    add_background_object(create_plstonewall1_2913(6912, 1768), 3);
    add_background_object(create_plstonewall1_2913(6912, 1640), 3);
    add_background_object(create_plstonewall6_2912(7016, 1440), 3);
    add_background_object(create_plground10_2948(7040, 1344), 3);
    add_background_object(create_plstonewall1_2913(7168, 1568), 3);
    add_background_object(create_plstonewall1_2913(7168, 1696), 3);
    add_background_object(create_plstonewall6_2912(7120, 1432), 3);
    add_background_object(create_plstonewall6_2912(7280, 1384), 3);
    add_background_object(create_plstonewall7_2947(6288, 1528), 3);
    add_background_object(create_plstonewall7_2947(6432, 1528), 3);
    add_background_object(create_plstonewall7_2947(6584, 1528), 3);
    add_background_object(create_plstonewall7_2947(6744, 1528), 3);
    add_background_object(create_plstonewall7_2947(6896, 1520), 3);
    add_background_object(create_plstonewall7_2947(7016, 1456), 3);
    add_background_object(create_plstonewall7_2947(7112, 1376), 3);
    add_background_object(create_plstonewall7_2947(7232, 1352), 3);
    add_background_object(create_plstonewall7_2947(7352, 1440), 3);
    add_background_object(create_plground2_2944(7496, 1424), 3);
    add_background_object(create_plground13_2936(7616, 1424), 3);
    add_background_object(create_plstonewall12_2914(7552, 1184), 3);
    add_background_object(create_plground12_2949(3456, 1512), 3);
    add_background_object(create_plstonewall6_2912(3344, 1552), 3);
    add_background_object(create_plground11_2950(3328, 1440), 3);
    add_background_object(create_plstonewall5_2932(2928, 1248), 3);
    add_background_object(create_plstonewall16_2933(2992, 1248), 3);
    add_background_object(create_plground2_2944(2920, 1232), 3);
    add_background_object(create_plstonewall12_2914(2928, 1312), 3);
    add_background_object(create_plground4_2931(3040, 1232), 3);
    add_background_object(create_plstonewall6_2912(3160, 1464), 3);
    add_background_object(create_plground13_2936(6792, 1120), 3);
    add_background_object(create_plground4_2931(7680, 1424), 3);
    add_background_object(create_plstonewall1_2913(7680, 1504), 3);
    add_background_object(create_plstonewall1_2913(7680, 1632), 3);
    add_background_object(create_plstonewall6_2912(7624, 1504), 3);
    add_background_object(create_plstonewall1_2913(7680, 1760), 3);
    add_background_object(create_plground3_2939(7672, 1504), 3);
    add_background_object(create_plground13_2936(7696, 1504), 3);
    add_background_object(create_plground13_2936(7752, 1504), 3);
    add_background_object(create_plground13_2936(7808, 1504), 3);
    add_background_object(create_plstonewall1_2913(7936, 1568), 3);
    add_background_object(create_plstonewall1_2913(7936, 1696), 3);
    add_background_object(create_plstonewall6_2912(7880, 1520), 3);
    add_background_object(create_plground4_2931(7920, 1504), 3);
    add_background_object(create_plground13_2936(7864, 1504), 3);
    add_background_object(create_plstonewall7_2947(3032, 1568), 3);
    add_background_object(create_plstonewall7_2947(3136, 1480), 3);
    add_background_object(create_plstonewall7_2947(3296, 1488), 3);
    add_background_object(create_plstonewall7_2947(3416, 1592), 3);
    add_background_object(create_plstonewall7_2947(7528, 1456), 3);
    add_background_object(create_plstonewall7_2947(7672, 1536), 3);
    add_background_object(create_plstonewall7_2947(7840, 1528), 3);
    add_background_object(create_plground3_2939(7912, 1424), 3);
    add_background_object(create_plground13_2936(7936, 1424), 3);
    add_background_object(create_plground4_2931(8000, 1424), 3);
    add_background_object(create_plstonewall1_2913(8192, 1568), 3);
    add_background_object(create_plstonewall1_2913(8192, 1696), 3);
    add_background_object(create_plstonewall21_2952(7680, 1056), 3);
    add_background_object(create_plstonewall13_2915(7680, 1184), 3);
    add_background_object(create_plground3_2939(8000, 1568), 3);
    add_background_object(create_plground13_2936(8024, 1568), 3);
    add_background_object(create_plground13_2936(8088, 1568), 3);
    add_background_object(create_plground13_2936(8152, 1568), 3);
    add_background_object(create_plground13_2936(8216, 1568), 3);
    add_background_object(create_plground4_2931(8280, 1568), 3);
    add_background_object(create_plstonewall4_2937(8296, 1440), 3);
    add_background_object(create_plstonewall1_2913(8320, 1440), 3);
    add_background_object(create_plstonewall1_2913(8448, 1568), 3);
    add_background_object(create_plstonewall1_2913(8448, 1696), 3);
    add_background_object(create_plstonewall6_2912(8304, 1520), 3);
    add_background_object(create_plstonewall4_2937(8296, 1312), 3);
    add_background_object(create_plstonewall1_2913(8320, 1312), 3);
    add_background_object(create_plstonewall4_2937(8296, 1056), 3);
    add_background_object(create_plstonewall1_2913(8320, 1056), 3);
    add_background_object(create_plstonewall12_2914(8320, 1184), 3);
    add_background_object(create_plstonewall13_2915(8448, 1184), 3);
    add_background_object(create_plground3_2939(8296, 1288), 3);
    add_background_object(create_plground2_2944(8448, 1288), 3);
    add_background_object(create_plground1_2943(8320, 1288), 3);
    add_background_object(create_plground3_2939(8264, 1344), 3);
    add_background_object(create_plground4_2931(8288, 1344), 3);
    add_background_object(create_plstonewall3_2926(7808, 1056), 3);
    add_background_object(create_plground4_2931(7808, 1040), 3);
    add_background_object(create_plground3_2939(8296, 1040), 3);
    add_background_object(create_plground1_2943(8384, 1040), 3);
    add_background_object(create_plground3_2939(8024, 1040), 3);
    add_background_object(create_plground4_2931(8080, 1040), 3);
    add_background_object(create_plvine1_2938(8056, 1104), 3);
    add_background_object(create_plvine2_2941(8056, 1176), 3);
    add_background_object(create_plstonewall8_2927(6840, 608), 3);
    add_background_object(create_plstonewall1_2913(6072, 352), 3);
    add_background_object(create_plstonewall1_2913(6072, 224), 3);
    add_background_object(create_plstonewall1_2913(6072, 96), 3);
    add_background_object(create_plstonewall1_2913(6072, -32), 3);
    add_background_object(create_plstonewall12_2914(6072, 480), 3);
    add_background_object(create_plstonewall13_2915(6200, 480), 3);
    add_background_object(create_plstonewall1_2913(6328, 352), 3);
    add_background_object(create_plstonewall1_2913(6328, 224), 3);
    add_background_object(create_plstonewall1_2913(6328, 96), 3);
    add_background_object(create_plstonewall1_2913(6328, -32), 3);
    add_background_object(create_plstonewall12_2914(6328, 480), 3);
    add_background_object(create_plstonewall13_2915(6456, 480), 3);
    add_background_object(create_plstonewall1_2913(6584, 352), 3);
    add_background_object(create_plstonewall1_2913(6584, 224), 3);
    add_background_object(create_plstonewall1_2913(6584, 96), 3);
    add_background_object(create_plstonewall1_2913(6584, -32), 3);
    add_background_object(create_plstonewall12_2914(6584, 480), 3);
    add_background_object(create_plstonewall13_2915(6712, 480), 3);
    add_background_object(create_plstonewall1_2913(6840, 352), 3);
    add_background_object(create_plstonewall1_2913(6840, 224), 3);
    add_background_object(create_plstonewall1_2913(6840, 96), 3);
    add_background_object(create_plstonewall1_2913(6840, -32), 3);
    add_background_object(create_plstonewall1_2913(6840, 480), 3);
    add_background_object(create_plstonewall1_2913(6968, 608), 3);
    add_background_object(create_plstonewall12_2914(6968, 736), 3);
    add_background_object(create_plstonewall13_2915(7096, 736), 3);
    add_background_object(create_plstonewall4_2937(6816, 480), 3);
    add_background_object(create_plstonewall6_2912(6824, 528), 3);
    add_background_object(create_dvceilingoverlay_915(6912, 712), 3);
    add_background_object(create_dvceilingoverlay_915(6880, 680), 3);
    add_background_object(create_dvceilingoverlay_915(6856, 648), 3);
    add_background_object(create_dvceilingoverlay_915(6824, 616), 3);
    add_background_object(create_plstonewall7_2947(5944, 400), 3);
    add_background_object(create_plstonewall7_2947(6088, 360), 3);
    add_background_object(create_plstonewall7_2947(6224, 352), 3);
    add_background_object(create_plstonewall7_2947(6392, 360), 3);
    add_background_object(create_plstonewall7_2947(6544, 352), 3);
    add_background_object(create_plstonewall7_2947(6712, 360), 3);
    add_background_object(create_plstonewall7_2947(6840, 432), 3);
    add_background_object(create_plstonewall7_2947(6864, 544), 3);
    add_background_object(create_plstonewall7_2947(6984, 616), 3);
    add_background_object(create_plstonewall1_2913(8576, 1416), 3);
    add_background_object(create_plstonewall1_2913(8832, 1288), 3);
    add_background_object(create_plstonewall1_2913(8832, 1416), 3);
    add_background_object(create_plstonewall6_2912(8544, 1312), 3);
    add_background_object(create_plstonewall6_2912(8528, 1472), 3);
    add_background_object(create_plstonewall6_2912(8688, 1232), 3);
    add_background_object(create_plstonewall3_2926(8576, 1056), 3);
    add_background_object(create_plground4_2931(8576, 1048), 3);
    add_background_object(create_plground8_2925(8576, 1168), 3);
    add_background_object(create_plground2_2944(8832, 1136), 3);
    add_background_object(create_plground2_2944(8704, 1144), 3);
    add_background_object(create_plstonewall7_2947(7128, 608), 3);
    add_background_object(create_plstonewall7_2947(7280, 616), 3);
    add_background_object(create_plstonewall9_2928(7480, 608), 3);
    add_background_object(create_plstonewall1_2913(7352, 480), 3);
    add_background_object(create_plstonewall9_2928(7608, 480), 3);
    add_background_object(create_plstonewall6_2912(7472, 512), 3);
    add_background_object(create_plstonewall7_2947(7408, 584), 3);
    add_background_object(create_plstonewall7_2947(7512, 480), 3);
    add_background_object(create_plstonewall1_2913(7096, 352), 3);
    add_background_object(create_plstonewall1_2913(7352, 352), 3);
    add_background_object(create_plstonewall21_2952(7608, 352), 3);
    add_background_object(create_plstonewall1_2913(7096, 224), 3);
    add_background_object(create_plstonewall1_2913(7352, 224), 3);
    add_background_object(create_plstonewall21_2952(7608, 224), 3);
    add_background_object(create_plstonewall1_2913(7096, 96), 3);
    add_background_object(create_plstonewall1_2913(7352, 96), 3);
    add_background_object(create_plstonewall21_2952(7608, 96), 3);
    add_background_object(create_plstonewall1_2913(7096, -32), 3);
    add_background_object(create_plstonewall1_2913(7352, -32), 3);
    add_background_object(create_plstonewall21_2952(7608, -32), 3);
    add_background_object(create_plstonewall6_2912(7592, 360), 3);
    add_background_object(create_plstonewall3_2926(7736, 352), 3);
    add_background_object(create_plstonewall3_2926(7736, 224), 3);
    add_background_object(create_plstonewall3_2926(7736, 96), 3);
    add_background_object(create_plstonewall3_2926(7736, -32), 3);
    add_background_object(create_plstonewall7_2947(7600, 376), 3);
    add_background_object(create_plstonewall7_2947(7616, 248), 3);
    add_background_object(create_plstonewall7_2947(7600, 112), 3);
    add_background_object(create_plstonewall7_2947(7624, -24), 3);
    add_background_object(create_dvceilingoverlay_915(7408, 696), 3);
    add_background_object(create_dvceilingoverlay_915(7464, 656), 3);
    add_background_object(create_dvceilingoverlay_915(7544, 576), 3);
    add_background_object(create_dvceilingoverlay_915(7568, 544), 3);
    add_background_object(create_dvceilingoverlay_915(7600, 512), 3);
    add_background_object(create_plstonewall22_2929(8032, 1104), 3);
    add_background_object(create_plstonewall6_2912(8824, 1224), 3);
    add_background_object(create_plground13_2936(7680, 1040), 3);
    add_background_object(create_plground13_2936(7744, 1040), 3);
    add_background_object(create_plground13_2936(8320, 1040), 3);
    add_background_object(create_plground13_2936(8512, 1048), 3);
    add_background_object(create_plbrickwall1_2918(8960, 1160), 3);
    add_background_object(create_plbrickwall1_2918(10112, 1160), 3);
    add_background_object(create_plstonewall3_2926(8960, 1160), 3);
    add_background_object(create_plground4_2931(8960, 1136), 3);
    add_background_object(create_plstonewall1_2913(10112, 1288), 3);
    add_background_object(create_plstonewall1_2913(10112, 1416), 3);
    add_background_object(create_plbrickwall1_2918(10240, 1160), 3);
    add_background_object(create_plbrickwall2_2919(10336, 1160), 3);
    add_background_object(create_plstonewall6_2912(8936, 1256), 3);
    add_background_object(create_plstonewall7_2947(7976, 1608), 3);
    add_background_object(create_plstonewall7_2947(8120, 1592), 3);
    add_background_object(create_plstonewall7_2947(8264, 1608), 3);
    add_background_object(create_plstonewall7_2947(8312, 1488), 3);
    add_background_object(create_plstonewall7_2947(8328, 1352), 3);
    add_background_object(create_plstonewall7_2947(8480, 1328), 3);
    add_background_object(create_plstonewall7_2947(8640, 1304), 3);
    add_background_object(create_plstonewall7_2947(8696, 1184), 3);
    add_background_object(create_plstonewall7_2947(8840, 1176), 3);
    add_background_object(create_plstonewall7_2947(8896, 1296), 3);
    add_background_object(create_plstonewall7_2947(8320, 1064), 3);
    add_background_object(create_plstonewall7_2947(8456, 1072), 3);
    add_background_object(create_plstonewall10_2940(10368, 1464), 3);
    add_background_object(create_plstonewall1_2913(10112, 1544), 3);
    add_background_object(create_plstonewall1_2913(10368, 1544), 3);
    add_background_object(create_plstonewall1_2913(10368, 1672), 3);
    add_background_object(create_plstonewall1_2913(10624, 1544), 3);
    add_background_object(create_plstonewall1_2913(10624, 1672), 3);
    add_background_object(create_plground7_2951(10368, 1416), 3);
    add_background_object(create_plground2_2944(10232, 1280), 3);
    add_background_object(create_plground1_2943(10104, 1280), 3);
    add_background_object(create_plground3_2939(10080, 1280), 3);
    add_background_object(create_plground1_2943(10496, 1536), 3);
    add_background_object(create_plground2_2944(10624, 1536), 3);
    add_background_object(create_plstonewall15_2942(10880, 1544), 3);
    add_background_object(create_plstonewall1_2913(10880, 1696), 3);
    add_background_object(create_plstonewall10_2940(11008, 1616), 3);
    add_background_object(create_plstonewall1_2913(10624, 1800), 3);
    add_background_object(create_plstonewall1_2913(10880, 1824), 3);
    add_background_object(create_plstonewall6_2912(10912, 1648), 3);
    add_background_object(create_plstonewall6_2912(10824, 1584), 3);
    add_background_object(create_plground1_2943(10752, 1536), 3);
    add_background_object(create_plstonewall1_2913(11136, 1696), 3);
    add_background_object(create_plstonewall1_2913(11136, 1824), 3);
    add_background_object(create_plground11_2950(10880, 1544), 3);
    add_background_object(create_plground12_2949(11008, 1616), 3);
    add_background_object(create_plground2_2944(11136, 1688), 3);
    add_background_object(create_plground1_2943(11264, 1688), 3);
    add_background_object(create_plstonewall1_2913(10368, 1800), 3);
    add_background_object(create_plstonewall1_2913(10112, 1672), 3);
    add_background_object(create_plstonewall1_2913(11392, 1696), 3);
    add_background_object(create_plstonewall1_2913(11392, 1824), 3);
    add_background_object(create_plground2_2944(11392, 1688), 3);
    add_background_object(create_plground1_2943(11520, 1688), 3);
    add_background_object(create_plstonewall1_2913(11648, 1696), 3);
    add_background_object(create_plstonewall1_2913(11648, 1824), 3);
    add_background_object(create_plground2_2944(11648, 1688), 3);
    add_background_object(create_plground1_2943(11776, 1688), 3);
    add_background_object(create_plstonewall1_2913(11904, 1696), 3);
    add_background_object(create_plstonewall1_2913(11904, 1824), 3);
    add_background_object(create_plbrickwall1_2918(11904, 1568), 3);
    add_background_object(create_plbrickwall1_2918(12032, 1568), 3);
    add_background_object(create_plstonewall1_2913(12160, 1696), 3);
    add_background_object(create_plstonewall1_2913(12160, 1824), 3);
    add_background_object(create_plbrickwall1_2918(11904, 1440), 3);
    add_background_object(create_plbrickwall1_2918(12032, 1440), 3);
    add_background_object(create_plbrickwall1_2918(11904, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12032, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12160, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12288, 1184), 3);
    add_background_object(create_plbrickwall1_2918(11776, 1184), 3);
    add_background_object(create_plbrickwall1_2918(11904, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12032, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12160, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12288, 1312), 3);
    add_background_object(create_plstonewall11_2924(1024, 1624), 3);
    add_background_object(create_plground8_2925(1024, 1584), 3);
    add_background_object(create_plstonewall1_2913(8432, 696), 3);
    add_background_object(create_plstonewall12_2914(8432, 824), 3);
    add_background_object(create_plstonewall4_2937(8408, 696), 3);
    add_background_object(create_plstonewall1_2913(8432, 568), 3);
    add_background_object(create_plstonewall3_2926(8944, 568), 3);
    add_background_object(create_plstonewall4_2937(8408, 568), 3);
    add_background_object(create_plstonewall1_2913(8432, 440), 3);
    add_background_object(create_plstonewall3_2926(8944, 440), 3);
    add_background_object(create_plstonewall4_2937(8408, 440), 3);
    add_background_object(create_plstonewall1_2913(8432, 312), 3);
    add_background_object(create_plstonewall3_2926(8688, 312), 3);
    add_background_object(create_plstonewall4_2937(8408, 312), 3);
    add_background_object(create_plstonewall1_2913(8432, 184), 3);
    add_background_object(create_plstonewall3_2926(8944, 184), 3);
    add_background_object(create_plstonewall4_2937(8408, 184), 3);
    add_background_object(create_plstonewall1_2913(8432, 56), 3);
    add_background_object(create_plstonewall1_2913(8688, 56), 3);
    add_background_object(create_plstonewall1_2913(8688, 184), 3);
    add_background_object(create_plstonewall1_2913(8688, 440), 3);
    add_background_object(create_plstonewall1_2913(8688, 568), 3);
    add_background_object(create_plstonewall4_2937(8408, 56), 3);
    add_background_object(create_plstonewall7_2947(8424, 704), 3);
    add_background_object(create_plstonewall7_2947(8824, 704), 3);
    add_background_object(create_plstonewall7_2947(8424, 576), 3);
    add_background_object(create_plstonewall7_2947(8824, 576), 3);
    add_background_object(create_plstonewall7_2947(8424, 448), 3);
    add_background_object(create_plstonewall7_2947(8824, 448), 3);
    add_background_object(create_plstonewall7_2947(8424, 320), 3);
    add_background_object(create_plstonewall7_2947(8424, 184), 3);
    add_background_object(create_plbrickwall3_2923(11872, 1312), 3);
    add_background_object(create_plbrickwall3_2923(11872, 1440), 3);
    add_background_object(create_plbrickwall3_2923(11872, 1568), 3);
    add_background_object(create_plstonewall6_2912(11896, 1680), 3);
    add_background_object(create_plstonewall6_2912(11984, 1664), 3);
    add_background_object(create_plground4_2931(11904, 1696), 3);
    add_background_object(create_plbrickwall3_2923(11744, 1184), 3);
    add_background_object(create_plstonewall1_2913(12160, 1440), 3);
    add_background_object(create_plstonewall4_2937(12136, 1568), 3);
    add_background_object(create_plstonewall4_2937(12136, 1440), 3);
    add_background_object(create_plstonewall6_2912(12080, 1680), 3);
    add_background_object(create_plstonewall6_2912(12128, 1424), 3);
    add_background_object(create_plstonewall6_2912(12280, 1408), 3);
    add_background_object(create_plbrickwall1_2918(12416, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12416, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12416, 1056), 3);
    add_background_object(create_plground8_2925(12416, 936), 3);
    add_background_object(create_plbrickwall1_2918(12544, 1056), 3);
    add_background_object(create_plbrickwall1_2918(12544, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12576, 928), 3);
    add_background_object(create_plbrickwall1_2918(12576, 800), 3);
    add_background_object(create_plbrickwall3_2923(12544, 928), 3);
    add_background_object(create_plbrickwall3_2923(12544, 800), 3);
    add_background_object(create_plbrickwall1_2918(12672, 1056), 3);
    add_background_object(create_plbrickwall1_2918(12672, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12544, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12672, 1312), 3);
    add_background_object(create_plstonewall1_2913(12416, 1568), 3);
    add_background_object(create_plstonewall1_2913(12416, 1696), 3);
    add_background_object(create_plstonewall1_2913(12416, 1824), 3);
    add_background_object(create_plstonewall1_2913(12416, 1440), 3);
    add_background_object(create_plstonewall1_2913(12672, 1568), 3);
    add_background_object(create_plstonewall1_2913(12672, 1696), 3);
    add_background_object(create_plstonewall1_2913(12672, 1824), 3);
    add_background_object(create_plstonewall1_2913(12672, 1440), 3);
    add_background_object(create_plbrickwall1_2918(12800, 1056), 3);
    add_background_object(create_plbrickwall1_2918(12800, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12800, 1312), 3);
    add_background_object(create_plbrickwall2_2919(12704, 928), 3);
    add_background_object(create_plbrickwall2_2919(12704, 800), 3);
    add_background_object(create_plbrickwall1_2918(12928, 1056), 3);
    add_background_object(create_plbrickwall1_2918(12928, 1184), 3);
    add_background_object(create_plbrickwall1_2918(13056, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13056, 1184), 3);
    add_background_object(create_plbrickwall1_2918(12928, 1312), 3);
    add_background_object(create_plbrickwall1_2918(13056, 1312), 3);
    add_background_object(create_plbrickwall1_2918(13184, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13184, 1184), 3);
    add_background_object(create_plbrickwall1_2918(13184, 1312), 3);
    add_background_object(create_plbrickwall1_2918(12896, 928), 3);
    add_background_object(create_plbrickwall1_2918(12896, 800), 3);
    add_background_object(create_plbrickwall3_2923(12864, 928), 3);
    add_background_object(create_plbrickwall3_2923(12864, 800), 3);
    add_background_object(create_plbrickwall2_2919(13024, 928), 3);
    add_background_object(create_plbrickwall2_2919(13024, 800), 3);
    add_background_object(create_plbrickwall1_2918(13216, 928), 3);
    add_background_object(create_plbrickwall1_2918(13216, 800), 3);
    add_background_object(create_plbrickwall3_2923(13184, 928), 3);
    add_background_object(create_plbrickwall3_2923(13184, 800), 3);
    add_background_object(create_plbrickwall2_2919(13344, 928), 3);
    add_background_object(create_plbrickwall1_2918(12576, 544), 3);
    add_background_object(create_plbrickwall3_2923(12544, 544), 3);
    add_background_object(create_plbrickwall1_2918(12704, 544), 3);
    add_background_object(create_plbrickwall1_2918(12832, 544), 3);
    add_background_object(create_plbrickwall1_2918(12960, 544), 3);
    add_background_object(create_plbrickwall1_2918(13088, 544), 3);
    add_background_object(create_plbrickwall1_2918(13216, 544), 3);
    add_background_object(create_plbrickwall1_2918(13344, 544), 3);
    add_background_object(create_plbrickwall1_2918(13312, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13312, 1184), 3);
    add_background_object(create_plbrickwall2_2919(13472, 544), 3);
    add_background_object(create_plbrickwall1_2918(13344, 800), 3);
    add_background_object(create_plbrickwall1_2918(13440, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13440, 1184), 3);
    add_background_object(create_plbrickwall1_2918(13568, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13568, 1184), 3);
    add_background_object(create_plbrickwall1_2918(13696, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13696, 1184), 3);
    add_background_object(create_plbrickwall1_2918(13472, 800), 3);
    add_background_object(create_plbrickwall1_2918(13600, 800), 3);
    add_background_object(create_plbrickwall1_2918(13728, 800), 3);
    add_background_object(create_plbrickwall1_2918(13824, 1056), 3);
    add_background_object(create_plbrickwall1_2918(13824, 1184), 3);
    add_background_object(create_plstonewall6_2912(12320, 1088), 3);
    add_background_object(create_plground10_2948(12288, 1056), 3);
    add_background_object(create_plbrickwall4_2953(12544, 512), 3);
    add_background_object(create_plbrickwall5_2921(12576, 512), 3);
    add_background_object(create_plbrickwall6_2954(12640, 512), 3);
    add_background_object(create_plbrickwall4_2953(13376, 512), 3);
    add_background_object(create_plbrickwall5_2921(13408, 512), 3);
    add_background_object(create_plbrickwall6_2954(13472, 512), 3);
    add_background_object(create_plbrickwall4_2953(13080, 512), 3);
    add_background_object(create_plbrickwall5_2921(13112, 512), 3);
    add_background_object(create_plbrickwall6_2954(13176, 512), 3);
    add_background_object(create_plbrickwall4_2953(12832, 512), 3);
    add_background_object(create_plbrickwall5_2921(12864, 512), 3);
    add_background_object(create_plbrickwall6_2954(12928, 512), 3);
    add_background_object(create_plbrickwall4_2953(11808, 1312), 3);
    add_background_object(create_plbrickwall5_2921(11840, 1312), 3);
    add_background_object(create_plpinwheelstalk_2920(1560, 1344), 3);
    add_background_object(create_plpinwheelstalk_2920(1696, 1280), 3);
    add_background_object(create_plpinwheelstalk_2920(4904, 1200), 3);
    add_background_object(create_plpinwheelstalk_2920(5592, 1288), 3);
    add_background_object(create_plpinwheelstalk_2920(7768, 960), 3);
    add_background_object(create_plpinwheelstalk_2920(12336, 1000), 3);
    add_background_object(create_plstonewall1_2913(3144, 352), 3);
    add_background_object(create_plstonewall1_2913(3144, 224), 3);
    add_background_object(create_plstonewall1_2913(3144, 96), 3);
    add_background_object(create_plstonewall1_2913(3144, -32), 3);
    add_background_object(create_plstonewall1_2913(3400, 352), 3);
    add_background_object(create_plstonewall1_2913(3400, 224), 3);
    add_background_object(create_plstonewall1_2913(3400, 96), 3);
    add_background_object(create_plstonewall1_2913(3400, -32), 3);
    add_background_object(create_plstonewall1_2913(3656, 480), 3);
    add_background_object(create_plstonewall1_2913(3656, 352), 3);
    add_background_object(create_plstonewall1_2913(3656, 224), 3);
    add_background_object(create_plstonewall1_2913(3656, 96), 3);
    add_background_object(create_plstonewall1_2913(3656, -32), 3);
    add_background_object(create_plstonewall1_2913(3912, 480), 3);
    add_background_object(create_plstonewall1_2913(3912, 352), 3);
    add_background_object(create_plstonewall1_2913(3912, 224), 3);
    add_background_object(create_plstonewall1_2913(3912, 96), 3);
    add_background_object(create_plstonewall1_2913(3912, -32), 3);
    add_background_object(create_plstonewall1_2913(4168, 480), 3);
    add_background_object(create_plstonewall1_2913(4168, 352), 3);
    add_background_object(create_plstonewall1_2913(4168, 224), 3);
    add_background_object(create_plstonewall1_2913(4168, 96), 3);
    add_background_object(create_plstonewall1_2913(4168, -32), 3);
    add_background_object(create_plstonewall1_2913(4424, 480), 3);
    add_background_object(create_plstonewall1_2913(4424, 352), 3);
    add_background_object(create_plstonewall1_2913(4424, 224), 3);
    add_background_object(create_plstonewall1_2913(4424, 96), 3);
    add_background_object(create_plstonewall1_2913(4424, -32), 3);
    add_background_object(create_plstonewall1_2913(4680, 480), 3);
    add_background_object(create_plstonewall1_2913(4680, 352), 3);
    add_background_object(create_plstonewall1_2913(4680, 224), 3);
    add_background_object(create_plstonewall1_2913(4680, 96), 3);
    add_background_object(create_plstonewall1_2913(4680, -32), 3);
    add_background_object(create_plstonewall1_2913(4936, 352), 3);
    add_background_object(create_plstonewall1_2913(4936, 224), 3);
    add_background_object(create_plstonewall1_2913(4936, 96), 3);
    add_background_object(create_plstonewall1_2913(4936, -32), 3);
    add_background_object(create_plstonewall1_2913(5192, 352), 3);
    add_background_object(create_plstonewall1_2913(5192, 224), 3);
    add_background_object(create_plstonewall1_2913(5192, 96), 3);
    add_background_object(create_plstonewall1_2913(5192, -32), 3);
    add_background_object(create_plstonewall1_2913(5448, 352), 3);
    add_background_object(create_plstonewall1_2913(5448, 224), 3);
    add_background_object(create_plstonewall1_2913(5448, 96), 3);
    add_background_object(create_plstonewall1_2913(5448, -32), 3);
    add_background_object(create_plstonewall21_2952(5704, 352), 3);
    add_background_object(create_plstonewall21_2952(5704, 224), 3);
    add_background_object(create_plstonewall21_2952(5704, 96), 3);
    add_background_object(create_plstonewall21_2952(5704, -32), 3);
    add_background_object(create_plground3_2939(3872, 992), 3);
    add_background_object(create_plground1_2943(4016, 992), 3);
    add_background_object(create_plground2_2944(4136, 992), 3);
    add_background_object(create_plground1_2943(4256, 992), 3);
    add_background_object(create_plground4_2931(4376, 1000), 3);
    add_background_object(create_plground3_2939(3664, 1320), 3);
    add_background_object(create_jcbridgesegment_2425(3872, 968), 3);
    add_background_object(create_plground13_2936(3896, 992), 3);
    add_background_object(create_plground13_2936(3952, 992), 3);
    add_background_object(create_plstonewall12_2914(4008, 1064), 3);
    add_background_object(create_plstonewall12_2914(4264, 1064), 3);
    add_background_object(create_plstonewall19_2955(2280, 1240), 3);
    add_background_object(create_plground9_2935(2152, 1288), 3);
    add_background_object(create_plground10_2948(2280, 1216), 3);
    add_background_object(create_plground4_2931(2408, 1216), 3);
    add_background_object(create_plground3_2939(2064, 1368), 3);
    add_background_object(create_plground13_2936(2088, 1368), 3);
    add_background_object(create_plground4_2931(3736, 1320), 3);
    add_background_object(create_plground13_2936(3680, 1320), 3);
    add_background_object(create_plstonewall13_2915(8560, 824), 3);
    add_background_object(create_plstonewall7_2947(8696, 704), 3);
    add_background_object(create_plstonewall7_2947(8560, 704), 3);
    add_background_object(create_plstonewall7_2947(8752, 808), 3);
    add_background_object(create_dvceilingoverlay_915(8744, 920), 3);
    add_background_object(create_dvceilingoverlay_915(8712, 888), 3);
    add_background_object(create_dvceilingoverlay_915(8776, 888), 3);
    add_background_object(create_dvceilingoverlay_915(8816, 840), 3);
    add_background_object(create_plstonewall1_2913(8432, -72), 3);
    add_background_object(create_plstonewall1_2913(8688, -72), 3);
    add_background_object(create_plstonewall4_2937(8408, -72), 3);
    add_background_object(create_plbrickwall1_2918(9088, 1160), 3);
    add_background_object(create_plstonewall1_2913(9088, 1288), 3);
    add_background_object(create_plstonewall1_2913(9088, 1416), 3);
    add_background_object(create_plstonewall21_2952(9216, 1160), 3);
    add_background_object(create_plstonewall4_2937(9192, 1160), 3);
    add_background_object(create_plbrickwall1_2918(9216, 904), 3);
    add_background_object(create_plstonewall6_2912(9184, 1104), 3);
    add_background_object(create_plbrickwall3_2923(9216, 904), 3);
    add_background_object(create_plbrickwall1_2918(9216, 776), 3);
    add_background_object(create_plbrickwall2_2919(9312, 776), 3);
    add_background_object(create_plbrickwall3_2923(9216, 776), 3);
    add_background_object(create_plbrickwall1_2918(9216, 648), 3);
    add_background_object(create_plbrickwall2_2919(9312, 648), 3);
    add_background_object(create_plbrickwall3_2923(9216, 648), 3);
    add_background_object(create_plbrickwall1_2918(9216, 520), 3);
    add_background_object(create_plbrickwall3_2923(9216, 520), 3);
    add_background_object(create_plstonewall7_2947(8432, 32), 3);
    add_background_object(create_plbrickwall4_2953(9216, 488), 3);
    add_background_object(create_plbrickwall6_2954(9280, 488), 3);
    add_background_object(create_plstonewall1_2913(8944, 56), 3);
    add_background_object(create_plstonewall1_2913(8944, -72), 3);
    add_background_object(create_plstonewall1_2913(9200, 56), 3);
    add_background_object(create_plstonewall1_2913(9200, -72), 3);
    add_background_object(create_plstonewall12_2914(8944, 184), 3);
    add_background_object(create_plstonewall13_2915(9072, 184), 3);
    add_background_object(create_plstonewall12_2914(9200, 184), 3);
    add_background_object(create_plstonewall13_2915(9328, 184), 3);
    add_background_object(create_plstonewall7_2947(8824, 184), 3);
    add_background_object(create_plstonewall7_2947(8864, 48), 3);
    add_background_object(create_plstonewall7_2947(9016, 56), 3);
    add_background_object(create_plstonewall7_2947(9184, 56), 3);
    add_background_object(create_plstonewall7_2947(9328, 56), 3);
    add_background_object(create_plstonewall1_2913(9456, 56), 3);
    add_background_object(create_plstonewall1_2913(9456, -72), 3);
    add_background_object(create_plstonewall12_2914(9456, 184), 3);
    add_background_object(create_plbrickwall1_2918(9344, 968), 3);
    add_background_object(create_plstonewall1_2913(9344, 1160), 3);
    add_background_object(create_plstonewall1_2913(9344, 1288), 3);
    add_background_object(create_plstonewall1_2913(9344, 1416), 3);
    add_background_object(create_plbrickwall1_2918(9472, 1032), 3);
    add_background_object(create_plbrickwall1_2918(9600, 1032), 3);
    add_background_object(create_plstonewall1_2913(9600, 1160), 3);
    add_background_object(create_plstonewall1_2913(9600, 1288), 3);
    add_background_object(create_plstonewall1_2913(9600, 1416), 3);
    add_background_object(create_plbrickwall1_2918(9728, 1032), 3);
    add_background_object(create_plstonewall6_2912(9328, 1136), 3);
    add_background_object(create_plstonewall6_2912(9480, 1128), 3);
    add_background_object(create_plstonewall6_2912(9624, 1144), 3);
    add_background_object(create_plstonewall6_2912(9728, 1128), 3);
    add_background_object(create_plbrickwall5_2921(9472, 1000), 3);
    add_background_object(create_plbrickwall6_2954(9536, 1000), 3);
    add_background_object(create_plbrickwall6_2954(9472, 968), 3);
    add_background_object(create_plbrickwall6_2954(9408, 936), 3);
    add_background_object(create_plbrickwall6_2954(9312, 904), 3);
    add_background_object(create_plbrickwall5_2921(9344, 936), 3);
    add_background_object(create_plstonewall1_2913(9712, 56), 3);
    add_background_object(create_plbrickwall1_2918(9584, 312), 3);
    add_background_object(create_plbrickwall3_2923(9584, 312), 3);
    add_background_object(create_plbrickwall3_2923(9584, 184), 3);
    add_background_object(create_plbrickwall1_2918(9584, 440), 3);
    add_background_object(create_plbrickwall1_2918(9584, 568), 3);
    add_background_object(create_plbrickwall2_2919(9680, 568), 3);
    add_background_object(create_plbrickwall2_2919(9680, 440), 3);
    add_background_object(create_plbrickwall3_2923(9584, 440), 3);
    add_background_object(create_plbrickwall1_2918(9584, 696), 3);
    add_background_object(create_plbrickwall2_2919(9680, 696), 3);
    add_background_object(create_plbrickwall3_2923(9584, 696), 3);
    add_background_object(create_plstonewall12_2914(9712, 184), 3);
    add_background_object(create_plstonewall13_2915(9840, 184), 3);
    add_background_object(create_plbrickwall5_2921(9632, 824), 3);
    add_background_object(create_plbrickwall4_2953(9600, 824), 3);
    add_background_object(create_plbrickwall6_2954(9680, 824), 3);
    add_background_object(create_plbrickwall1_2918(9856, 1032), 3);
    add_background_object(create_plbrickwall1_2918(9856, 776), 3);
    add_background_object(create_plbrickwall2_2919(9984, 776), 3);
    add_background_object(create_plbrickwall3_2923(9856, 776), 3);
    add_background_object(create_plbrickwall1_2918(9856, 904), 3);
    add_background_object(create_plbrickwall2_2919(9984, 904), 3);
    add_background_object(create_plbrickwall3_2923(9856, 904), 3);
    add_background_object(create_plbrickwall1_2918(9856, 648), 3);
    add_background_object(create_plbrickwall2_2919(9984, 648), 3);
    add_background_object(create_plbrickwall3_2923(9856, 648), 3);
    add_background_object(create_plbrickwall1_2918(9856, 392), 3);
    add_background_object(create_plbrickwall2_2919(9984, 392), 3);
    add_background_object(create_plbrickwall3_2923(9856, 392), 3);
    add_background_object(create_plbrickwall2_2919(9984, 1032), 3);
    add_background_object(create_plbrickwall5_2921(9984, 1128), 3);
    add_background_object(create_plbrickwall5_2921(10048, 1128), 3);
    add_background_object(create_plbrickwall6_2954(10112, 1128), 3);
    add_background_object(create_plbrickwall5_2921(9344, 552), 3);
    add_background_object(create_plbrickwall6_2954(9312, 520), 3);
    add_background_object(create_plbrickwall6_2954(9312, 584), 3);
    add_background_object(create_plbrickwall6_2954(9312, 616), 3);
    add_background_object(create_plbrickwall5_2921(9408, 552), 3);
    add_background_object(create_plbrickwall6_2954(9472, 552), 3);
    add_background_object(create_plbrickwall5_2921(9520, 664), 3);
    add_background_object(create_plbrickwall5_2921(9456, 664), 3);
    add_background_object(create_plbrickwall4_2953(9584, 568), 3);
    add_background_object(create_plbrickwall4_2953(9584, 600), 3);
    add_background_object(create_plbrickwall4_2953(9584, 632), 3);
    add_background_object(create_plbrickwall4_2953(9424, 664), 3);
    add_background_object(create_plbrickwall1_2918(10208, 520), 3);
    add_background_object(create_plbrickwall2_2919(10336, 520), 3);
    add_background_object(create_plbrickwall3_2923(10208, 520), 3);
    add_background_object(create_plbrickwall1_2918(10208, 392), 3);
    add_background_object(create_plbrickwall2_2919(10336, 392), 3);
    add_background_object(create_plbrickwall3_2923(10208, 392), 3);
    add_background_object(create_plbrickwall1_2918(10208, 776), 3);
    add_background_object(create_plbrickwall2_2919(10336, 776), 3);
    add_background_object(create_plbrickwall3_2923(10208, 776), 3);
    add_background_object(create_plbrickwall1_2918(10208, 648), 3);
    add_background_object(create_plbrickwall2_2919(10336, 648), 3);
    add_background_object(create_plbrickwall3_2923(10208, 648), 3);
    add_background_object(create_plstonewall1_2913(9968, -72), 3);
    add_background_object(create_plstonewall9_2928(10224, 56), 3);
    add_background_object(create_plstonewall9_2928(10352, -72), 3);
    add_background_object(create_plstonewall21_2952(10224, -72), 3);
    add_background_object(create_plbrickwall1_2918(10208, 264), 3);
    add_background_object(create_plbrickwall2_2919(10336, 264), 3);
    add_background_object(create_plbrickwall2_2919(10336, 136), 3);
    add_background_object(create_plbrickwall5_2921(10176, 136), 3);
    add_background_object(create_plbrickwall5_2921(10112, 136), 3);
    add_background_object(create_plbrickwall5_2921(10176, 168), 3);
    add_background_object(create_plbrickwall4_2953(10112, 168), 3);
    add_background_object(create_plbrickwall5_2921(10144, 168), 3);
    add_background_object(create_plbrickwall5_2921(10176, 200), 3);
    add_background_object(create_plbrickwall4_2953(10144, 200), 3);
    add_background_object(create_plbrickwall4_2953(10176, 232), 3);
    add_background_object(create_plstonewall6_2912(9584, 104), 3);
    add_background_object(create_plstonewall1_2913(9712, -72), 3);
    add_background_object(create_plbrickwall4_2953(9888, 360), 3);
    add_background_object(create_plbrickwall6_2954(9952, 360), 3);
    add_background_object(create_plground4_2931(8944, 424), 3);
    add_background_object(create_plground13_2936(8880, 424), 3);
    add_background_object(create_plground13_2936(8816, 424), 3);
    add_background_object(create_plground13_2936(8752, 424), 3);
    add_background_object(create_plground13_2936(8688, 424), 3);
    add_background_object(create_plground3_2939(8664, 424), 3);
    add_background_object(create_plstonewall7_2947(8688, 440), 3);
    add_background_object(create_plstonewall7_2947(8680, 576), 3);
    add_background_object(create_plstonewall7_2947(8552, 448), 3);
    add_background_object(create_plstonewall7_2947(8552, 312), 3);
    add_background_object(create_plstonewall7_2947(8688, 184), 3);
    add_background_object(create_plstonewall7_2947(8568, 176), 3);
    add_background_object(create_plpinwheelstalk_2920(11712, 1624), 3);
    add_background_object(create_plpinwheelstalk_2920(11328, 1600), 3);
    add_background_object(create_plpinwheelstalk_2920(10752, 1464), 3);
    add_background_object(create_plstonewall1_2913(9968, 56), 3);
    add_background_object(create_plstonewall12_2914(9968, 184), 3);
    add_background_object(create_plstonewall13_2915(10096, 184), 3);
    add_background_object(create_plbrickwall1_2918(9856, 520), 3);
    add_background_object(create_plbrickwall2_2919(9984, 520), 3);
    add_background_object(create_plbrickwall3_2923(9856, 520), 3);
    add_background_object(create_plbrickwall2_2919(9680, 312), 3);
    add_object(create_objectpinwheel_2956(1512, 1384), 3);
    add_object(create_pllayer11_2957(3200, 1360), 3);
    add_object(create_pllayer01_2958(7168, 1264), 3);
    add_object(create_pllayer02_2959(7296, 1192), 3);
    add_object(create_enemysunflora_2960(5904, 1320), 3);
    add_object(create_enemystingernest_2961(2688, 1476), 3);
    add_object(create_playerstartingpoint_358(125, 1773), 3);
    add_object(create_active_2962(1280, 1608), 3);
    add_object(create_active_2962(448, 1752), 3);
    add_object(create_enemystinger_2891(879, 1592), 3);
    add_object(create_enemystinger_2891(1567, 1600), 3);
    add_object(create_enemystinger_2891(1623, 1648), 3);
    add_object(create_enemystinger_2891(1679, 1632), 3);
    add_object(create_enemystinger_2891(1943, 1640), 3);
    add_object(create_enemystinger_2891(2015, 1624), 3);
    add_object(create_enemysunflora_2960(552, 1656), 3);
    add_object(create_enemysleepgas_2889(-200, 888), 3);
    add_object(create_enemysunflora_2960(1200, 1504), 3);
    add_object(create_objectcrystal_279(677, 1674), 3);
    add_object(create_objectcrystal_279(733, 1682), 3);
    add_object(create_objectcrystal_279(789, 1682), 3);
    add_object(create_objectcrystal_279(845, 1674), 3);
    add_object(create_objectcrystal_279(845, 1594), 3);
    add_object(create_objectcrystal_279(909, 1594), 3);
    add_object(create_objectcrystal_279(957, 1594), 3);
    add_object(create_active_2962(1408, 1456), 3);
    add_object(create_objectcrystal_279(1829, 1402), 3);
    add_object(create_objectcrystal_279(1877, 1402), 3);
    add_object(create_objectcrystal_279(1925, 1402), 3);
    add_object(create_objectcrystal_279(1661, 1338), 3);
    add_object(create_objectcrystal_279(1709, 1338), 3);
    add_object(create_objectcrystal_279(1757, 1338), 3);
    add_object(create_enemysunflora_2960(2688, 1536), 3);
    add_object(create_enemystinger_2891(1815, 1288), 3);
    add_object(create_enemystinger_2891(1919, 1336), 3);
    add_object(create_enemystingernest_2961(2880, 1132), 3);
    add_object(create_enemystinger_2891(2807, 1160), 3);
    add_object(create_enemystinger_2891(2951, 1112), 3);
    add_object(create_enemystinger_2891(2879, 1136), 3);
    add_object(create_objectcrystal_279(3165, 1298), 3);
    add_object(create_objectcrystal_279(3197, 1330), 3);
    add_object(create_objectcyclonetop_2963(4040, 1440), 3);
    add_object(create_yellowspringup_434(4376, 1744), 3);
    add_object(create_yellowspringup_434(4408, 1744), 3);
    add_object(create_objectcyclonetop_2963(4208, 1392), 3);
    add_object(create_objectcrystal_279(4333, 1314), 3);
    add_object(create_objectcrystal_279(4373, 1306), 3);
    add_object(create_objectcrystal_279(4413, 1298), 3);
    add_object(create_objectcrystal_279(4453, 1290), 3);
    add_object(create_objectcrystal_279(4493, 1282), 3);
    add_object(create_objectcrystal_279(4533, 1274), 3);
    add_object(create_objectcrystal_279(4573, 1266), 3);
    add_object(create_objectcrystal_279(4613, 1258), 3);
    add_object(create_objectcyclonetop_2963(5152, 1632), 3);
    add_object(create_objectcrystal_279(5157, 1610), 3);
    add_object(create_objectcrystal_279(5189, 1570), 3);
    add_object(create_objectcrystal_279(5237, 1538), 3);
    add_object(create_monitorwoodshield_325(4752, 1592), 3);
    add_object(create_active_2962(4544, 1696), 3);
    add_object(create_active_2962(4872, 1704), 3);
    add_object(create_objectcrystal_279(4653, 1250), 3);
    add_object(create_objectcrystal_279(4693, 1242), 3);
    add_object(create_enemysunflora_2960(5248, 1064), 3);
    add_object(create_objectcrystal_279(3533, 1258), 3);
    add_object(create_objectcrystal_279(3557, 1218), 3);
    add_object(create_objectcrystal_279(3589, 1258), 3);
    add_object(create_objectcrystal_279(3573, 1242), 3);
    add_object(create_objectcrystal_279(3549, 1242), 3);
    add_object(create_objectcrystal_279(3557, 1266), 3);
    add_object(create_objectcyclonetop_2963(5792, 1104), 3);
    add_object(create_objectcrystal_279(5333, 1034), 3);
    add_object(create_objectcrystal_279(5381, 1026), 3);
    add_object(create_objectcrystal_279(5429, 1026), 3);
    add_object(create_gimmickbridge12logs_353(6400, 752), 3);
    add_object(create_gimmickbridgelog_2339(8, -48), 3);
    add_object(create_monitorfireshield_328(6288, 776), 3);
    add_object(create_enemystingernest_2961(6488, 1380), 3);
    add_object(create_enemystingernest_2961(6624, 1428), 3);
    add_object(create_enemystingernest_2961(6752, 1340), 3);
    add_object(create_enemystingernest_2961(6656, 972), 3);
    add_object(create_enemystinger_2891(6639, 968), 3);
    add_object(create_enemystinger_2891(6447, 1376), 3);
    add_object(create_enemystinger_2891(6535, 1448), 3);
    add_object(create_enemystinger_2891(6687, 1384), 3);
    add_object(create_enemystinger_2891(6815, 1424), 3);
    add_object(create_enemystinger_2891(6071, 1296), 3);
    add_object(create_enemystinger_2891(5951, 1248), 3);
    add_object(create_pllayer11_2957(7112, 1200), 3);
    add_object(create_pllayer12_2964(6984, 1128), 3);
    add_object(create_layerchangeto0_405(6888, 1440), 3);
    add_object(create_layerchangeto0_405(6888, 1376), 3);
    add_object(create_layerchangeto0_405(6888, 1312), 3);
    add_object(create_layerchangeto0_405(6888, 1248), 3);
    add_object(create_layerchangeswitch_404(6912, 1064), 3);
    add_object(create_layerchangeswitch_404(6912, 1000), 3);
    add_object(create_layerchangeswitch_404(6912, 936), 3);
    add_object(create_layerchangeswitch_404(6912, 872), 3);
    add_object(create_pllayer12_2964(7240, 1280), 3);
    add_object(create_layerchangeswitch2_1239(7112, -136), 3);
    add_object(create_objectcrystal_279(6981, 1106), 3);
    add_object(create_objectcrystal_279(7029, 1114), 3);
    add_object(create_objectcrystal_279(7069, 1130), 3);
    add_object(create_objectcrystal_279(7101, 1162), 3);
    add_object(create_objectcrystal_279(7133, 1194), 3);
    add_object(create_objectcrystal_279(7461, 1154), 3);
    add_object(create_objectcrystal_279(7493, 1130), 3);
    add_object(create_objectcrystal_279(7525, 1106), 3);
    add_object(create_objectcrystal_279(7557, 1074), 3);
    add_object(create_objectcrystal_279(7589, 1042), 3);
    add_object(create_layerchangeswitch_404(7432, 1128), 3);
    add_object(create_layerchangeswitch_404(7432, 1064), 3);
    add_object(create_layerchangeswitch_404(7432, 1000), 3);
    add_object(create_layerchangeswitch_404(7432, 936), 3);
    add_object(create_pllayer01_2958(3200, 1352), 3);
    add_object(create_pllayer02_2959(3328, 1280), 3);
    add_object(create_pllayer12_2964(3072, 1288), 3);
    add_object(create_layerchangeto0_405(2912, 1344), 3);
    add_object(create_layerchangeto0_405(2912, 1408), 3);
    add_object(create_layerchangeto0_405(2912, 1472), 3);
    add_object(create_layerchangeto0_405(2912, 1536), 3);
    add_object(create_layerchangeswitch_404(3008, 1184), 3);
    add_object(create_layerchangeswitch_404(3008, 1120), 3);
    add_object(create_layerchangeswitch_404(3008, 1056), 3);
    add_object(create_layerchangeswitch_404(3008, 992), 3);
    add_object(create_layerchangeswitch_404(3480, 1224), 3);
    add_object(create_layerchangeswitch_404(3480, 1168), 3);
    add_object(create_layerchangeswitch_404(3480, 1112), 3);
    add_object(create_objectcrystal_279(3133, 1274), 3);
    add_object(create_objectcrystal_279(3229, 1362), 3);
    add_object(create_objectcrystal_279(3173, 1410), 3);
    add_object(create_objectcrystal_279(3133, 1418), 3);
    add_object(create_objectcrystal_279(3101, 1442), 3);
    add_object(create_objectcrystal_279(3069, 1474), 3);
    add_object(create_hazardspikesup_950(6752, 1088), 3);
    add_object(create_hazardspikesup_950(6784, 1088), 3);
    add_object(create_hazardspikesup_950(7704, 1472), 3);
    add_object(create_hazardspikesup_950(7736, 1472), 3);
    add_object(create_objectcyclonetop_2963(7872, 1472), 3);
    add_object(create_hazardspikesup_950(7768, 1472), 3);
    add_object(create_yellowspringup_434(8032, 1552), 3);
    add_object(create_yellowspringup_434(8064, 1552), 3);
    add_object(create_yellowspringup_434(8096, 1552), 3);
    add_object(create_yellowspringup_434(8128, 1552), 3);
    add_object(create_yellowspringup_434(8160, 1552), 3);
    add_object(create_yellowspringup_434(8192, 1552), 3);
    add_object(create_yellowspringup_434(8224, 1552), 3);
    add_object(create_yellowspringup_434(8256, 1552), 3);
    add_object(create_gimmickbridge12logs_353(7832, 984), 3);
    add_object(create_gimmickbridge12logs_353(8104, 984), 3);
    add_object(create_enemystingernest_2961(8072, 1260), 3);
    add_object(create_enemystinger_2891(8063, 1352), 3);
    add_object(create_enemystinger_2891(8103, 1208), 3);
    add_object(create_hazardspikesup_950(7800, 1472), 3);
    add_object(create_monitorkeystone_562(6632, 776), 3);
    add_object(create_monitorkeystone_562(6672, 776), 3);
    add_object(create_layerchangeswitch_404(6912, 808), 3);
    add_object(create_layerchangeswitch_404(6912, 744), 3);
    add_object(create_layerchangeswitch_404(7432, 872), 3);
    add_object(create_layerchangeswitch_404(7432, 808), 3);
    add_object(create_layerchangeswitch_404(7432, 744), 3);
    add_object(create_objectcrystal_279(6869, 794), 3);
    add_object(create_objectcrystal_279(6917, 794), 3);
    add_object(create_objectcrystal_279(6965, 794), 3);
    add_object(create_objectcrystal_279(7013, 794), 3);
    add_object(create_objectcrystal_279(7061, 794), 3);
    add_object(create_objectcrystal_279(7109, 794), 3);
    add_object(create_objectcrystal_279(7157, 794), 3);
    add_object(create_objectcrystal_279(7205, 794), 3);
    add_object(create_objectcrystal_279(7253, 794), 3);
    add_object(create_objectcrystal_279(7301, 794), 3);
    add_object(create_objectcrystal_279(7349, 794), 3);
    add_object(create_objectcrystal_279(7397, 794), 3);
    add_object(create_objectcrystal_279(7445, 794), 3);
    add_object(create_objectcrystal_279(7493, 794), 3);
    add_object(create_objectcrystal_279(6101, 1026), 3);
    add_object(create_objectcrystal_279(6141, 1018), 3);
    add_object(create_objectcrystal_279(6181, 1010), 3);
    add_object(create_objectcrystal_279(6221, 1002), 3);
    add_object(create_objectcrystal_279(6261, 994), 3);
    add_object(create_objectcrystal_279(6301, 986), 3);
    add_object(create_objecttimegate_2965(10225, 1088), 3);
    add_object(create_objecttimegatepiece_2966(10249, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10257, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10265, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10273, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10281, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10289, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10297, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10305, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10313, 1089), 3);
    add_object(create_objecttimegatepiece_2966(10321, 1089), 3);
    add_object(create_redspringleft_442(11856, 1664), 3);
    add_object(create_redspringleft_442(11856, 1632), 3);
    add_object(create_objectpetal_302(10457, 1057), 3);
    add_object(create_objectpetal_302(10505, 1057), 3);
    add_object(create_objectpetal_302(10649, 1057), 3);
    add_object(create_objectpetal_302(10697, 1057), 3);
    add_object(create_objectpetal_302(10841, 1057), 3);
    add_object(create_objectpetal_302(10889, 1057), 3);
    add_object(create_objectpetal_302(11033, 1057), 3);
    add_object(create_objectpetal_302(11081, 1057), 3);
    add_object(create_objectpetal_302(11225, 1073), 3);
    add_object(create_objectpetal_302(11273, 1073), 3);
    add_object(create_objectpetal_302(11417, 1073), 3);
    add_object(create_objectpetal_302(11465, 1073), 3);
    add_object(create_objectpetal_302(11609, 1073), 3);
    add_object(create_objectpetal_302(11657, 1073), 3);
    add_object(create_objectcrystal_279(5125, 1434), 3);
    add_object(create_objectcrystal_279(5181, 1402), 3);
    add_object(create_objectcrystal_279(5237, 1378), 3);
    add_object(create_objectcrystal_279(5293, 1354), 3);
    add_object(create_objectcrystal_279(5069, 1458), 3);
    add_object(create_objectcrystal_279(5125, 1482), 3);
    add_object(create_objectcrystal_279(5181, 1514), 3);
    add_object(create_objectcrystal_279(1149, 1218), 3);
    add_object(create_objectcrystal_279(1133, 1186), 3);
    add_object(create_objectcrystal_279(1165, 1186), 3);
    add_object(create_objectcrystal_279(1181, 1154), 3);
    add_object(create_objectcrystal_279(1117, 1154), 3);
    add_object(create_objectcrystal_279(1133, 1122), 3);
    add_object(create_objectcrystal_279(1165, 1122), 3);
    add_object(create_objectcrystal_279(1149, 1090), 3);
    add_object(create_objectcrystal_279(6061, 1034), 3);
    add_object(create_objectcyclonetop_2963(12800, 1024), 3);
    add_object(create_objectcyclonetop_2963(13120, 1024), 3);
    add_object(create_enemysunflora_2960(12960, 752), 3);
    add_object(create_objectcrystal_279(12901, 490), 3);
    add_object(create_objectcrystal_279(12917, 458), 3);
    add_object(create_objectcrystal_279(12941, 434), 3);
    add_object(create_objectcrystal_279(12965, 418), 3);
    add_object(create_objectcrystal_279(12997, 410), 3);
    add_object(create_objectcrystal_279(13037, 410), 3);
    add_object(create_objectcrystal_279(13069, 418), 3);
    add_object(create_objectcrystal_279(13093, 434), 3);
    add_object(create_objectcrystal_279(13117, 458), 3);
    add_object(create_objectcrystal_279(13133, 490), 3);
    add_object(create_monitorearthshield_326(13000, 512), 3);
    add_object(create_objectcrystal_279(6333, 1482), 3);
    add_object(create_objectcrystal_279(6373, 1482), 3);
    add_object(create_objectcrystal_279(6413, 1482), 3);
    add_object(create_objectcrystal_279(6453, 1482), 3);
    add_object(create_objectcrystal_279(6493, 1482), 3);
    add_object(create_objectcrystal_279(6701, 1474), 3);
    add_object(create_objectcrystal_279(6741, 1474), 3);
    add_object(create_objectcrystal_279(6781, 1474), 3);
    add_object(create_objectcrystal_279(6821, 1474), 3);
    add_object(create_objectcrystal_279(6861, 1474), 3);
    add_object(create_objecttimegate_2965(12641, 736), 3);
    add_object(create_objecttimegatepiece_2966(12665, 737), 3);
    add_object(create_objecttimegatepiece_2966(12673, 737), 3);
    add_object(create_objecttimegatepiece_2966(12681, 737), 3);
    add_object(create_objecttimegatepiece_2966(12689, 737), 3);
    add_object(create_objecttimegatepiece_2966(12697, 737), 3);
    add_object(create_objecttimegatepiece_2966(12705, 737), 3);
    add_object(create_objecttimegatepiece_2966(12713, 737), 3);
    add_object(create_objecttimegatepiece_2966(12721, 737), 3);
    add_object(create_objecttimegatepiece_2966(12729, 737), 3);
    add_object(create_objecttimegatepiece_2966(12737, 737), 3);
    add_object(create_objectpinwheel_2956(1576, 1344), 3);
    add_object(create_objectpinwheel_2956(1712, 1280), 3);
    add_object(create_objectpinwheel_2956(4848, 1240), 3);
    add_object(create_objectpinwheel_2956(4920, 1200), 3);
    add_object(create_objectpinwheel_2956(4976, 1232), 3);
    add_object(create_objectpinwheel_2956(5056, 1080), 3);
    add_object(create_objectpinwheel_2956(5440, 1320), 3);
    add_object(create_objectpinwheel_2956(5608, 1288), 3);
    add_object(create_objectpinwheel_2956(7784, 960), 3);
    add_object(create_objectpinwheel_2956(8376, 992), 3);
    add_object(create_objectpinwheel_2956(8464, 1000), 3);
    add_object(create_objectpinwheel_2956(8560, 1008), 3);
    add_object(create_objectpinwheel_2956(12352, 1000), 3);
    add_object(create_objectpinwheel_2956(12296, 1064), 3);
    add_object(create_objectpinwheel_2956(13712, 752), 3);
    add_object(create_redspringup_440(3696, 1304), 3);
    add_object(create_gimmickbridge12logs_353(3680, 936), 3);
    add_object(create_yellowspringdown_437(3680, 864), 3);
    add_object(create_yellowspringdown_437(3712, 864), 3);
    add_object(create_yellowspringdown_437(3744, 864), 3);
    add_object(create_yellowspringdown_437(3776, 864), 3);
    add_object(create_yellowspringdown_437(3808, 864), 3);
    add_object(create_yellowspringdown_437(3840, 864), 3);
    add_object(create_yellowspringdown_437(3872, 864), 3);
    add_object(create_objectcrystal_279(3693, 970), 3);
    add_object(create_objectcrystal_279(3717, 970), 3);
    add_object(create_objectcrystal_279(3741, 970), 3);
    add_object(create_objectcrystal_279(3765, 970), 3);
    add_object(create_objectcrystal_279(3789, 970), 3);
    add_object(create_objectcrystal_279(3813, 970), 3);
    add_object(create_objectcrystal_279(3837, 970), 3);
    add_object(create_objectcrystal_279(3861, 970), 3);
    add_object(create_objectcrystal_279(3693, 938), 3);
    add_object(create_objectcrystal_279(3717, 938), 3);
    add_object(create_objectcrystal_279(3741, 938), 3);
    add_object(create_objectcrystal_279(3765, 938), 3);
    add_object(create_objectcrystal_279(3789, 938), 3);
    add_object(create_objectcrystal_279(3813, 938), 3);
    add_object(create_objectcrystal_279(3837, 938), 3);
    add_object(create_objectcrystal_279(3861, 938), 3);
    add_object(create_enemysunflora_2960(4136, 952), 3);
    add_object(create_objectcrystal_279(2213, 1322), 3);
    add_object(create_objectcrystal_279(2245, 1290), 3);
    add_object(create_objectcrystal_279(2277, 1258), 3);
    add_object(create_objectcrystal_279(2309, 1226), 3);
    add_object(create_redspringup_440(3728, 1304), 3);
    add_object(create_levellagoonplatform1_2967(6104, 1192), 3);
    add_object(create_levellagoonplatform1_2967(4488, 1056), 3);
    add_object(create_levellagoonplatform1_2967(5552, 944), 3);
    add_object(create_objectcrystal_279(5669, 842), 3);
    add_object(create_objectcrystal_279(5573, 842), 3);
    add_object(create_objectcrystal_279(5621, 842), 3);
    add_object(create_objectcrystal_279(5597, 826), 3);
    add_object(create_objectcrystal_279(5645, 826), 3);
    add_object(create_layerchangeswitch2_1239(3248, 1096), 3);
    add_object(create_layerchangeswitch2_1239(3248, 1160), 3);
    add_object(create_layerchangeswitch2_1239(3248, 1224), 3);
    add_object(create_layerchangeswitch2_1239(3248, 1032), 3);
    add_object(create_layerchangeswitch2_1239(3248, 968), 3);
    add_object(create_layerchangeswitch2_1239(3248, 904), 3);
    add_object(create_layerchangeswitch2_1239(3248, 776), 3);
    add_object(create_layerchangeswitch2_1239(3248, 840), 3);
    add_object(create_objecttimegate_2965(8809, 1072), 3);
    add_object(create_objecttimegatepiece_2966(8833, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8841, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8849, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8857, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8865, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8873, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8881, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8889, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8897, 1073), 3);
    add_object(create_objecttimegatepiece_2966(8905, 1073), 3);
    add_object(create_objecttimegate_2965(9649, 920), 3);
    add_object(create_objecttimegatepiece_2966(9673, 921), 3);
    add_object(create_objecttimegatepiece_2966(9681, 921), 3);
    add_object(create_objecttimegatepiece_2966(9689, 921), 3);
    add_object(create_objecttimegatepiece_2966(9697, 921), 3);
    add_object(create_objecttimegatepiece_2966(9705, 921), 3);
    add_object(create_objecttimegatepiece_2966(9713, 921), 3);
    add_object(create_objecttimegatepiece_2966(9721, 921), 3);
    add_object(create_objecttimegatepiece_2966(9729, 921), 3);
    add_object(create_objecttimegatepiece_2966(9737, 921), 3);
    add_object(create_objecttimegatepiece_2966(9745, 921), 3);
    add_object(create_enemysunflora_2960(9464, 624), 3);
    add_object(create_objectcrystal_279(9197, 538), 3);
    add_object(create_objectcrystal_279(9197, 586), 3);
    add_object(create_objectcrystal_279(9197, 634), 3);
    add_object(create_objectcrystal_279(9197, 682), 3);
    add_object(create_objectcrystal_279(9197, 730), 3);
    add_object(create_objectcrystal_279(9197, 778), 3);
    add_object(create_objectcrystal_279(9197, 826), 3);
    add_object(create_objectcrystal_279(9197, 874), 3);
    add_object(create_objectcrystal_279(9197, 298), 3);
    add_object(create_objectcrystal_279(9197, 346), 3);
    add_object(create_objectcrystal_279(9197, 394), 3);
    add_object(create_objectcrystal_279(9197, 442), 3);
    add_object(create_objectcrystal_279(9197, 490), 3);
    add_object(create_levellagoonplatform1_2967(8968, 488), 3);
    add_object(create_monitorkeystone_562(8760, 392), 3);
    add_object(create_monitorkeystone_562(8824, 392), 3);
    add_object(create_objectpinwheel_2956(11728, 1624), 3);
    add_object(create_objectpinwheel_2956(11536, 1648), 3);
    add_object(create_objectpinwheel_2956(11344, 1600), 3);
    add_object(create_objectpinwheel_2956(11144, 1648), 3);
    add_object(create_objectpinwheel_2956(10768, 1464), 3);
    add_object(create_objectpetal_302(9721, 833), 3);
    add_object(create_objectpetal_302(9761, 873), 3);
    add_object(create_objectpetal_302(9841, 713), 3);
    add_object(create_objectpetal_302(9801, 913), 3);
    add_object(create_objectpetal_302(9801, 673), 3);
    add_object(create_objectpetal_302(9761, 633), 3);
    add_object(create_objectpetal_302(9721, 593), 3);
    add_object(create_monitorcrystals_324(456, 1720), 3);
    add_object(create_objectpetal_302(9841, 473), 3);
    add_object(create_objectpetal_302(9801, 433), 3);
    add_object(create_objectpetal_302(9761, 393), 3);
    add_object(create_objectpetal_302(9721, 353), 3);
    add_object(create_monitorearthshield_326(8792, 392), 3);
    add_object(create_objectcrystal_279(13397, 698), 3);
    add_object(create_objectcrystal_279(13453, 698), 3);
    add_object(create_objectcrystal_279(13397, 778), 3);
    add_object(create_objectcrystal_279(13453, 778), 3);
    add_object(create_objectcrystal_279(13397, 738), 3);
    add_object(create_objectcrystal_279(13453, 738), 3);
    add_object(create_laddertop_357(2687, 1359), 3);
    add_object(create_laddertop_357(2879, 967), 3);
    add_object(create_laddertop_357(6487, 1183), 3);
    add_object(create_laddertop_357(6623, 1183), 3);
    add_object(create_laddertop_357(6751, 1183), 3);
    add_object(create_laddertop_357(6655, 871), 3);
    add_object(create_laddertop_357(8072, 1095), 3);
    add_object(create_objectcodec_354(4546, 973), 3);
    add_object(create_objectcodec_354(8450, 1261), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_plstonewall5_2932(6984, 1144), 4);
    add_background_object(create_plstonewall12_2914(6984, 1208), 4);
    add_background_object(create_plstonewall18_2968(7112, 1224), 4);
    add_background_object(create_plstonewall20_2930(3200, 1376), 4);
    add_background_object(create_plstonewall4_2937(2408, 1608), 4);
    add_background_object(create_plground3_2939(2408, 1600), 4);
    add_background_object(create_plstonewall7_2947(2424, 1640), 4);
    add_background_object(create_plstonewall12_2914(2760, 992), 4);
    add_background_object(create_plstonewall13_2915(2888, 992), 4);
    add_background_object(create_plstonewall12_2914(1576, 1568), 4);
    add_background_object(create_plstonewall13_2915(1704, 1568), 4);
    add_background_object(create_plstonewall3_2926(6144, 1384), 4);
    add_background_object(create_plground4_2931(6144, 1368), 4);
    add_background_object(create_plstonewall17_2969(6984, 1144), 4);
    add_background_object(create_plstonewall19_2955(3328, 1296), 4);
    add_background_object(create_plground11_2950(6984, 1128), 4);
    add_background_object(create_plground12_2949(7112, 1200), 4);
    add_background_object(create_plstonewall17_2969(7240, 1296), 4);
    add_background_object(create_plground11_2950(7240, 1280), 4);
    add_background_object(create_plground10_2948(3328, 1280), 4);
    add_background_object(create_plground9_2935(3200, 1352), 4);
    add_background_object(create_plstonewall4_2937(8680, 1160), 4);
    add_background_object(create_plground3_2939(8680, 1152), 4);
    add_background_object(create_plstonewall3_2926(10368, 1288), 4);
    add_background_object(create_plground4_2931(10360, 1280), 4);
    add_background_object(create_plstonewall3_2926(10368, 1416), 4);
    add_background_object(create_plstonewall4_2937(1128, 1576), 4);
    add_background_object(create_plground3_2939(1128, 1560), 4);
    add_background_object(create_plstonewall12_2914(3656, 864), 4);
    add_background_object(create_plstonewall13_2915(3784, 864), 4);
    add_background_object(create_plstonewall12_2914(4936, 992), 4);
    add_background_object(create_plstonewall13_2915(5064, 992), 4);
    add_background_object(create_plstonewall12_2914(8688, 312), 4);
    add_background_object(create_plstonewall13_2915(8816, 312), 4);
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
    add_object(create_hazardspikesup_950(-208, 392), 5);
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
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
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
    loop_stinger_running = false;
    loop_stinger_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
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
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
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
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_50, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_50, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_50, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_50, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_50, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_50, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_50, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_50, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_50, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_50, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_50, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_50, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_50, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_50, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_50, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_50, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_50, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_50, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_50, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_50, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_50, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_50, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_50, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_50, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_50, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_50, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_50, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_50, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_50, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_50, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_50, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_50, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_50, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_50, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_50, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_50, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_50, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_50, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_50, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_50, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_50, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_50, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_50, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_50, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_50, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_50, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_50, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_50, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_50, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_50, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_50, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_50, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_50, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_50, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
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
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
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
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
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
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
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
    not_always_45_13 = loop_count;
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
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
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
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
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
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
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
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1695_16 = loop_count;
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
    not_always_99_0 = loop_count;
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
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_wrapper_sound_hurt1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_51(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_51(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_51(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_51(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_51(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_51(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_51(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_51(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_51(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_50();
}
void Frames::loop_wrapper_play_music_6_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_50();
}
void Frames::loop_wrapper_sound_go0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_51(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_50();
}
void Frames::loop_wrapper_sound_explode3_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_51(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_51(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_51(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_11852()
{
    // event 1597_51
    {
        if (!(group_main_engine_1)) goto event_1597_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1597_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(6)) > (0))) goto event_1597_51_end;
        if (!(test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4)+30, ((Active*)foreach_instance_tr)->alterables->values.get(5)))) goto event_1597_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(6, 0);
    }
    event_1597_51_end: ;
}
void Frames::event_func_11853()
{
    // event 1598_51
    {
        if (!(group_main_engine_1)) goto event_1598_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1598_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(6)) < (0))) goto event_1598_51_end;
        if (!(test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4)-30, ((Active*)foreach_instance_tr)->alterables->values.get(5)))) goto event_1598_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(6, 0);
    }
    event_1598_51_end: ;
}
void Frames::event_func_11854()
{
    // event 1599_51
    {
        if (!(group_main_engine_1)) goto event_1599_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1599_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(6)) == (0))) goto event_1599_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(4)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1599_51_end;
        if (test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4)+30, ((Active*)foreach_instance_tr)->alterables->values.get(5))) goto event_1599_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(6, 3);
    }
    event_1599_51_end: ;
}
void Frames::event_func_11855()
{
    // event 1600_51
    {
        if (!(group_main_engine_1)) goto event_1600_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1600_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(6)) == (0))) goto event_1600_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(4)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1600_51_end;
        if (test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4)-30, ((Active*)foreach_instance_tr)->alterables->values.get(5))) goto event_1600_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(6, -3);
    }
    event_1600_51_end: ;
}
void Frames::event_func_11856()
{
    // event 1602_51
    {
        if (!(group_main_engine_1)) goto event_1602_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1602_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(7)) < (0))) goto event_1602_51_end;
        if (!(test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4), ((Active*)foreach_instance_tr)->alterables->values.get(5)-16))) goto event_1602_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(7, 0);
    }
    event_1602_51_end: ;
}
void Frames::event_func_11857()
{
    // event 1603_51
    {
        if (!(group_main_engine_1)) goto event_1603_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1603_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(7)) >= (0))) goto event_1603_51_end;
        if (!(test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4), ((Active*)foreach_instance_tr)->alterables->values.get(5)+36))) goto event_1603_51_end;
        FrameObject * single_instance_1603_51_0; single_instance_1603_51_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardshockwave_1524(((Active*)foreach_instance_tr)->x + -16, ((Active*)foreach_instance_tr)->y + 76), ((Active*)foreach_instance_tr)->layer);
            if (single_instance_1603_51_0 == NULL)
                single_instance_1603_51_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1603_51_0))->set_direction(16);
    }
    event_1603_51_end: ;
}
void Frames::event_func_11858()
{
    // event 1604_51
    {
        if (!(group_main_engine_1)) goto event_1604_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(3)) == (2))) goto event_1604_51_end;
        if (!((((Active*)foreach_instance_tr)->alterables->values.get(7)) >= (0))) goto event_1604_51_end;
        if (!(test_obstacle(((Active*)foreach_instance_tr)->alterables->values.get(4), ((Active*)foreach_instance_tr)->alterables->values.get(5)+36))) goto event_1604_51_end;
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(3, 3);
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(7, 0);
        ((Active*)((Active*)foreach_instance_tr))->alterables->values.set(9, 240);
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)foreach_instance_tr)->x + -24, ((Active*)foreach_instance_tr)->y + 72), ((Active*)foreach_instance_tr)->layer);
            effectsexplosion01_309_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)foreach_instance_tr)->x + 24, ((Active*)foreach_instance_tr)->y + 72), ((Active*)foreach_instance_tr)->layer);
            effectsexplosion01_309_instances.add_back();
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        FrameObject * single_instance_1604_51_1; single_instance_1604_51_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardshockwave_1524(((Active*)foreach_instance_tr)->x + 16, ((Active*)foreach_instance_tr)->y + 76), ((Active*)foreach_instance_tr)->layer);
            if (single_instance_1604_51_1 == NULL)
                single_instance_1604_51_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1604_51_1))->set_direction(0);
    }
    event_1604_51_end: ;
}
void Frames::foreach_tr_51()
{
    event_func_11852();
    event_func_11853();
    event_func_11854();
    event_func_11855();
    event_func_11856();
    event_func_11857();
    event_func_11858();
}
void Frames::event_func_11859()
{
    // event 5_51
    {
        if (!(group_main_engine_1)) goto event_5_51_end;
        gimmickbowstring_2974_instances.clear_selection();
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_ba)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!gimmickbowstring_2974_instances.has_selection()) goto event_5_51_end;
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)foreach_instance_ba)->alterables->values.get(4)-40+(5-get_abs(((Active*)*it)->alterables->values.get(0)))*0.2*((Active*)foreach_instance_ba)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)foreach_instance_ba)->alterables->values.get(5)+get_max(-1, get_min(((Active*)*it)->alterables->values.get(0), 1))*8+((Active*)*it)->alterables->values.get(0)*-16);
        }
        ((Active*)((Active*)foreach_instance_ba))->set_x(((Active*)foreach_instance_ba)->alterables->values.get(0));
        ((Active*)((Active*)foreach_instance_ba))->set_y(((Active*)foreach_instance_ba)->alterables->values.get(1));
        ((Active*)((Active*)foreach_instance_ba))->set_angle(((Active*)foreach_instance_ba)->alterables->values.get(9), 0);
    }
    event_5_51_end: ;
}
void Frames::foreach_ba_51()
{
    event_func_11859();
}
void Frames::event_func_11860()
{
    // event 23_51
    {
        if (!(group_main_engine_1)) goto event_23_51_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(7)) == (3))) goto event_23_51_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(13)) <= (0))) goto event_23_51_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, cos_deg(((Active*)col_instance_1)->alterables->values.get(9))*((Active*)col_instance_1)->alterables->values.get(2));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, sin_deg(((Active*)col_instance_1)->alterables->values.get(9))*((Active*)col_instance_1)->alterables->values.get(2)*-1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(13, 3);
    }
    event_23_51_end: ;
}
void Frames::col_7_51()
{
    event_func_11860();
}
void Frames::event_func_11861()
{
    // event 1612_51
    {
        if (!(group_main_engine_1)) goto event_1612_51_end;
        FrameObject * single_instance_1612_51_0; single_instance_1612_51_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1612_51_0 == NULL)
                single_instance_1612_51_0 = new_obj;
        }
        FrameObject * single_instance_1612_51_1; single_instance_1612_51_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1612_51_1 == NULL)
                single_instance_1612_51_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1612_51_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1612_51_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1612_51_0))->move_back();
    }
    event_1612_51_end: ;
}
void Frames::col_8_51()
{
    event_func_11861();
}
void Frames::event_func_11862()
{
    // event 1640_51
    {
        if (!(group_main_engine_1)) goto event_1640_51_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) < (65))) goto event_1640_51_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) <= (0))) goto event_1640_51_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(5))) goto event_1640_51_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1640_51_end;
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 3);
        {
            ((Active*)col_instance_2)->set_shader(Render::INVERT);
        }
    }
    event_1640_51_end: ;
}
void Frames::col_10_51()
{
    event_func_11862();
}
void Frames::event_func_11863()
{
    // event 22_51
    {
        if (!(group_main_engine_1)) goto event_22_51_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(7)) == (3))) goto event_22_51_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(13)) <= (0))) goto event_22_51_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, get_min(((Active*)col_instance_1)->alterables->values.get(0), 0));
        ((Active*)((Active*)col_instance_1))->alterables->values.set(23, cos_deg(((Active*)col_instance_2)->alterables->values.get(9))*((Active*)col_instance_2)->alterables->values.get(2));
        ((Active*)((Active*)col_instance_1))->alterables->values.set(24, sin_deg(((Active*)col_instance_2)->alterables->values.get(9))*((Active*)col_instance_2)->alterables->values.get(2)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(13, 3);
    }
    event_22_51_end: ;
}
void Frames::col_17_51()
{
    event_func_11863();
}
void Frames::test_collisions_51()
{
    test_collisions(qualifier_7, playerprojectile_320_instances, 2147483648, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playersensorrightbig_393_instances, breakableplrock_2987_instances, 1, 1, (EventFunction)&Frames::col_6_16);
    test_collisions(gimmickbowarrow_2979_instances, breakableplrock_2987_instances, 1, 2, (EventFunction)&Frames::col_7_51);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 134217728, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(playersensorleftbig_391_instances, breakableplrock_2987_instances, 1, 4, (EventFunction)&Frames::col_3_16);
    test_collisions(enemysleepgas_2889_instances, enemyterreon_2985_instances, 1, 1, (EventFunction)&Frames::col_10_51);
    test_collisions(playercharactersensor_383_instances, enemysleepgas_2889_instances, 1, 2, (EventFunction)&Frames::col_6_50);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playersensorbottombig_397_instances, objectcyclonetop_2963_instances, 1, 1, (EventFunction)&Frames::col_8_50);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(player_389_instances, objecttimegate_2965_instances, 2, 1, (EventFunction)&Frames::col_9_50);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_20, gimmickbowarrow_2979_instances, 16777216, 2, (EventFunction)&Frames::col_17_51);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
void Frames::event_func_11864()
{
    // event 3_51
    {
        if (!(group_main_engine_1)) goto event_3_51_end;
        gimmickbowstring_2974_instances.clear_selection();
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowstring_2974_instances.has_selection()) goto event_3_51_end;
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
    }
    event_3_51_end: ;
}
void Frames::event_func_11865()
{
    // event 4_51
    {
        if (!(group_main_engine_1)) goto event_4_51_end;
        {
            gimmickbowarrow_2979_instances.clear_selection();
            SavedSelection extra_gimmickbowarrow_2979_instances(gimmickbowarrow_2979_instances);
            for (SavedIterator it(extra_gimmickbowarrow_2979_instances); !it.end(); ++it) {
                foreach_instance_ba = ((Active*)*it);
                foreach_ba_51();
            }
        }
    }
    event_4_51_end: ;
}
void Frames::event_func_11866()
{
    // event 6_51
    {
        if (!(group_main_engine_1)) goto event_6_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_6_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_6_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_6_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_6_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_6_51_end;
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickbowarrow_2979_instances, player_389_instances)) goto event_6_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 99);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_6_51_end: ;
}
void Frames::event_func_11867()
{
    // event 7_51
    {
        if (!(group_main_engine_1)) goto event_7_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_7_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_7_51_end: ;
}
void Frames::event_func_11868()
{
    // event 8_51
    {
        if (!(group_main_engine_1)) goto event_8_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_8_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (4))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_8_51_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(0)+cos_deg(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(9))*((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(1)+sin_deg(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(9))*((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(11)*-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(6);
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
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(9));
    }
    event_8_51_end: ;
}
void Frames::event_func_11869()
{
    // event 9_51
    {
        if (!(group_main_engine_1)) goto event_9_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_9_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (2))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_9_51_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_9_51_end: ;
}
void Frames::event_func_11870()
{
    // event 10_51
    {
        if (!(group_main_engine_1)) goto event_10_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_10_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+4, 0));
        }
    }
    event_10_51_end: ;
}
void Frames::event_func_11871()
{
    // event 11_51
    {
        if (!(group_main_engine_1)) goto event_11_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_11_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-4, 0));
        }
    }
    event_11_51_end: ;
}
void Frames::event_func_11872()
{
    // event 12_51
    {
        if (!(group_main_engine_1)) goto event_12_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_12_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 2);
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
    }
    event_12_51_end: ;
}
void Frames::event_func_11873()
{
    // event 13_51
    {
        if (!(group_main_engine_1)) goto event_13_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (-50))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_13_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        media.play_id(SOUND_ARROW_LAUNCH_327, -1, 1);
    }
    event_13_51_end: ;
}
void Frames::event_func_11874()
{
    // event 14_51
    {
        if (!(group_main_engine_1)) goto event_14_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_14_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 15);
            ((Active*)*it)->alterables->values.add(0, 15);
        }
    }
    event_14_51_end: ;
}
void Frames::event_func_11875()
{
    // event 15_51
    {
        if (!(group_main_engine_1)) goto event_15_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_15_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, 10);
            ((Active*)*it)->alterables->values.set(2, 15);
        }
    }
    event_15_51_end: ;
}
void Frames::event_func_11876()
{
    // event 16_51
    {
        if (!(group_main_engine_1)) goto event_16_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_16_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-1, -10));
        }
    }
    event_16_51_end: ;
}
void Frames::event_func_11877()
{
    // event 17_51
    {
        if (!(group_main_engine_1)) goto event_17_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_17_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+1, 10));
        }
    }
    event_17_51_end: ;
}
void Frames::event_func_11878()
{
    // event 18_51
    {
        if (!(group_main_engine_1)) goto event_18_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (3))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_18_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(8)*0.9);
        }
    }
    event_18_51_end: ;
}
void Frames::event_func_11879()
{
    // event 19_51
    {
        if (!(group_main_engine_1)) goto event_19_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (1))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_19_51_end;
        if (!((get_abs(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(8))) < (1))) goto event_19_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_19_51_end: ;
}
