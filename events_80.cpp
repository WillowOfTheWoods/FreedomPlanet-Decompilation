#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6627()
{
    // event 1682_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1682_28_end;
        if (!((global_values->get(4)) <= (0))) goto event_1682_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 340);
    }
    event_1682_28_end: ;
}
void Frames::event_func_6628()
{
    // event 1683_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1683_28_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->get_y());
        }
    }
    event_1683_28_end: ;
}
void Frames::event_func_6629()
{
    // event 1697_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1697_28_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(10);
        }
    }
    event_1697_28_end: ;
}
void Frames::event_func_6630()
{
    // event 1731_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1731_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        spread_value(minibossbonegolempiece3_1575_instances, 1, 0);
        minibossbonegolempiece_1577_instances.clear_selection();
        spread_value(minibossbonegolempiece_1577_instances, 1, 0);
        minibossbonegolempiece6_1578_instances.clear_selection();
        spread_value(minibossbonegolempiece6_1578_instances, 1, 0);
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index));
            if (parent == NULL) goto pos_end_1731_28_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 12);
            pos_end_1731_28_0: ;
        }
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+48);
        }
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1731_28_end: ;
}
void Frames::event_func_6631()
{
    // event 1857_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1857_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        spread_value(bossmantalithleg1_1528_instances, 0, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_x());
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(3, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_y());
        bossjumppoint_1605_instances.clear_selection();
        spread_value(bossjumppoint_1605_instances, 0, 0);
        ((Active*)get_instance(bossjumppoint_1605_instances))->alterables->values.set(0, (((Active*)get_instance(bossjumppoint_1605_instances))->alterables->values.get(0)%math_helper%2)*-2+1);
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmantalithhead3_1596_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithhead2_1597_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck1_1537_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck2_1536_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck3_1531_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck4_1530_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithleftknee_1532_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithrightknee_1533_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithleg2_1535_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithleg3_1534_instances))->set_visible(false);
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_y(0);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_y(0);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
    }
    event_1857_28_end: ;
}
void Frames::on_frame_29_start_events()
{
    event_func_6621();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_6622();
    event_func_6623();
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
    event_func_6624();
    event_func_4179();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_5881();
    event_func_6625();
    event_func_6626();
    event_func_6025();
    event_func_2687();
    event_func_6627();
    event_func_6628();
    event_func_6629();
    event_func_6630();
    event_func_6631();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_5899();
    event_func_4145();
    event_func_5573();
    event_func_4147();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_29_init()
{
    index = 28;
    width = 9600;
    height = 3744;
    virtual_width = 9600;
    virtual_height = 3744;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 0.800000011921, 0.800000011921, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyiris_1183_instances, &enemyfirespitter_1385_instances, &enemysentinel_1496_instances, &objectbluepot_1565_instances, &minibossbonegolem_1576_instances, &bossmantalithhead_1598_instances, &bossmantalithhitbox1_1603_instances, &bossmantalithhitbox2_1604_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidleswitch_1257_instances, &gimmickhangingmovingsensor_737_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, NULL};
    qualifier_22.set(1, &qualifier_22_instances[0]);
    static ObjectList* qualifier_29_instances[] = {&bossmantalithleg1_1528_instances, &bossmantalithbody_1529_instances, &bossmantalithneck4_1530_instances, &bossmantalithneck3_1531_instances, &bossmantalithleftknee_1532_instances, &bossmantalithrightknee_1533_instances, &bossmantalithleg3_1534_instances, &bossmantalithleg2_1535_instances, &bossmantalithneck2_1536_instances, &bossmantalithneck1_1537_instances, &bossmantalithhead3_1596_instances, &bossmantalithhead2_1597_instances, &bossmantalithhead_1598_instances, &bossmantalitharm6_1599_instances, &bossmantalitharm3_1600_instances, &bossmantalithdebris_1602_instances, NULL};
    qualifier_29.set(16, &qualifier_29_instances[0]);
    static ObjectList* qualifier_28_instances[] = {&minibossbonegolempiece3_1575_instances, &minibossbonegolempiece_1577_instances, &minibossbonegolempiece6_1578_instances, &minibossbonegolempiece5_1579_instances, &minibossbonegolemneck1_1580_instances, &minibossbonegolemneck2_1581_instances, &minibossbonegolemneck3_1582_instances, &minibossbonegolemneck4_1583_instances, &minibossbonegolemhead_1584_instances, NULL};
    qualifier_28.set(9, &qualifier_28_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &minibossbonegolempiece5_1579_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &minibossbonegolempiece5_1579_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece9_763_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickmovingpillar1_1407_instances, &gimmickmovingpillar2_1408_instances, &gimmickmovingpillar3_1409_instances, &breakableruins_1184_instances, &spikeceiling_1568_instances, &lightstonedoor1_1585_instances, &lightstonedoor2_1586_instances, NULL};
    qualifier_7.set(34, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickhangingmovingbar_1173_instances, &gimmickhangingmovingsensor_737_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_cavecolumn1_1514(4112, 720), 0);
    add_background_object(create_cavecolumn2_1515(2888, 736), 0);
    add_background_object(create_cavecolumn2_1515(3080, 736), 0);
    add_background_object(create_cavecolumn2_1515(3248, 736), 0);
    add_background_object(create_cavecolumn2_1515(3416, 728), 0);
    add_background_object(create_cavecolumn2_1515(5472, 696), 0);
    add_background_object(create_cavecolumn1_1514(5288, 736), 0);
    add_background_object(create_cavecolumn1_1514(5096, 736), 0);
    add_background_object(create_cavecolumn1_1514(4904, 736), 0);
    add_background_object(create_cavecolumn1_1514(4712, 736), 0);
    add_background_object(create_levelparallaxpiece6_1516(0, 80), 0);
    add_background_object(create_levelparallaxpiece7_1517(0, -32), 0);
    add_background_object(create_rmpurplebrickback_1519(0, 200), 0);
    add_background_object(create_cavecolumn1_1514(1816, 176), 0);
    add_background_object(create_cavecolumn1_1514(1592, 112), 0);
    add_background_object(create_cavecolumn2_1515(1640, 192), 0);
    add_background_object(create_cavecolumn1_1514(968, 144), 0);
    add_background_object(create_cavecolumn2_1515(1104, 120), 0);
    add_background_object(create_cavecolumn1_1514(1312, 72), 0);
    add_background_object(create_cavecolumn1_1514(1224, 248), 0);
    add_background_object(create_cavecolumn2_1515(1424, 168), 0);
    add_background_object(create_rmbookshelf3_1520(408, 1160), 0);
    add_background_object(create_rmbookshelf_1521(584, 1160), 0);
    add_background_object(create_rmbookshelf3_1520(584, 1120), 0);
    add_background_object(create_rmbookshelf2_1522(408, 1040), 0);
    add_background_object(create_rmbookshelf2_1522(584, 1040), 0);
    add_background_object(create_rmbookshelf2_1522(128, 1080), 0);
    add_background_object(create_rmbookshelf3_1520(824, 1160), 0);
    add_background_object(create_rmbookshelf2_1522(824, 1080), 0);
    add_background_object(create_rmbookshelf3_1520(248, 1120), 0);
    add_background_object(create_rmbookshelf_1521(248, 1160), 0);
    add_background_object(create_rmbookshelf2_1522(248, 1040), 0);
    add_background_object(create_rmbookshelf_1521(704, 1120), 0);
    add_background_object(create_rmbookshelf3_1520(704, 1160), 0);
    add_background_object(create_rmbookshelf2_1522(704, 1040), 0);
    add_background_object(create_rmbookshelf_1521(408, 1120), 0);
    add_background_object(create_rmbookshelf_1521(128, 1160), 0);
    add_background_object(create_cavecolumn1_1514(1504, 440), 0);
    add_background_object(create_cavecolumn2_1515(1304, 544), 0);
    add_background_object(create_cavecolumn1_1514(1112, 520), 0);
    add_background_object(create_cavecolumn2_1515(768, 176), 0);
    add_background_object(create_cavecolumn2_1515(912, 440), 0);
    add_background_object(create_cavecolumn2_1515(640, 120), 0);
    add_background_object(create_cavecolumn2_1515(456, 128), 0);
    add_background_object(create_cavecolumn1_1514(560, 264), 0);
    add_background_object(create_cavecolumn2_1515(704, 488), 0);
    add_background_object(create_cavecolumn1_1514(288, 56), 0);
    add_background_object(create_cavecolumn2_1515(-64, 120), 0);
    add_background_object(create_cavecolumn2_1515(96, 152), 0);
    add_background_object(create_cavecolumn2_1515(368, 296), 0);
    add_background_object(create_cavecolumn1_1514(184, 328), 0);
    add_background_object(create_cavecolumn1_1514(480, 432), 0);
    add_background_object(create_cavecolumn2_1515(-56, 432), 0);
    add_background_object(create_cavecolumn1_1514(88, 472), 0);
    add_background_object(create_cavecolumn2_1515(296, 480), 0);
    add_background_object(create_cavecolumn2_1515(1672, 536), 0);
    add_background_object(create_cavecolumn1_1514(1888, 496), 0);
    add_background_object(create_cavecolumn1_1514(1984, 808), 0);
    add_background_object(create_cavecolumn1_1514(1832, 872), 0);
    add_background_object(create_rmbookshelf3_1520(128, 1120), 0);
    add_background_object(create_rmbookshelf_1521(248, 1080), 0);
    add_background_object(create_rmbookshelf3_1520(408, 1080), 0);
    add_background_object(create_rmbookshelf_1521(584, 1080), 0);
    add_background_object(create_rmbookshelf3_1520(704, 1080), 0);
    add_background_object(create_rmbookshelf_1521(824, 1120), 0);
    add_background_object(create_cavecolumn2_1515(6376, 208), 0);
    add_background_object(create_cavecolumn2_1515(6416, 464), 0);
    add_background_object(create_cavecolumn1_1514(6224, 568), 0);
    add_background_object(create_cavecolumn2_1515(5984, 528), 0);
    add_background_object(create_cavecolumn2_1515(6144, 760), 0);
    add_background_object(create_cavecolumn1_1514(5920, 808), 0);
    add_background_object(create_cavecolumn2_1515(6360, 856), 0);
    add_background_object(create_cavecolumn1_1514(3840, 504), 0);
    add_background_object(create_cavecolumn2_1515(3632, 568), 0);
    add_background_object(create_cavecolumn2_1515(3768, 824), 0);
    add_background_object(create_cavecolumn2_1515(4360, 480), 0);
    add_background_object(create_cavecolumn1_1514(4488, 560), 0);
    add_background_object(create_cavecolumn2_1515(4280, 792), 0);
    add_background_object(create_cavecolumn1_1514(4616, 888), 0);
    add_background_object(create_cavecolumn1_1514(4448, 912), 0);
    add_background_object(create_cavecolumn1_1514(3976, 856), 0);
    add_background_object(create_cavecolumn2_1515(3504, 880), 0);
    add_background_object(create_cavecolumn1_1514(3664, 960), 0);
    add_background_object(create_cavecolumn1_1514(7128, 736), 0);
    add_background_object(create_cavecolumn1_1514(6944, 736), 0);
    add_background_object(create_cavecolumn1_1514(6760, 736), 0);
    add_background_object(create_cavecolumn1_1514(6560, 736), 0);
    add_background_object(create_cavecolumn1_1514(5680, 720), 0);
    add_background_object(create_cavecolumn2_1515(4176, 1120), 0);
    add_background_object(create_cavecolumn1_1514(4376, 1136), 0);
    add_background_object(create_cavecolumn1_1514(5344, 1040), 0);
    add_background_object(create_cavecolumn1_1514(5168, 1040), 0);
    add_background_object(create_cavecolumn1_1514(4992, 1040), 0);
    add_background_object(create_cavecolumn1_1514(4816, 1040), 0);
    add_background_object(create_cavecolumn1_1514(6064, 1040), 0);
    add_background_object(create_cavecolumn1_1514(5872, 1040), 0);
    add_background_object(create_cavecolumn1_1514(5688, 1040), 0);
    add_background_object(create_cavecolumn1_1514(5520, 1040), 0);
    add_background_object(create_cavecolumn1_1514(7216, 1040), 0);
    add_background_object(create_cavecolumn1_1514(7040, 1040), 0);
    add_background_object(create_cavecolumn1_1514(6840, 1040), 0);
    add_background_object(create_cavecolumn1_1514(6648, 1040), 0);
    add_background_object(create_cavecolumn1_1514(6440, 1040), 0);
    add_background_object(create_cavecolumn1_1514(6232, 1040), 0);
    add_background_object(create_cavecolumn1_1514(4600, 1176), 0);
    add_background_object(create_cavecolumn1_1514(9408, 632), 1);
    add_background_object(create_cavecolumn1_1514(9216, 680), 1);
    add_background_object(create_cavecolumn1_1514(9064, 776), 1);
    add_background_object(create_cavecolumn1_1514(8912, 576), 1);
    add_background_object(create_cavecolumn1_1514(8712, 656), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 856), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 760), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 856), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 760), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 856), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 760), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 856), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 568), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 664), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 568), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 664), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 568), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 664), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 472), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 472), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 472), 1);
    add_background_object(create_rmscaleypillar_1435(4504, 376), 1);
    add_background_object(create_rmscaleypillar_1435(4120, 376), 1);
    add_background_object(create_rmscaleypillar_1435(4312, 376), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 856), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 856), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 760), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 760), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 760), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 664), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 664), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 664), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 568), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 568), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 568), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 472), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 472), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 472), 1);
    add_background_object(create_rmscaleypillar_1435(5464, 376), 1);
    add_background_object(create_rmscaleypillar_1435(5080, 376), 1);
    add_background_object(create_rmscaleypillar_1435(5272, 376), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 856), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 856), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 856), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 760), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 760), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 760), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 664), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 664), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 664), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 568), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 568), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 568), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 472), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 472), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 472), 1);
    add_background_object(create_rmscaleypillar_1435(6424, 376), 1);
    add_background_object(create_rmscaleypillar_1435(6040, 376), 1);
    add_background_object(create_rmscaleypillar_1435(6232, 376), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 856), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 856), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 856), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 760), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 760), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 760), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 664), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 664), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 664), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 568), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 568), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 568), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 472), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 472), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 472), 1);
    add_background_object(create_rmscaleypillar_1435(7384, 376), 1);
    add_background_object(create_rmscaleypillar_1435(7000, 376), 1);
    add_background_object(create_rmscaleypillar_1435(7192, 376), 1);
    add_background_object(create_cavecolumn2_1515(8304, 632), 1);
    add_background_object(create_cavecolumn1_1514(8536, 744), 1);
    add_background_object(create_rmcavebrick7_1446(7560, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7624, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7688, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7752, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7816, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7880, 952), 1);
    add_background_object(create_rmcavebrick7_1446(7944, 952), 1);
    add_background_object(create_rmcavebrick7_1446(8008, 952), 1);
    add_object(create_bossmantalithleg1_1528(4340, 916), 1);
    add_object(create_bossmantalithleg1_1528(4380, 916), 1);
    add_object(create_bossmantalithleg1_1528(4324, 924), 1);
    add_object(create_bossmantalithleg1_1528(4396, 924), 1);
    add_object(create_bossmantalithleg1_1528(4332, 844), 1);
    add_object(create_bossmantalithleg1_1528(4388, 844), 1);
    add_object(create_bossmantalithleg1_1528(4324, 868), 1);
    add_object(create_bossmantalithleg1_1528(4316, 884), 1);
    add_object(create_bossmantalithleg1_1528(4396, 868), 1);
    add_object(create_bossmantalithleg1_1528(4404, 884), 1);
    add_object(create_bossmantalithleg1_1528(4308, 868), 1);
    add_object(create_bossmantalithleg1_1528(4300, 852), 1);
    add_object(create_bossmantalithleg1_1528(4412, 868), 1);
    add_object(create_bossmantalithleg1_1528(4420, 852), 1);
    add_object(create_bossmantalithleg1_1528(4308, 932), 1);
    add_object(create_bossmantalithleg1_1528(4412, 932), 1);
    add_object(create_bossmantalithbody_1529(4360, 872), 1);
    add_object(create_bossmantalithneck4_1530(4360, 872), 1);
    add_object(create_bossmantalithneck3_1531(4360, 851), 1);
    add_object(create_bossmantalithleftknee_1532(4300, 936), 1);
    add_object(create_bossmantalithrightknee_1533(4420, 936), 1);
    add_object(create_bossmantalithleg3_1534(4424, 971), 1);
    add_object(create_bossmantalithleg2_1535(4295, 971), 1);
    add_object(create_bossmantalithneck2_1536(4360, 830), 1);
    add_object(create_bossmantalithneck1_1537(4360, 809), 1);
    add_background_object(create_column5_1318(1448, 888), 2);
    add_background_object(create_shrine1_1538(3504, 872), 2);
    add_background_object(create_rmbosscorpse3_1539(3344, 936), 2);
    add_background_object(create_rmbosscorpse1_1540(3400, 912), 2);
    add_background_object(create_rmbosscorpse2_1541(3424, 936), 2);
    add_background_object(create_rmcavebrick20_1542(6728, 960), 2);
    add_background_object(create_rmcavebrick20_1542(5768, 960), 2);
    add_background_object(create_rmcavebrick20_1542(3848, 960), 2);
    add_background_object(create_rmcavebrick13_1443(7968, 856), 2);
    add_background_object(create_rmpurplecrystal3_1543(9488, 832), 2);
    add_background_object(create_rmpurplecrystal1_1544(9504, 960), 2);
    add_background_object(create_rmpurplecrystal1_1544(9408, 944), 2);
    add_background_object(create_rmpurplecrystal2_1545(9288, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(9224, 944), 2);
    add_background_object(create_rmpurplecrystal3_1543(9336, 816), 2);
    add_background_object(create_rmpurplecrystal3_1543(9192, 840), 2);
    add_background_object(create_rmpurplecrystal4_1546(9256, 832), 2);
    add_background_object(create_rmpurplecrystal4_1546(9120, 824), 2);
    add_background_object(create_rmpurplecrystal2_1545(9064, 960), 2);
    add_background_object(create_rmpurplecrystal1_1544(9000, 944), 2);
    add_background_object(create_rmpurplecrystal3_1543(8920, 840), 2);
    add_background_object(create_rmpurplecrystal2_1545(8784, 960), 2);
    add_background_object(create_rmpurplecrystal4_1546(8824, 824), 2);
    add_background_object(create_rmpurplecrystal2_1545(8592, 960), 2);
    add_background_object(create_rmpurplecrystal3_1543(8672, 840), 2);
    add_background_object(create_rmpurplecrystal4_1546(8608, 824), 2);
    add_background_object(create_rmpurplecrystal2_1545(8472, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(8664, 952), 2);
    add_background_object(create_rmpurplecrystal3_1543(8544, 832), 2);
    add_background_object(create_rmpurplecrystal1_1544(8416, 944), 2);
    add_background_object(create_rmpurplecrystal4_1546(8424, 776), 2);
    add_background_object(create_rmpurplecrystal2_1545(8120, 912), 2);
    add_background_object(create_rmpurplecrystal1_1544(8168, 896), 2);
    add_background_object(create_rmpurplecrystal2_1545(8232, 912), 2);
    add_background_object(create_cavesoil1_1310(8320, 648), 2);
    add_background_object(create_rmcavebrick12_1547(7880, 856), 2);
    add_background_object(create_rmcavebrick12_1547(7904, 472), 2);
    add_background_object(create_rmpurplecrystal2_1545(7504, 912), 2);
    add_background_object(create_rmpurplecrystal1_1544(7568, 896), 2);
    add_background_object(create_rmpurplecrystal1_1544(7632, 912), 2);
    add_background_object(create_rmpurplecrystal2_1545(6920, 896), 2);
    add_background_object(create_rmpurplecrystal1_1544(7112, 896), 2);
    add_background_object(create_rmpurplecrystal2_1545(7304, 896), 2);
    add_background_object(create_rmpurplecrystal1_1544(5584, 904), 2);
    add_background_object(create_rmpurplecrystal2_1545(5360, 896), 2);
    add_background_object(create_rmpurplecrystal1_1544(5024, 920), 2);
    add_background_object(create_rmpurplecrystal2_1545(4864, 920), 2);
    add_background_object(create_rmpurplecrystal2_1545(4928, 888), 2);
    add_background_object(create_rmpurplecrystal2_1545(4960, 904), 2);
    add_background_object(create_rmpurplecrystal1_1544(4912, 896), 2);
    add_background_object(create_rmpurplecrystal2_1545(4232, 896), 2);
    add_background_object(create_stalactites2_1433(2536, 24), 2);
    add_background_object(create_stalactites_1438(2456, 16), 2);
    add_background_object(create_stalactites_1438(2424, -8), 2);
    add_background_object(create_stalactites2_1433(2168, -8), 2);
    add_background_object(create_stalactites_1438(2288, 24), 2);
    add_background_object(create_stalactites2_1433(2224, 24), 2);
    add_background_object(create_stalactites_1438(2056, 32), 2);
    add_background_object(create_rmscaleypillar_1435(8152, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(8152, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7960, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(7960, 1144), 2);
    add_background_object(create_rmcavebrick20_1542(4808, 960), 2);
    add_background_object(create_rmscaleypillar_1435(3096, 968), 2);
    add_background_object(create_rmcavebrick8_1548(3184, 952), 2);
    add_background_object(create_rmcavebrick8_1548(3184, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 440), 2);
    add_background_object(create_rmcavebrick9_1549(7904, 440), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 440), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 792), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1048), 2);
    add_background_object(create_cavesoil1_1310(2304, 264), 2);
    add_background_object(create_cavesoil27_1304(2176, 584), 2);
    add_background_object(create_cavesoil1_1310(2176, 456), 2);
    add_background_object(create_rmscaleypillar_1435(2872, 968), 2);
    add_background_object(create_rmscaleypillar_1435(2872, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(2872, 1160), 2);
    add_background_object(create_rmscaleypillar_1435(2648, 968), 2);
    add_background_object(create_rmscaleypillar_1435(2496, 920), 2);
    add_background_object(create_rmscaleypillar_1435(2496, 1016), 2);
    add_background_object(create_rmscaleypillar_1435(2344, 872), 2);
    add_background_object(create_cavesoil1_1310(2176, 816), 2);
    add_background_object(create_rmpurplecrystal1_1544(1688, 760), 2);
    add_background_object(create_rmpurplecrystal4_1546(1464, 168), 2);
    add_background_object(create_rmpurplecrystal1_1544(1800, 368), 2);
    add_background_object(create_rmpurplecrystal1_1544(1616, 328), 2);
    add_background_object(create_rmpurplecrystal2_1545(1520, 296), 2);
    add_background_object(create_rmpurplecrystal1_1544(1416, 240), 2);
    add_background_object(create_rmpurplecrystal3_1543(1480, 688), 2);
    add_background_object(create_rmpurplecrystal4_1546(1400, 688), 2);
    add_background_object(create_rmpurplecrystal1_1544(720, 696), 2);
    add_background_object(create_column8_1343(872, 688), 2);
    add_background_object(create_column8_1343(808, 656), 2);
    add_background_object(create_rmpurplecrystal4_1546(816, 640), 2);
    add_background_object(create_rmpurplecrystal3_1543(920, 672), 2);
    add_background_object(create_rmpurplecrystal1_1544(912, 752), 2);
    add_background_object(create_rmpurplecrystal4_1546(1064, 688), 2);
    add_background_object(create_rmpurplecrystal2_1545(1072, 760), 2);
    add_background_object(create_rmpurplecrystal1_1544(1288, 888), 2);
    add_background_object(create_rmpurplecrystal2_1545(1560, 896), 2);
    add_background_object(create_rmpurplecrystal2_1545(1384, 880), 2);
    add_background_object(create_rmpurplecrystal1_1544(1496, 888), 2);
    add_background_object(create_rmcavebrick12_1547(2048, 840), 2);
    add_background_object(create_rmcavebrick12_1547(1920, 840), 2);
    add_background_object(create_cavesoil1_1310(1920, 816), 2);
    add_background_object(create_cavesoil1_1310(2048, 816), 2);
    add_background_object(create_rmcavebrick12_1547(2048, 552), 2);
    add_background_object(create_rmcavebrick9_1549(1792, 424), 2);
    add_background_object(create_rmcavebrick9_1549(1792, 392), 2);
    add_background_object(create_rmscaleypillar_1435(304, 776), 2);
    add_background_object(create_rmscaleypillar_1435(304, 872), 2);
    add_background_object(create_column8_1343(600, 616), 2);
    add_background_object(create_column5_1318(600, 664), 2);
    add_background_object(create_rmbookshelf6_1550(416, 1768), 2);
    add_background_object(create_rmbookshelf6_1550(512, 1768), 2);
    add_background_object(create_rmbookshelf4_1551(144, 2616), 2);
    add_background_object(create_rmbookshelf4_1551(1104, 1352), 2);
    add_background_object(create_rmbookshelf5_1552(1104, 1400), 2);
    add_background_object(create_rmbookshelf6_1550(1104, 1304), 2);
    add_background_object(create_rmbookshelf4_1551(440, 1400), 2);
    add_background_object(create_rmbookshelf4_1551(440, 1352), 2);
    add_background_object(create_rmbookshelf4_1551(520, 1352), 2);
    add_background_object(create_rmbookshelf4_1551(648, 1400), 2);
    add_background_object(create_rmbookshelf4_1551(184, 1400), 2);
    add_background_object(create_rmbookshelf4_1551(776, 1352), 2);
    add_background_object(create_rmbookshelf5_1552(520, 1400), 2);
    add_background_object(create_rmbookshelf5_1552(312, 1400), 2);
    add_background_object(create_rmbookshelf5_1552(184, 1352), 2);
    add_background_object(create_rmbookshelf5_1552(776, 1400), 2);
    add_background_object(create_rmbookshelf6_1550(440, 1304), 2);
    add_background_object(create_rmbookshelf6_1550(520, 1304), 2);
    add_background_object(create_rmbookshelf6_1550(312, 1352), 2);
    add_background_object(create_rmbookshelf6_1550(648, 1352), 2);
    add_background_object(create_rmbookshelf6_1550(184, 1304), 2);
    add_background_object(create_rmbookshelf6_1550(776, 1304), 2);
    add_background_object(create_column5_1318(872, 760), 2);
    add_background_object(create_column5_1318(808, 736), 2);
    add_background_object(create_column5_1318(552, 664), 2);
    add_background_object(create_column8_1343(552, 624), 2);
    add_background_object(create_column5_1318(1704, 344), 2);
    add_background_object(create_column8_1343(1704, 304), 2);
    add_background_object(create_column8_1343(1576, 240), 2);
    add_background_object(create_column5_1318(1576, 320), 2);
    add_background_object(create_column8_1343(1640, 272), 2);
    add_background_object(create_column5_1318(1640, 344), 2);
    add_background_object(create_column8_1343(1512, 208), 2);
    add_background_object(create_column5_1318(1512, 288), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 744), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 168), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 264), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 360), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 456), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 552), 2);
    add_background_object(create_rmscaleypillar_1435(1168, 648), 2);
    add_background_object(create_column8_1343(608, 1264), 2);
    add_background_object(create_column8_1343(400, 1264), 2);
    add_background_object(create_column8_1343(504, 1416), 2);
    add_background_object(create_column5_1318(400, 1400), 2);
    add_background_object(create_column5_1318(608, 1400), 2);
    add_background_object(create_rmcavebrick4_1434(1000, 1360), 2);
    add_background_object(create_rmcavebrick4_1434(1000, 1392), 2);
    add_background_object(create_rmpurplecrystal4_1546(560, 2096), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2600), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2536), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2568), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2440), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2512), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2704), 2);
    add_background_object(create_rmpurplecrystal1_1544(592, 2576), 2);
    add_background_object(create_rmpurplecrystal3_1543(456, 2432), 2);
    add_background_object(create_rmpurplecrystal4_1546(496, 2112), 2);
    add_background_object(create_rmpurplecrystal3_1543(640, 2112), 2);
    add_background_object(create_rmpurplecrystal3_1543(1024, 2096), 2);
    add_background_object(create_rmpurplecrystal3_1543(960, 2120), 2);
    add_background_object(create_rmpurplecrystal4_1546(864, 2120), 2);
    add_background_object(create_rmpurplecrystal3_1543(912, 2104), 2);
    add_background_object(create_rmpurplecrystal3_1543(64, 1728), 2);
    add_background_object(create_column8_1343(104, 2512), 2);
    add_background_object(create_column8_1343(232, 2512), 2);
    add_background_object(create_column5_1318(104, 2584), 2);
    add_background_object(create_column5_1318(232, 2616), 2);
    add_background_object(create_column8_1343(744, 1744), 2);
    add_background_object(create_column5_1318(744, 1784), 2);
    add_background_object(create_rmscaleypillar_1435(464, 1888), 2);
    add_background_object(create_rmscaleypillar_1435(464, 1984), 2);
    add_background_object(create_column5_1318(584, 1936), 2);
    add_background_object(create_column5_1318(392, 1976), 2);
    add_background_object(create_column8_1343(392, 1888), 2);
    add_background_object(create_column8_1343(584, 1888), 2);
    add_background_object(create_rmscaleypillar_1435(176, 2128), 2);
    add_background_object(create_rmscaleypillar_1435(176, 1736), 2);
    add_background_object(create_rmscaleypillar_1435(368, 2128), 2);
    add_background_object(create_rmscaleypillar_1435(304, 2568), 2);
    add_background_object(create_rmscaleypillar_1435(1072, 2184), 2);
    add_background_object(create_rmscaleypillar_1435(1072, 2280), 2);
    add_background_object(create_rmscaleypillar_1435(1072, 2088), 2);
    add_background_object(create_rmscaleypillar_1435(744, 2184), 2);
    add_background_object(create_rmscaleypillar_1435(744, 2088), 2);
    add_background_object(create_rmscaleypillar_1435(744, 2416), 2);
    add_background_object(create_rmscaleypillar_1435(744, 2512), 2);
    add_background_object(create_rmcavebrick13_1443(384, 2504), 2);
    add_background_object(create_rmcavebrick13_1443(256, 2504), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 2120), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 1992), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 1864), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 1736), 2);
    add_background_object(create_rmcavebrick7_1446(160, 2088), 2);
    add_background_object(create_rmcavebrick8_1548(136, 2088), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1832), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1832), 2);
    add_background_object(create_rmcavebrick6_1436(864, 1224), 2);
    add_background_object(create_rmblueentrywayright_1553(928, 1736), 2);
    add_background_object(create_rmblueentrywayright2_1554(928, 1736), 2);
    add_background_object(create_rmcavebrick6_1436(96, 1224), 2);
    add_background_object(create_rmblueentrywayleft_1555(0, 1352), 2);
    add_background_object(create_rmblueentrywayleft2_1556(0, 1352), 2);
    add_background_object(create_rmblueentrywayleft_1555(0, 840), 2);
    add_background_object(create_rmblueentrywayright_1553(608, 840), 2);
    add_background_object(create_rmblueentrywayleft2_1556(0, 840), 2);
    add_background_object(create_rmblueentrywayright2_1554(608, 840), 2);
    add_background_object(create_rmpurplecrystal2_1545(72, 904), 2);
    add_background_object(create_rmpurplecrystal2_1545(560, 880), 2);
    add_background_object(create_rmpurplecrystal2_1545(136, 880), 2);
    add_background_object(create_rmpurplecrystal1_1544(176, 904), 2);
    add_background_object(create_rmpurplecrystal3_1543(144, 832), 2);
    add_background_object(create_rmpurplecrystal3_1543(504, 824), 2);
    add_background_object(create_rmpurplecrystal4_1546(80, 816), 2);
    add_background_object(create_column5_1318(392, 888), 2);
    add_background_object(create_rmpurplecrystal4_1546(304, 768), 2);
    add_background_object(create_rmpurplecrystal3_1543(336, 776), 2);
    add_background_object(create_column5_1318(264, 888), 2);
    add_background_object(create_rmpurplecrystal2_1545(552, 528), 2);
    add_background_object(create_rmpurplecrystal1_1544(136, 656), 2);
    add_background_object(create_column8_1343(392, 784), 2);
    add_background_object(create_column6_1341(392, 832), 2);
    add_background_object(create_column8_1343(264, 784), 2);
    add_background_object(create_rmscaleypillar_1435(304, 624), 2);
    add_background_object(create_column5_1318(96, 568), 2);
    add_background_object(create_column6_1341(96, 472), 2);
    add_background_object(create_column8_1343(96, 432), 2);
    add_background_object(create_rmscaleypillar_1435(304, 432), 2);
    add_background_object(create_column5_1318(232, 504), 2);
    add_background_object(create_column6_1341(232, 472), 2);
    add_background_object(create_column8_1343(232, 432), 2);
    add_background_object(create_column5_1318(424, 504), 2);
    add_background_object(create_column6_1341(424, 472), 2);
    add_background_object(create_column8_1343(424, 432), 2);
    add_background_object(create_switchbase_1444(-232, 1416), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_signpostback_1459(9048, 2968), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 712), 2);
    add_background_object(create_rmcavebrick13_1443(128, 424), 2);
    add_background_object(create_rmcavebrick13_1443(192, 424), 2);
    add_background_object(create_rmcavebrick13_1443(256, 424), 2);
    add_background_object(create_rmcavebrick13_1443(320, 424), 2);
    add_background_object(create_rmcavebrick7_1446(256, 552), 2);
    add_background_object(create_rmcavebrick7_1446(320, 552), 2);
    add_background_object(create_rmcavebrick13_1443(384, 424), 2);
    add_background_object(create_rmcavebrick7_1446(384, 552), 2);
    add_background_object(create_rmcavebrick13_1443(448, 424), 2);
    add_background_object(create_rmcavebrick16_1557(128, 968), 2);
    add_background_object(create_rmcavebrick17_1558(128, 296), 2);
    add_background_object(create_rmcavebrick16_1557(256, 968), 2);
    add_background_object(create_rmcavebrick16_1557(384, 968), 2);
    add_background_object(create_rmcavebrick16_1557(512, 968), 2);
    add_background_object(create_rmcavebrick17_1558(256, 296), 2);
    add_background_object(create_rmcavebrick17_1558(384, 296), 2);
    add_background_object(create_rmcavebrick17_1558(512, 296), 2);
    add_background_object(create_rmcavebrick13_1443(512, 424), 2);
    add_background_object(create_rmcavebrick8_1548(616, 424), 2);
    add_background_object(create_rmcavebrick8_1548(616, 456), 2);
    add_background_object(create_rmcavebrick8_1548(616, 488), 2);
    add_background_object(create_rmcavebrick8_1548(616, 520), 2);
    add_background_object(create_rmcavebrick13_1443(576, 424), 2);
    add_background_object(create_gateway_1439(280, 408), 2);
    add_background_object(create_rmcavebrick17_1558(0, 296), 2);
    add_background_object(create_rmcavebrick16_1557(0, 968), 2);
    add_background_object(create_rmcavebrick6_1436(0, 424), 2);
    add_background_object(create_rmcavebrick6_1436(0, 456), 2);
    add_background_object(create_rmcavebrick6_1436(0, 488), 2);
    add_background_object(create_rmcavebrick6_1436(0, 552), 2);
    add_background_object(create_rmcavebrick13_1443(0, 840), 2);
    add_background_object(create_rmcavebrick9_1549(64, 424), 2);
    add_background_object(create_rmcavebrick9_1549(64, 456), 2);
    add_background_object(create_rmcavebrick9_1549(64, 488), 2);
    add_background_object(create_rmcavebrick9_1549(64, 520), 2);
    add_background_object(create_rmcavebrick13_1443(64, 424), 2);
    add_background_object(create_rmcavebrick9_1549(192, 712), 2);
    add_background_object(create_rmcavebrick9_1549(192, 744), 2);
    add_background_object(create_rmcavebrick9_1549(192, 776), 2);
    add_background_object(create_rmcavebrick9_1549(192, 808), 2);
    add_background_object(create_rmcavebrick15_1481(192, 840), 2);
    add_background_object(create_rmcavebrick13_1443(64, 840), 2);
    add_background_object(create_rmcavebrick8_1548(232, 552), 2);
    add_background_object(create_rmcavebrick1_1449(232, 552), 2);
    add_background_object(create_rmcavebrick9_1549(128, 616), 2);
    add_background_object(create_rmcavebrick9_1549(64, 584), 2);
    add_background_object(create_rmcavebrick9_1549(128, 648), 2);
    add_background_object(create_rmcavebrick9_1549(128, 680), 2);
    add_background_object(create_rmcavebrick7_1446(0, 936), 2);
    add_background_object(create_rmcavebrick7_1446(64, 936), 2);
    add_background_object(create_rmcavebrick7_1446(128, 936), 2);
    add_background_object(create_rmcavebrick9_1549(448, 552), 2);
    add_background_object(create_rmcavebrick2_1445(448, 552), 2);
    add_background_object(create_rmcavebrick7_1446(192, 936), 2);
    add_background_object(create_rmcavebrick7_1446(256, 936), 2);
    add_background_object(create_rmcavebrick7_1446(320, 936), 2);
    add_background_object(create_rmcavebrick7_1446(448, 936), 2);
    add_background_object(create_rmcavebrick7_1446(512, 936), 2);
    add_background_object(create_rmcavebrick7_1446(576, 936), 2);
    add_background_object(create_rmcavebrick8_1548(616, 552), 2);
    add_background_object(create_rmcavebrick8_1548(552, 584), 2);
    add_background_object(create_rmcavebrick8_1548(488, 712), 2);
    add_background_object(create_rmcavebrick8_1548(488, 744), 2);
    add_background_object(create_rmcavebrick8_1548(488, 776), 2);
    add_background_object(create_rmcavebrick8_1548(488, 808), 2);
    add_background_object(create_rmcavebrick14_1442(488, 840), 2);
    add_background_object(create_rmcavebrick13_1443(576, 840), 2);
    add_background_object(create_rmcavebrick13_1443(640, 840), 2);
    add_background_object(create_rmcavebrick12_1547(64, 712), 2);
    add_background_object(create_rmcavebrick2_1445(192, 712), 2);
    add_background_object(create_rmcavebrick13_1443(128, 840), 2);
    add_background_object(create_rmcavebrick7_1446(128, 712), 2);
    add_background_object(create_rmcavebrick12_1547(512, 712), 2);
    add_background_object(create_rmcavebrick1_1449(488, 712), 2);
    add_background_object(create_rmcavebrick13_1443(512, 840), 2);
    add_background_object(create_rmcavebrick6_1436(256, 584), 2);
    add_background_object(create_rmcavebrick6_1436(384, 584), 2);
    add_background_object(create_rmcavebrick14_1442(232, 616), 2);
    add_background_object(create_rmcavebrick15_1481(448, 616), 2);
    add_background_object(create_rmcavebrick13_1443(256, 616), 2);
    add_background_object(create_rmcavebrick13_1443(320, 616), 2);
    add_background_object(create_rmcavebrick13_1443(384, 616), 2);
    add_background_object(create_rmcavebrick10_1451(320, 584), 2);
    add_background_object(create_rmcavebrick9_1549(448, 584), 2);
    add_background_object(create_rmcavebrick8_1548(232, 584), 2);
    add_background_object(create_rmladder_1152(448, 712), 2);
    add_background_object(create_rmladder_1152(448, 744), 2);
    add_background_object(create_rmladder_1152(448, 776), 2);
    add_background_object(create_rmladder_1152(448, 808), 2);
    add_background_object(create_rmladder_1152(216, 712), 2);
    add_background_object(create_rmladder_1152(216, 744), 2);
    add_background_object(create_rmladder_1152(216, 776), 2);
    add_background_object(create_rmladder_1152(216, 808), 2);
    add_background_object(create_rmcavebrick7_1446(384, 936), 2);
    add_background_object(create_rmcavebrick7_1446(512, 712), 2);
    add_background_object(create_rmcavebrick7_1446(288, 712), 2);
    add_background_object(create_rmcavebrick7_1446(352, 712), 2);
    add_background_object(create_rmcavebrick9_1549(416, 712), 2);
    add_background_object(create_rmcavebrick8_1548(264, 712), 2);
    add_background_object(create_rmcavebrick2_1445(416, 712), 2);
    add_background_object(create_rmcavebrick1_1449(264, 712), 2);
    add_background_object(create_rmcavebrick6_1436(288, 744), 2);
    add_background_object(create_rmcavebrick6_1436(352, 744), 2);
    add_background_object(create_rmcavebrick9_1549(416, 744), 2);
    add_background_object(create_rmcavebrick8_1548(264, 744), 2);
    add_background_object(create_rmcavebrick14_1442(264, 776), 2);
    add_background_object(create_rmcavebrick13_1443(288, 776), 2);
    add_background_object(create_rmcavebrick15_1481(416, 776), 2);
    add_background_object(create_rmcavebrick13_1443(352, 776), 2);
    add_background_object(create_column6_1341(264, 832), 2);
    add_background_object(create_column6_1341(264, 848), 2);
    add_background_object(create_column6_1341(392, 848), 2);
    add_background_object(create_rmcavebrick17_1558(640, 296), 2);
    add_background_object(create_rmcavebrick12_1547(640, 424), 2);
    add_background_object(create_rmcavebrick6_1436(640, 552), 2);
    add_background_object(create_rmcavebrick6_1436(704, 552), 2);
    add_background_object(create_rmcavebrick16_1557(640, 968), 2);
    add_background_object(create_rmcavebrick7_1446(640, 936), 2);
    add_background_object(create_rmcavebrick7_1446(704, 936), 2);
    add_background_object(create_rmcavebrick17_1558(128, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(256, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(384, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(512, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(0, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(640, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(768, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(896, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(1024, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(1152, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(1280, 1096), 2);
    add_background_object(create_rmcavebrick17_1558(1408, 1096), 2);
    add_background_object(create_rmcavebrick16_1557(0, 1480), 2);
    add_background_object(create_rmcavebrick16_1557(128, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(192, 1448), 2);
    add_background_object(create_rmcavebrick16_1557(512, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(512, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(576, 1448), 2);
    add_background_object(create_rmcavebrick16_1557(640, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(640, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(704, 1448), 2);
    add_background_object(create_rmcavebrick16_1557(768, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(768, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(832, 1448), 2);
    add_background_object(create_rmcavebrick16_1557(896, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(896, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(960, 1448), 2);
    add_background_object(create_rmcavebrick14_1442(872, 1352), 2);
    add_background_object(create_rmcavebrick8_1548(872, 1320), 2);
    add_background_object(create_rmcavebrick8_1548(872, 1288), 2);
    add_background_object(create_rmcavebrick7_1446(128, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(64, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(0, 1448), 2);
    add_background_object(create_rmcavebrick17_1558(1024, 1128), 2);
    add_background_object(create_rmcavebrick16_1557(1024, 1480), 2);
    add_background_object(create_rmcavebrick16_1557(1280, 1480), 2);
    add_background_object(create_rmcavebrick17_1558(1280, 1128), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 1224), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 1352), 2);
    add_background_object(create_rmcavebrick16_1557(1408, 1480), 2);
    add_background_object(create_rmcavebrick17_1558(1408, 1128), 2);
    add_background_object(create_rmcavebrick12_1547(1408, 1224), 2);
    add_background_object(create_rmcavebrick12_1547(1408, 1352), 2);
    add_background_object(create_rmcavebrick17_1558(1152, 1128), 2);
    add_background_object(create_rmcavebrick16_1557(1152, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(1088, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(1152, 1448), 2);
    add_background_object(create_rmcavebrick9_1549(1024, 1320), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1224), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1320), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1288), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1256), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1352), 2);
    add_background_object(create_rmcavebrick8_1548(1192, 1416), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 1384), 2);
    add_background_object(create_rmcavebrick13_1443(1024, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(1088, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(1152, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(1216, 1256), 2);
    add_background_object(create_rmcavebrick15_1481(1024, 1352), 2);
    add_background_object(create_rmcavebrick7_1446(-64, 1448), 2);
    add_background_object(create_rmcavebrick17_1558(768, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(1024, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(1152, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(896, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(128, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(256, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(384, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(512, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(0, 1608), 2);
    add_background_object(create_rmcavebrick17_1558(640, 1608), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 1736), 2);
    add_background_object(create_rmcavebrick8_1548(744, 1832), 2);
    add_background_object(create_rmcavebrick13_1443(896, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(960, 1736), 2);
    add_background_object(create_rmcavebrick7_1446(768, 1832), 2);
    add_background_object(create_rmcavebrick7_1446(832, 1832), 2);
    add_background_object(create_rmcavebrick7_1446(896, 1832), 2);
    add_background_object(create_rmcavebrick7_1446(960, 1832), 2);
    add_background_object(create_rmcavebrick1_1449(744, 1832), 2);
    add_background_object(create_rmcavebrick13_1443(832, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(768, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(704, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(640, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(576, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(512, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(448, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(384, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(320, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(256, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(192, 1736), 2);
    add_background_object(create_rmcavebrick13_1443(128, 1736), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 1864), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 1864), 2);
    add_background_object(create_rmcavebrick12_1547(896, 1864), 2);
    add_background_object(create_rmcavebrick12_1547(768, 1864), 2);
    add_background_object(create_rmcavebrick8_1548(744, 1864), 2);
    add_background_object(create_rmcavebrick8_1548(744, 1896), 2);
    add_background_object(create_rmcavebrick8_1548(744, 1928), 2);
    add_background_object(create_rmcavebrick7_1446(1024, 1832), 2);
    add_background_object(create_rmcavebrick7_1446(1088, 1832), 2);
    add_background_object(create_rmcavebrick13_1443(96, 1352), 2);
    add_background_object(create_rmcavebrick13_1443(32, 1352), 2);
    add_background_object(create_rmcavebrick13_1443(-32, 1352), 2);
    add_background_object(create_rmcavebrick13_1443(896, 1352), 2);
    add_background_object(create_rmcavebrick13_1443(960, 1352), 2);
    add_background_object(create_rmcavebrick12_1547(-32, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(160, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(480, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(544, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(608, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(672, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(736, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(800, 1224), 2);
    add_background_object(create_rmcavebrick13_1443(544, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(608, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(672, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(736, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(800, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(864, 1256), 2);
    add_background_object(create_rmcavebrick7_1446(704, 1960), 2);
    add_background_object(create_rmcavebrick7_1446(640, 1960), 2);
    add_background_object(create_rmcavebrick7_1446(448, 2024), 2);
    add_background_object(create_rmcavebrick19_1559(448, 2216), 2);
    add_background_object(create_rmcavebrick7_1446(384, 2024), 2);
    add_background_object(create_rmcavebrick12_1547(768, 1992), 2);
    add_background_object(create_rmcavebrick12_1547(640, 1992), 2);
    add_background_object(create_rmcavebrick10_1451(384, 2056), 2);
    add_background_object(create_rmcavebrick6_1436(448, 2056), 2);
    add_background_object(create_rmcavebrick6_1436(192, 2088), 2);
    add_background_object(create_rmcavebrick9_1549(256, 2088), 2);
    add_background_object(create_rmcavebrick6_1436(192, 2056), 2);
    add_background_object(create_rmcavebrick9_1549(256, 2056), 2);
    add_background_object(create_rmcavebrick8_1548(168, 2056), 2);
    add_background_object(create_rmcavebrick9_1549(256, 2024), 2);
    add_background_object(create_rmcavebrick8_1548(168, 2024), 2);
    add_background_object(create_rmcavebrick6_1436(192, 1992), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1992), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1992), 2);
    add_background_object(create_rmcavebrick6_1436(192, 1896), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1896), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1896), 2);
    add_background_object(create_rmcavebrick6_1436(192, 1864), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1864), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1864), 2);
    add_background_object(create_rmcavebrick7_1446(192, 1832), 2);
    add_background_object(create_rmcavebrick1_1449(168, 1832), 2);
    add_background_object(create_rmcavebrick2_1445(256, 1832), 2);
    add_background_object(create_rmcavebrick18_1560(512, 1960), 2);
    add_background_object(create_rmcavebrick1_1449(136, 2088), 2);
    add_background_object(create_rmcavebrick8_1548(360, 2024), 2);
    add_background_object(create_rmcavebrick1_1449(360, 2024), 2);
    add_background_object(create_rmcavebrick8_1548(360, 2056), 2);
    add_background_object(create_loop7back_1561(64, 2120), 2);
    add_background_object(create_loop7_1480(64, 2120), 2);
    add_background_object(create_rmcavebrick7_1446(192, 2216), 2);
    add_background_object(create_levellayer116back_1453(40, 2056), 2);
    add_background_object(create_levellayer116back_1453(40, 1992), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 1992), 2);
    add_background_object(create_levellayer116back_1453(40, 1864), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 1864), 2);
    add_background_object(create_levellayer116back_1453(40, 1800), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 1800), 2);
    add_background_object(create_levellayer116back_1453(40, 1736), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 1736), 2);
    add_background_object(create_loop6_1479(48, 2064), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 2056), 2);
    add_background_object(create_rmcavebrick13_1443(64, 1736), 2);
    add_background_object(create_rmcavebrick14_1442(136, 2120), 2);
    add_background_object(create_rmcavebrick15_1481(256, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(160, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(192, 2120), 2);
    add_background_object(create_levellayer116back_1453(40, 1928), 2);
    add_background_object(create_rmcavebrickwall_1562(40, 1928), 2);
    add_background_object(create_rmcavebrick6_1436(192, 1960), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1960), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1960), 2);
    add_background_object(create_rmcavebrick9_1549(256, 1928), 2);
    add_background_object(create_rmcavebrick8_1548(168, 1928), 2);
    add_background_object(create_rmcavebrick8_1548(360, 2088), 2);
    add_background_object(create_rmcavebrick6_1436(384, 2088), 2);
    add_background_object(create_rmcavebrick6_1436(448, 2088), 2);
    add_background_object(create_rmcavebrick14_1442(360, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(384, 2120), 2);
    add_background_object(create_rmcavebrick7_1446(256, 2216), 2);
    add_background_object(create_rmcavebrick7_1446(320, 2216), 2);
    add_background_object(create_rmcavebrick7_1446(384, 2216), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(64, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(192, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(320, 2248), 2);
    add_background_object(create_rmcavebrick13_1443(448, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(512, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(576, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(640, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(704, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(768, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(832, 2120), 2);
    add_background_object(create_rmcavebrick10_1451(192, 2024), 2);
    add_background_object(create_rmcavebrick10_1451(192, 1928), 2);
    add_background_object(create_rmcavebrick7_1446(576, 2280), 2);
    add_background_object(create_rmcavebrick7_1446(640, 2280), 2);
    add_background_object(create_rmcavebrick7_1446(704, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(704, 2280), 2);
    add_background_object(create_rmcavebrick8_1548(680, 2248), 2);
    add_background_object(create_rmcavebrick1_1449(680, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 1992), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 1992), 2);
    add_background_object(create_rmcavebrick12_1547(896, 1992), 2);
    add_background_object(create_rmcavebrick7_1446(768, 2248), 2);
    add_background_object(create_rmcavebrick9_1549(832, 2248), 2);
    add_background_object(create_rmcavebrick9_1549(832, 2312), 2);
    add_background_object(create_rmcavebrick9_1549(832, 2280), 2);
    add_background_object(create_rmcavebrick2_1445(832, 2248), 2);
    add_background_object(create_rmcavebrick9_1549(832, 2376), 2);
    add_background_object(create_rmcavebrick9_1549(832, 2344), 2);
    add_background_object(create_rmcavebrick13_1443(896, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(960, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(1024, 2120), 2);
    add_background_object(create_rmcavebrick13_1443(1088, 2120), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 2120), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 2376), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2408), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2440), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2472), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2312), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2344), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2376), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2216), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2248), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2280), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2120), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2152), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 2184), 2);
    add_background_object(create_rmcavebrick17_1558(1280, 1608), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 1736), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 1864), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 1992), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 2120), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 2248), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 2376), 2);
    add_background_object(create_rmcavebrick6_1436(1088, 2408), 2);
    add_background_object(create_rmcavebrick6_1436(1088, 2440), 2);
    add_background_object(create_rmcavebrick6_1436(1088, 2472), 2);
    add_background_object(create_rmcavebrick1_1449(1064, 2376), 2);
    add_background_object(create_rmcavebrick7_1446(1088, 2376), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 2376), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 2504), 2);
    add_background_object(create_rmcavebrick12_1547(-64, 2632), 2);
    add_background_object(create_rmcavebrick12_1547(64, 2696), 2);
    add_background_object(create_rmcavebrick9_1549(64, 2536), 2);
    add_background_object(create_rmcavebrick9_1549(64, 2568), 2);
    add_background_object(create_rmcavebrick9_1549(64, 2600), 2);
    add_background_object(create_rmcavebrick9_1549(128, 2632), 2);
    add_background_object(create_rmcavebrick7_1446(64, 2632), 2);
    add_background_object(create_rmcavebrick7_1446(128, 2664), 2);
    add_background_object(create_rmcavebrick7_1446(192, 2664), 2);
    add_background_object(create_rmcavebrick7_1446(256, 2664), 2);
    add_background_object(create_rmcavebrick12_1547(192, 2696), 2);
    add_background_object(create_rmcavebrick13_1443(64, 2504), 2);
    add_background_object(create_rmcavebrick13_1443(128, 2504), 2);
    add_background_object(create_rmcavebrick13_1443(192, 2504), 2);
    add_background_object(create_rmcavebrick13_1443(320, 2568), 2);
    add_background_object(create_rmcavebrick13_1443(448, 2440), 2);
    add_background_object(create_rmcavebrick9_1549(64, 2504), 2);
    add_background_object(create_rmcavebrick6_1436(320, 2536), 2);
    add_background_object(create_rmcavebrick8_1548(296, 2536), 2);
    add_background_object(create_rmcavebrick14_1442(296, 2568), 2);
    add_background_object(create_rmcavebrick15_1481(384, 2568), 2);
    add_background_object(create_rmcavebrick9_1549(384, 2536), 2);
    add_background_object(create_rmcavebrick13_1443(576, 2440), 2);
    add_background_object(create_rmcavebrick13_1443(512, 2440), 2);
    add_background_object(create_rmcavebrick13_1443(640, 2440), 2);
    add_background_object(create_rmcavebrick6_1436(320, 2504), 2);
    add_background_object(create_rmcavebrick8_1548(296, 2504), 2);
    add_background_object(create_rmcavebrick9_1549(384, 2504), 2);
    add_background_object(create_rmcavebrick7_1446(320, 2664), 2);
    add_background_object(create_rmcavebrick9_1549(384, 2664), 2);
    add_background_object(create_rmcavebrick2_1445(384, 2664), 2);
    add_background_object(create_rmcavebrick12_1547(64, 2376), 2);
    add_background_object(create_rmcavebrick12_1547(192, 2376), 2);
    add_background_object(create_rmcavebrick12_1547(320, 2376), 2);
    add_background_object(create_rmcavebrick12_1547(448, 2312), 2);
    add_background_object(create_rmcavebrick12_1547(576, 2312), 2);
    add_background_object(create_rmcavebrick16_1557(0, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(128, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(256, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(384, 2760), 2);
    add_background_object(create_rmcavebrick7_1446(384, 2728), 2);
    add_background_object(create_rmcavebrick7_1446(448, 2728), 2);
    add_background_object(create_rmcavebrick17_1558(128, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(256, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(0, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(384, 2888), 2);
    add_background_object(create_rmcavebrick16_1557(512, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(640, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(768, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(896, 2760), 2);
    add_background_object(create_rmcavebrick17_1558(640, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(768, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(512, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(896, 2888), 2);
    add_background_object(create_rmcavebrick16_1557(1024, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(1152, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(1280, 2760), 2);
    add_background_object(create_rmcavebrick16_1557(1408, 2760), 2);
    add_background_object(create_rmcavebrick17_1558(1152, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(1280, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(1024, 2888), 2);
    add_background_object(create_rmcavebrick17_1558(1408, 2888), 2);
    add_background_object(create_rmcavebrick9_1549(384, 2696), 2);
    add_background_object(create_rmcavebrick6_1436(320, 2696), 2);
    add_background_object(create_rmcavebrick6_1436(320, 2728), 2);
    add_background_object(create_rmcavebrick7_1446(512, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(576, 2696), 2);
    add_background_object(create_rmcavebrick6_1436(576, 2728), 2);
    add_background_object(create_rmcavebrick8_1548(552, 2696), 2);
    add_background_object(create_rmcavebrick7_1446(576, 2632), 2);
    add_background_object(create_rmcavebrick8_1548(552, 2632), 2);
    add_background_object(create_rmcavebrick1_1449(552, 2632), 2);
    add_background_object(create_rmcavebrick6_1436(640, 2696), 2);
    add_background_object(create_rmcavebrick6_1436(640, 2728), 2);
    add_background_object(create_rmcavebrick7_1446(640, 2632), 2);
    add_background_object(create_rmcavebrick8_1548(552, 2664), 2);
    add_background_object(create_rmcavebrick8_1548(680, 2568), 2);
    add_background_object(create_rmcavebrick1_1449(680, 2568), 2);
    add_background_object(create_rmcavebrick12_1547(704, 2600), 2);
    add_background_object(create_rmcavebrick7_1446(704, 2568), 2);
    add_background_object(create_rmcavebrick7_1446(768, 2568), 2);
    add_background_object(create_rmcavebrick15_1481(704, 2440), 2);
    add_background_object(create_rmcavebrick9_1549(704, 2408), 2);
    add_background_object(create_rmcavebrick13_1443(704, 2408), 2);
    add_background_object(create_rmcavebrick13_1443(768, 2408), 2);
    add_background_object(create_rmcavebrick15_1481(832, 2408), 2);
    add_background_object(create_rmcavebrick12_1547(832, 2600), 2);
    add_background_object(create_rmcavebrick7_1446(832, 2568), 2);
    add_background_object(create_rmcavebrick7_1446(896, 2536), 2);
    add_background_object(create_rmcavebrick12_1547(960, 2600), 2);
    add_background_object(create_rmcavebrick12_1547(1216, 2504), 2);
    add_background_object(create_rmcavebrick12_1547(1088, 2504), 2);
    add_background_object(create_rmcavebrick12_1547(1216, 2632), 2);
    add_background_object(create_rmcavebrick12_1547(1088, 2632), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2504), 2);
    add_background_object(create_rmcavebrick8_1548(680, 2600), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2536), 2);
    add_background_object(create_rmladder_1152(1024, 2376), 2);
    add_background_object(create_rmladder_1152(1024, 2408), 2);
    add_background_object(create_rmladder_1152(1024, 2440), 2);
    add_background_object(create_rmladder_1152(1024, 2472), 2);
    add_background_object(create_rmcavebrick8_1548(1064, 2568), 2);
    add_background_object(create_rmcavebrick9_1549(960, 2536), 2);
    add_background_object(create_rmcavebrick2_1445(960, 2536), 2);
    add_background_object(create_rmcavebrick12_1547(1344, 2504), 2);
    add_background_object(create_rmcavebrick12_1547(1344, 2632), 2);
    add_background_object(create_rmladder_1152(128, 1832), 2);
    add_background_object(create_rmladder_1152(128, 1864), 2);
    add_background_object(create_rmladder_1152(128, 1896), 2);
    add_background_object(create_rmladder_1152(128, 1928), 2);
    add_background_object(create_rmcavebrick1_1449(392, 1864), 2);
    add_background_object(create_rmcavebrick3_1440(480, 1864), 2);
    add_background_object(create_rmcavebrick2_1445(608, 1864), 2);
    add_background_object(create_rmcavebrick3_1440(544, 1864), 2);
    add_background_object(create_column6_1341(392, 1936), 2);
    add_background_object(create_column6_1341(392, 1952), 2);
    add_background_object(create_rmcavebrick10_1451(512, 2088), 2);
    add_background_object(create_rmcavebrick6_1436(512, 2056), 2);
    add_background_object(create_rmcavebrick6_1436(576, 2056), 2);
    add_background_object(create_rmcavebrick6_1436(576, 2088), 2);
    add_background_object(create_rmcavebrick15_1481(448, 2504), 2);
    add_background_object(create_rmcavebrick9_1549(448, 2472), 2);
    add_background_object(create_rmcavebrick9_1549(448, 2440), 2);
    add_background_object(create_rmcavebrick10_1451(576, 2664), 2);
    add_background_object(create_rmcavebrick6_1436(640, 2664), 2);
    add_background_object(create_rmcavebrick10_1451(896, 2568), 2);
    add_background_object(create_rmcavebrick8_1548(872, 2536), 2);
    add_background_object(create_rmcavebrick1_1449(872, 2536), 2);
    add_background_object(create_rmcavebrick9_1549(960, 2568), 2);
    add_background_object(create_rmcavebrick6_1436(704, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(768, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(832, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(896, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(960, 2728), 2);
    add_background_object(create_rmcavebrick6_1436(1024, 2728), 2);
    add_background_object(create_rmladder_1152(128, 1960), 2);
    add_background_object(create_rmcavebrick3_1440(416, 1864), 2);
    add_background_object(create_column6_1341(232, 2544), 2);
    add_background_object(create_column6_1341(232, 2576), 2);
    add_background_object(create_column6_1341(104, 2544), 2);
    add_background_object(create_rmcavebrick4_1434(904, 2504), 2);
    add_background_object(create_rmcavebrick4_1434(904, 2472), 2);
    add_background_object(create_rmcavebrick5_1448(904, 2440), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2544), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2576), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2608), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2640), 2);
    add_background_object(create_rmcavebrick4_1434(416, 2672), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2472), 2);
    add_background_object(create_rmcavebrick4_1434(560, 2504), 2);
    add_background_object(create_switchwallbase_1563(80, 2584), 2);
    add_background_object(create_switchwallbase2_1564(1248, 1368), 2);
    add_background_object(create_rmcavebrick6_1436(64, 2664), 2);
    add_background_object(create_rmcavebrick2_1445(128, 2632), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 1256), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 1256), 2);
    add_background_object(create_rmcavebrick15_1481(1152, 1288), 2);
    add_background_object(create_rmcavebrick14_1442(1128, 1288), 2);
    add_background_object(create_rmcavebrick1_1449(1192, 1416), 2);
    add_background_object(create_rmcavebrick7_1446(1216, 1416), 2);
    add_background_object(create_rmcavebrick6_1436(1216, 1448), 2);
    add_background_object(create_rmcavebrick9_1549(1088, 1416), 2);
    add_background_object(create_rmcavebrick8_1548(1000, 1416), 2);
    add_background_object(create_rmcavebrick1_1449(1000, 1416), 2);
    add_background_object(create_rmcavebrick2_1445(1088, 1416), 2);
    add_background_object(create_rmcavebrick6_1436(1024, 1448), 2);
    add_background_object(create_rmcavebrick2_1445(128, 616), 2);
    add_background_object(create_rmcavebrick9_1549(64, 552), 2);
    add_background_object(create_column6_1341(96, 520), 2);
    add_background_object(create_rmcavebrick12_1547(0, 616), 2);
    add_background_object(create_rmcavebrick7_1446(64, 616), 2);
    add_background_object(create_rmcavebrick6_1436(0, 584), 2);
    add_background_object(create_rmcavebrick10_1451(0, 520), 2);
    add_background_object(create_rmcavebrick6_1436(96, 1320), 2);
    add_background_object(create_rmcavebrick6_1436(96, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(96, 1288), 2);
    add_background_object(create_rmcavebrick9_1549(160, 1320), 2);
    add_background_object(create_rmcavebrick9_1549(160, 1288), 2);
    add_background_object(create_rmcavebrick9_1549(160, 1256), 2);
    add_background_object(create_rmcavebrick15_1481(160, 1352), 2);
    add_background_object(create_rmcavebrick13_1443(160, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(480, 1256), 2);
    add_background_object(create_column6_1341(400, 1304), 2);
    add_background_object(create_column6_1341(400, 1352), 2);
    add_background_object(create_column6_1341(608, 1312), 2);
    add_background_object(create_column6_1341(608, 1360), 2);
    add_background_object(create_rmcavebrick6_1436(416, 1224), 2);
    add_background_object(create_rmcavebrick13_1443(416, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(352, 1224), 2);
    add_background_object(create_rmcavebrick13_1443(352, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(288, 1224), 2);
    add_background_object(create_rmcavebrick13_1443(288, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(224, 1224), 2);
    add_background_object(create_rmcavebrick13_1443(224, 1256), 2);
    add_background_object(create_rmcavebrick16_1557(256, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(256, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(320, 1448), 2);
    add_background_object(create_rmcavebrick16_1557(384, 1480), 2);
    add_background_object(create_rmcavebrick7_1446(384, 1448), 2);
    add_background_object(create_rmcavebrick7_1446(448, 1448), 2);
    add_background_object(create_column8_1343(272, 1264), 2);
    add_background_object(create_column5_1318(272, 1400), 2);
    add_background_object(create_column8_1343(736, 1264), 2);
    add_background_object(create_column5_1318(736, 1400), 2);
    add_background_object(create_column6_1341(272, 1304), 2);
    add_background_object(create_column6_1341(272, 1352), 2);
    add_background_object(create_column6_1341(736, 1312), 2);
    add_background_object(create_column6_1341(736, 1360), 2);
    add_background_object(create_rmcavebrick7_1446(1024, 1416), 2);
    add_background_object(create_rmcavebrick16_1557(768, 968), 2);
    add_background_object(create_rmcavebrick12_1547(768, 808), 2);
    add_background_object(create_rmcavebrick12_1547(768, 456), 2);
    add_background_object(create_rmcavebrick17_1558(768, 40), 2);
    add_background_object(create_gateway_1439(280, 408), 2);
    add_background_object(create_rmcavebrick7_1446(576, 712), 2);
    add_background_object(create_rmpurplecrystal1_1544(240, 888), 2);
    add_background_object(create_rmpurplecrystal2_1545(400, 888), 2);
    add_background_object(create_rmpurplecrystal1_1544(448, 904), 2);
    add_background_object(create_rmcavebrick16_1557(896, 968), 2);
    add_background_object(create_rmcavebrick7_1446(896, 808), 2);
    add_background_object(create_rmcavebrick7_1446(960, 808), 2);
    add_background_object(create_rmcavebrick12_1547(896, 840), 2);
    add_background_object(create_rmcavebrick17_1558(896, 40), 2);
    add_background_object(create_rmcavebrick12_1547(896, 552), 2);
    add_background_object(create_rmcavebrick13_1443(960, 680), 2);
    add_background_object(create_rmcavebrick13_1443(896, 680), 2);
    add_background_object(create_rmcavebrick16_1557(1024, 968), 2);
    add_background_object(create_rmcavebrick7_1446(1024, 808), 2);
    add_background_object(create_rmcavebrick7_1446(1088, 808), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 840), 2);
    add_background_object(create_rmcavebrick17_1558(1024, 40), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 552), 2);
    add_background_object(create_rmcavebrick13_1443(1088, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1024, 680), 2);
    add_background_object(create_rmcavebrick16_1557(1152, 968), 2);
    add_background_object(create_rmcavebrick7_1446(1152, 808), 2);
    add_background_object(create_rmcavebrick7_1446(1216, 808), 2);
    add_background_object(create_rmcavebrick12_1547(1152, 840), 2);
    add_background_object(create_rmcavebrick17_1558(1152, 40), 2);
    add_background_object(create_rmcavebrick16_1557(1280, 968), 2);
    add_background_object(create_rmcavebrick7_1446(1280, 936), 2);
    add_background_object(create_rmcavebrick7_1446(1344, 936), 2);
    add_background_object(create_rmcavebrick7_1446(1408, 936), 2);
    add_background_object(create_rmcavebrick7_1446(1472, 936), 2);
    add_background_object(create_rmcavebrick16_1557(1408, 968), 2);
    add_background_object(create_rmcavebrick9_1549(1280, 808), 2);
    add_background_object(create_rmcavebrick2_1445(1280, 808), 2);
    add_background_object(create_rmcavebrick9_1549(1280, 840), 2);
    add_background_object(create_rmcavebrick9_1549(1280, 872), 2);
    add_background_object(create_rmcavebrick9_1549(1280, 904), 2);
    add_background_object(create_rmcavebrick17_1558(1280, 40), 2);
    add_background_object(create_rmcavebrick17_1558(1408, 40), 2);
    add_background_object(create_rmcavebrick17_1558(1536, 40), 2);
    add_background_object(create_rmcavebrick12_1547(1664, 840), 2);
    add_background_object(create_rmcavebrick16_1557(1664, 968), 2);
    add_background_object(create_rmcavebrick17_1558(1536, 1096), 2);
    add_background_object(create_rmcavebrick8_1548(1448, 776), 2);
    add_background_object(create_rmcavebrick9_1549(1472, 776), 2);
    add_background_object(create_rmcavebrick7_1446(1664, 808), 2);
    add_background_object(create_rmcavebrick7_1446(1728, 808), 2);
    add_background_object(create_rmcavebrick8_1548(1640, 808), 2);
    add_background_object(create_rmcavebrick16_1557(1536, 968), 2);
    add_background_object(create_rmcavebrick17_1558(1664, 1096), 2);
    add_background_object(create_rmcavebrick7_1446(1536, 936), 2);
    add_background_object(create_rmcavebrick7_1446(1600, 936), 2);
    add_background_object(create_rmcavebrick8_1548(1640, 840), 2);
    add_background_object(create_rmcavebrick8_1548(1640, 872), 2);
    add_background_object(create_rmcavebrick8_1548(1640, 904), 2);
    add_background_object(create_rmcavebrick1_1449(1640, 808), 2);
    add_background_object(create_rmcavebrick8_1548(1448, 744), 2);
    add_background_object(create_rmcavebrick9_1549(1472, 744), 2);
    add_background_object(create_rmcavebrick8_1548(1448, 712), 2);
    add_background_object(create_rmcavebrick9_1549(1472, 712), 2);
    add_background_object(create_rmcavebrick13_1443(1472, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1600, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1536, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1664, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1728, 680), 2);
    add_background_object(create_rmcavebrick9_1549(1472, 680), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 520), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 488), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 456), 2);
    add_background_object(create_rmcavebrick13_1443(1152, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1280, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1216, 168), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 424), 2);
    add_background_object(create_rmcavebrick13_1443(1408, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1344, 168), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 648), 2);
    add_background_object(create_rmcavebrick12_1547(768, 296), 2);
    add_background_object(create_rmcavebrick12_1547(896, 296), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 296), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 392), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 360), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 328), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 296), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 296), 2);
    add_background_object(create_rmcavebrick12_1547(768, 168), 2);
    add_background_object(create_rmcavebrick12_1547(896, 168), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 168), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 264), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 232), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 200), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1408, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1344, 680), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 616), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 584), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 552), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 392), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 360), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 328), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 296), 2);
    add_background_object(create_rmcavebrick7_1446(1280, 264), 2);
    add_background_object(create_rmcavebrick7_1446(1344, 264), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 264), 2);
    add_background_object(create_rmcavebrick1_1449(1256, 264), 2);
    add_background_object(create_rmcavebrick7_1446(1664, 392), 2);
    add_background_object(create_rmcavebrick13_1443(1472, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1536, 200), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 552), 2);
    add_background_object(create_rmcavebrick12_1547(1408, 424), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 296), 2);
    add_background_object(create_rmcavebrick7_1446(1728, 392), 2);
    add_background_object(create_rmcavebrick12_1547(1408, 552), 2);
    add_background_object(create_rmcavebrick12_1547(1536, 552), 2);
    add_background_object(create_rmcavebrick12_1547(1536, 424), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 648), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 616), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 584), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 552), 2);
    add_background_object(create_rmcavebrick9_1549(1152, 680), 2);
    add_background_object(create_rmcavebrick12_1547(896, 424), 2);
    add_background_object(create_rmcavebrick12_1547(1024, 424), 2);
    add_background_object(create_rmcavebrick8_1548(1128, 680), 2);
    add_background_object(create_rmcavebrick6_1436(832, 936), 2);
    add_background_object(create_rmcavebrick6_1436(768, 936), 2);
    add_background_object(create_rmcavebrick8_1548(1448, 680), 2);
    add_background_object(create_rmcavebrick12_1547(1280, 424), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 520), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 488), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 456), 2);
    add_background_object(create_rmcavebrick8_1548(1256, 424), 2);
    add_background_object(create_rmcavebrick12_1547(1664, 552), 2);
    add_background_object(create_rmcavebrick12_1547(1664, 424), 2);
    add_background_object(create_rmcavebrick17_1558(1664, 40), 2);
    add_background_object(create_column8_1343(1128, 720), 2);
    add_background_object(create_column5_1318(1128, 760), 2);
    add_background_object(create_rmcavebrick14_1442(1128, 712), 2);
    add_background_object(create_rmcavebrick15_1481(1152, 712), 2);
    add_background_object(create_column8_1343(1256, 688), 2);
    add_background_object(create_column5_1318(1256, 760), 2);
    add_background_object(create_rmcavebrick13_1443(1280, 680), 2);
    add_background_object(create_rmcavebrick14_1442(1256, 680), 2);
    add_background_object(create_column6_1341(1256, 728), 2);
    add_background_object(create_column8_1343(1448, 816), 2);
    add_background_object(create_rmcavebrick15_1481(1472, 808), 2);
    add_background_object(create_rmcavebrick14_1442(1448, 808), 2);
    add_background_object(create_column6_1341(1448, 856), 2);
    add_background_object(create_rmcavebrick19_1559(1408, 264), 2);
    add_background_object(create_rmcavebrick19_1559(1536, 328), 2);
    add_background_object(create_rmcavebrick12_1547(1408, 360), 2);
    add_background_object(create_rmcavebrick6_1436(1536, 168), 2);
    add_background_object(create_rmcavebrick8_1548(1512, 168), 2);
    add_background_object(create_rmcavebrick14_1442(1512, 200), 2);
    add_background_object(create_rmcavebrick13_1443(1600, 232), 2);
    add_background_object(create_rmcavebrick6_1436(1600, 200), 2);
    add_background_object(create_rmcavebrick8_1548(1576, 200), 2);
    add_background_object(create_rmcavebrick14_1442(1576, 232), 2);
    add_background_object(create_rmcavebrick13_1443(1664, 264), 2);
    add_background_object(create_rmcavebrick6_1436(1664, 232), 2);
    add_background_object(create_rmcavebrick8_1548(1640, 232), 2);
    add_background_object(create_rmcavebrick14_1442(1640, 264), 2);
    add_background_object(create_rmcavebrick13_1443(1728, 296), 2);
    add_background_object(create_rmcavebrick6_1436(1728, 264), 2);
    add_background_object(create_rmcavebrick8_1548(1704, 264), 2);
    add_background_object(create_rmcavebrick14_1442(1704, 296), 2);
    add_background_object(create_rmcavebrick12_1547(1792, 168), 2);
    add_background_object(create_rmcavebrick17_1558(1792, 40), 2);
    add_background_object(create_rmcavebrick10_1451(1728, 232), 2);
    add_background_object(create_rmcavebrick10_1451(1600, 168), 2);
    add_background_object(create_rmcavebrick10_1451(1664, 200), 2);
    add_background_object(create_rmcavebrick6_1436(1728, 200), 2);
    add_background_object(create_rmcavebrick6_1436(1728, 168), 2);
    add_background_object(create_rmcavebrick6_1436(1664, 168), 2);
    add_background_object(create_rmcavebrick13_1443(1792, 296), 2);
    add_background_object(create_rmcavebrick13_1443(1856, 296), 2);
    add_background_object(create_rmcavebrick13_1443(1792, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1856, 680), 2);
    add_background_object(create_rmcavebrick12_1547(1792, 552), 2);
    add_background_object(create_column6_1341(1512, 248), 2);
    add_background_object(create_column6_1341(1576, 280), 2);
    add_background_object(create_column6_1341(1640, 312), 2);
    add_background_object(create_rmcavebrick6_1436(768, 424), 2);
    add_background_object(create_rmcavebrick6_1436(832, 424), 2);
    add_background_object(create_rmcavebrick19_1559(768, 744), 2);
    add_background_object(create_rmcavebrick6_1436(640, 808), 2);
    add_background_object(create_rmcavebrick10_1451(704, 808), 2);
    add_background_object(create_rmcavebrick19_1559(704, 712), 2);
    add_background_object(create_rmcavebrick10_1451(640, 744), 2);
    add_background_object(create_rmcavebrick6_1436(640, 776), 2);
    add_background_object(create_rmcavebrick7_1446(640, 712), 2);
    add_background_object(create_rmcavebrick10_1451(832, 616), 2);
    add_background_object(create_rmcavebrick13_1443(832, 648), 2);
    add_background_object(create_rmcavebrick8_1548(872, 648), 2);
    add_background_object(create_rmcavebrick14_1442(872, 680), 2);
    add_background_object(create_rmcavebrick6_1436(832, 584), 2);
    add_background_object(create_rmcavebrick6_1436(768, 584), 2);
    add_background_object(create_rmcavebrick13_1443(768, 616), 2);
    add_background_object(create_rmcavebrick8_1548(808, 616), 2);
    add_background_object(create_rmcavebrick14_1442(808, 648), 2);
    add_background_object(create_rmcavebrick10_1451(704, 584), 2);
    add_background_object(create_rmcavebrick6_1436(640, 584), 2);
    add_background_object(create_rmcavebrick14_1442(552, 616), 2);
    add_background_object(create_rmcavebrick13_1443(704, 616), 2);
    add_background_object(create_rmcavebrick13_1443(640, 616), 2);
    add_background_object(create_column6_1341(808, 696), 2);
    add_background_object(create_column6_1341(872, 720), 2);
    add_background_object(create_rmcavebrick7_1446(576, 584), 2);
    add_background_object(create_rmcavebrick1_1449(552, 584), 2);
    add_background_object(create_rmcavebrick13_1443(576, 616), 2);
    add_background_object(create_rmbookshelf4_1551(144, 2568), 2);
    add_background_object(create_rmbookshelf6_1550(144, 2520), 2);
    add_background_object(create_rmbookshelf5_1552(416, 1816), 2);
    add_background_object(create_rmbookshelf4_1551(512, 1816), 2);
    add_background_object(create_rmbookshelf5_1552(640, 1864), 2);
    add_background_object(create_rmbookshelf4_1551(640, 1912), 2);
    add_background_object(create_rmbookshelf5_1552(640, 1816), 2);
    add_background_object(create_rmbookshelf6_1550(640, 1768), 2);
    add_background_object(create_cavesoil1_1310(1792, 440), 2);
    add_background_object(create_rmcavebrick2_1445(1792, 392), 2);
    add_background_object(create_cavesoil2_1338(1792, 424), 2);
    add_background_object(create_cavesoil11_1313(1752, 424), 2);
    add_background_object(create_cavesoil11_1313(1792, 504), 2);
    add_background_object(create_cavesoil1_1310(1920, 168), 2);
    add_background_object(create_cavesoil1_1310(1920, 40), 2);
    add_background_object(create_cavesoil1_1310(1920, -88), 2);
    add_background_object(create_cavesoil1_1310(2048, -88), 2);
    add_background_object(create_rmcavebrick13_1443(1920, 680), 2);
    add_background_object(create_rmcavebrick13_1443(1984, 680), 2);
    add_background_object(create_rmcavebrick12_1547(1920, 552), 2);
    add_background_object(create_cavesoil1_1310(1920, 440), 2);
    add_background_object(create_cavesoil2_1338(1920, 424), 2);
    add_background_object(create_cavesoil1_1310(2048, 440), 2);
    add_background_object(create_cavesoil2_1338(2048, 424), 2);
    add_background_object(create_rmcavebrick13_1443(2048, 680), 2);
    add_background_object(create_rmcavebrick13_1443(2112, 680), 2);
    add_background_object(create_cavesoil11_1313(1896, 536), 2);
    add_background_object(create_cavesoil11_1313(1992, 536), 2);
    add_background_object(create_cavesoil12_1350(1912, 160), 2);
    add_background_object(create_cavesoil12_1350(1912, 128), 2);
    add_background_object(create_cavesoil12_1350(1912, 96), 2);
    add_background_object(create_cavesoil12_1350(1912, 64), 2);
    add_background_object(create_cavesoil12_1350(1912, 32), 2);
    add_background_object(create_cavesoil12_1350(1912, 0), 2);
    add_background_object(create_rmcavebrick12_1547(1792, 840), 2);
    add_background_object(create_rmcavebrick7_1446(1792, 808), 2);
    add_background_object(create_rmcavebrick7_1446(1856, 808), 2);
    add_background_object(create_rmcavebrick16_1557(1792, 968), 2);
    add_background_object(create_rmcavebrick17_1558(1792, 1096), 2);
    add_background_object(create_rmcavebrick16_1557(1920, 968), 2);
    add_background_object(create_rmcavebrick17_1558(1920, 1096), 2);
    add_background_object(create_cavesoil11_1313(1912, 840), 2);
    add_background_object(create_cavesoil2_1338(1920, 808), 2);
    add_background_object(create_cavesoil11_1313(1824, 808), 2);
    add_background_object(create_rmcavebrick16_1557(2048, 968), 2);
    add_background_object(create_rmcavebrick17_1558(2048, 1096), 2);
    add_background_object(create_cavesoil11_1313(2048, 832), 2);
    add_background_object(create_cavesoil2_1338(2048, 808), 2);
    add_background_object(create_rmcavebrick1_1449(1064, 1448), 2);
    add_background_object(create_rmcavebrick2_1445(1024, 1448), 2);
    add_background_object(create_rmcavebrick2_1445(1216, 1448), 2);
    add_background_object(create_rmcavebrick2_1445(1280, 1416), 2);
    add_background_object(create_rmcavebrick1_1449(1256, 936), 2);
    add_background_object(create_rmcavebrick2_1445(768, 936), 2);
    add_background_object(create_rmcavebrick1_1449(40, 616), 2);
    add_background_object(create_rmcavebrick1_1449(104, 712), 2);
    add_background_object(create_rmcavebrick2_1445(640, 584), 2);
    add_background_object(create_cavesoil1_1310(2176, 944), 2);
    add_background_object(create_cavesoil1_1310(2176, 1072), 2);
    add_background_object(create_cavesoil11_1313(2128, 912), 2);
    add_background_object(create_cavesoil11_1313(2120, 1024), 2);
    add_background_object(create_rmcavebrick3_1440(2480, 904), 2);
    add_background_object(create_rmcavebrick3_1440(2544, 904), 2);
    add_background_object(create_rmcavebrick3_1440(2328, 856), 2);
    add_background_object(create_rmcavebrick3_1440(2392, 856), 2);
    add_background_object(create_cavesoil13_1456(2288, 816), 2);
    add_background_object(create_cavesoil2_1338(2176, 808), 2);
    add_background_object(create_cavesoil19_1460(2304, 808), 2);
    add_background_object(create_cavesoil13_1456(2288, 848), 2);
    add_background_object(create_cavesoil13_1456(2288, 880), 2);
    add_background_object(create_cavesoil13_1456(2288, 912), 2);
    add_background_object(create_rmcavebrick1_1449(2304, 856), 2);
    add_background_object(create_cavesoil13_1456(2288, 944), 2);
    add_background_object(create_cavesoil13_1456(2288, 976), 2);
    add_background_object(create_cavesoil13_1456(2288, 1008), 2);
    add_background_object(create_cavesoil13_1456(2288, 1040), 2);
    add_background_object(create_cavesoil13_1456(2288, 1072), 2);
    add_background_object(create_cavesoil13_1456(2288, 1104), 2);
    add_background_object(create_cavesoil13_1456(2288, 1136), 2);
    add_background_object(create_cavesoil13_1456(2288, 1168), 2);
    add_background_object(create_rmcavebrick2_1445(2456, 856), 2);
    add_background_object(create_rmcavebrick1_1449(2456, 904), 2);
    add_background_object(create_rmcavebrick2_1445(2608, 904), 2);
    add_background_object(create_rmcavebrick3_1440(2632, 952), 2);
    add_background_object(create_rmcavebrick3_1440(2696, 952), 2);
    add_background_object(create_rmcavebrick1_1449(2608, 952), 2);
    add_background_object(create_rmcavebrick3_1440(2760, 952), 2);
    add_background_object(create_rmcavebrick3_1440(2824, 952), 2);
    add_background_object(create_rmcavebrick3_1440(2888, 952), 2);
    add_background_object(create_rmscaleypillar_1435(2344, 968), 2);
    add_background_object(create_rmscaleypillar_1435(2344, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(2344, 1160), 2);
    add_background_object(create_rmscaleypillar_1435(2496, 1112), 2);
    add_background_object(create_rmscaleypillar_1435(2648, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(2648, 1160), 2);
    add_background_object(create_rmcavebrick15_1481(2176, 680), 2);
    add_background_object(create_rmcavebrick9_1549(2176, 648), 2);
    add_background_object(create_cavesoil18_1305(2176, 576), 2);
    add_background_object(create_cavesoil11_1313(2072, 544), 2);
    add_background_object(create_cavesoil27_1304(2304, 520), 2);
    add_background_object(create_cavesoil18_1305(2304, 512), 2);
    add_background_object(create_cavesoil1_1310(2304, 392), 2);
    add_background_object(create_cavesoil1_1310(2176, -88), 2);
    add_background_object(create_cavesoil1_1310(2176, 328), 2);
    add_background_object(create_cavesoil1_1310(2304, 200), 2);
    add_background_object(create_cavesoil1_1310(2176, 200), 2);
    add_background_object(create_cavesoil11_1313(2240, 304), 2);
    add_background_object(create_cavesoil13_1456(2032, 40), 2);
    add_background_object(create_cavesoil13_1456(2032, 72), 2);
    add_background_object(create_cavesoil13_1456(2032, 104), 2);
    add_background_object(create_cavesoil13_1456(2032, 136), 2);
    add_background_object(create_cavesoil13_1456(2032, 168), 2);
    add_background_object(create_cavesoil13_1456(2032, 200), 2);
    add_background_object(create_cavesoil13_1456(2032, 232), 2);
    add_background_object(create_cavesoil13_1456(2032, 264), 2);
    add_background_object(create_cavesoil3_1339(1920, 272), 2);
    add_background_object(create_cavesoil20_1464(2048, 280), 2);
    add_background_object(create_cavesoil11_1313(1840, 168), 2);
    add_background_object(create_cavesoil3_1339(2176, 24), 2);
    add_background_object(create_cavesoil3_1339(2048, 24), 2);
    add_background_object(create_cavesoil12_1350(2160, 200), 2);
    add_background_object(create_cavesoil12_1350(2160, 232), 2);
    add_background_object(create_cavesoil12_1350(2160, 264), 2);
    add_background_object(create_cavesoil12_1350(2160, 296), 2);
    add_background_object(create_cavesoil12_1350(2160, 328), 2);
    add_background_object(create_cavesoil12_1350(2160, 360), 2);
    add_background_object(create_cavesoil12_1350(2160, 392), 2);
    add_background_object(create_cavesoil2_1338(2176, 192), 2);
    add_background_object(create_cavesoil19_1460(2160, 192), 2);
    add_background_object(create_cavesoil1_1310(2304, -88), 2);
    add_background_object(create_cavesoil3_1339(2304, 24), 2);
    add_background_object(create_cavesoil1_1310(2432, 392), 2);
    add_background_object(create_cavesoil3_1339(2432, 504), 2);
    add_background_object(create_cavesoil1_1310(2560, 392), 2);
    add_background_object(create_cavesoil3_1339(2560, 504), 2);
    add_background_object(create_cavesoil1_1310(2688, 392), 2);
    add_background_object(create_cavesoil3_1339(2688, 504), 2);
    add_background_object(create_cavesoil1_1310(2816, 392), 2);
    add_background_object(create_cavesoil3_1339(2816, 504), 2);
    add_background_object(create_cavesoil1_1310(2944, 392), 2);
    add_background_object(create_cavesoil3_1339(2944, 504), 2);
    add_background_object(create_cavesoil1_1310(3072, 392), 2);
    add_background_object(create_cavesoil3_1339(3072, 504), 2);
    add_background_object(create_cavesoil1_1310(2432, 264), 2);
    add_background_object(create_cavesoil1_1310(2560, 264), 2);
    add_background_object(create_cavesoil1_1310(2688, 264), 2);
    add_background_object(create_cavesoil1_1310(2816, 264), 2);
    add_background_object(create_cavesoil1_1310(2944, 264), 2);
    add_background_object(create_cavesoil1_1310(3072, 264), 2);
    add_background_object(create_cavesoil1_1310(2432, -88), 2);
    add_background_object(create_cavesoil3_1339(2432, 24), 2);
    add_background_object(create_cavesoil2_1338(2560, 256), 2);
    add_background_object(create_cavesoil1_1310(2560, -88), 2);
    add_background_object(create_cavesoil3_1339(2560, 24), 2);
    add_background_object(create_cavesoil1_1310(2688, -88), 2);
    add_background_object(create_cavesoil3_1339(2688, 24), 2);
    add_background_object(create_cavesoil2_1338(2688, 256), 2);
    add_background_object(create_cavesoil2_1338(2816, 256), 2);
    add_background_object(create_cavesoil1_1310(2816, -88), 2);
    add_background_object(create_cavesoil3_1339(2816, 24), 2);
    add_background_object(create_cavesoil13_1456(2416, 208), 2);
    add_background_object(create_cavesoil19_1460(2432, 192), 2);
    add_background_object(create_cavesoil2_1338(2304, 192), 2);
    add_background_object(create_cavesoil13_1456(2416, 240), 2);
    add_background_object(create_cavesoil2_1338(2432, 256), 2);
    add_background_object(create_rmcavebrick3_1440(2952, 952), 2);
    add_background_object(create_rmcavebrick3_1440(3016, 952), 2);
    add_background_object(create_rmcavebrick3_1440(3080, 952), 2);
    add_background_object(create_rmscaleypillar_1435(3096, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(3096, 1160), 2);
    add_background_object(create_rmcavebrick8_1548(3184, 1016), 2);
    add_background_object(create_rmcavebrick14_1442(3184, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(3208, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(3208, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3400, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3400, 1048), 2);
    add_background_object(create_rmcavebrick10_1451(3464, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(3528, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3464, 952), 2);
    add_background_object(create_rmcavebrick7_1446(3528, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3464, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(3528, 1048), 2);
    add_background_object(create_rmcavebrick7_1446(3592, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3592, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(3592, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(3656, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3656, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3656, 1048), 2);
    add_background_object(create_rmcavebrick10_1451(3720, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3720, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3720, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1240), 2);
    add_background_object(create_rmcavebrick6_1436(3784, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3784, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3784, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3784, 1048), 2);
    add_background_object(create_rmcavebrick9_1549(3848, 1016), 2);
    add_background_object(create_rmcavebrick15_1481(3848, 1048), 2);
    add_background_object(create_rmcavebrick9_1549(3848, 984), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(7560, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7560, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(7560, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7624, 952), 2);
    add_background_object(create_rmcavebrick10_1451(7624, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7624, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7688, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7688, 1016), 2);
    add_background_object(create_rmcavebrick13_1443(7688, 1048), 2);
    add_background_object(create_rmcavebrick10_1451(7752, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7752, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7944, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7944, 1016), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1240), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 792), 2);
    add_background_object(create_loop1_1466(7688, 856), 2);
    add_background_object(create_rmcavebrick9_1549(8008, 920), 2);
    add_background_object(create_rmcavebrick9_1549(8008, 888), 2);
    add_background_object(create_rmcavebrick9_1549(8008, 856), 2);
    add_background_object(create_rmcavebrick10_1451(7816, 952), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 888), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 920), 2);
    add_background_object(create_rmcavebrick10_1451(7816, 856), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 824), 2);
    add_background_object(create_loop2_1469(7816, 808), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 792), 2);
    add_background_object(create_rmcavebrick15_1481(8032, 856), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 824), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 760), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 760), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 760), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 728), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 728), 2);
    add_background_object(create_rmcavebrick6_1436(7968, 696), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 696), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 696), 2);
    add_background_object(create_rmcavebrick6_1436(7968, 600), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 600), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 600), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 568), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 568), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 568), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 536), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 536), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 536), 2);
    add_background_object(create_rmcavebrick10_1451(7840, 728), 2);
    add_background_object(create_cavesoil1_1310(3200, 392), 2);
    add_background_object(create_cavesoil3_1339(3200, 504), 2);
    add_background_object(create_cavesoil1_1310(3328, 392), 2);
    add_background_object(create_cavesoil1_1310(3200, 264), 2);
    add_background_object(create_cavesoil1_1310(3328, 264), 2);
    add_background_object(create_cavesoil1_1310(3456, 328), 2);
    add_background_object(create_cavesoil1_1310(3456, 200), 2);
    add_background_object(create_cavesoil1_1310(3584, 328), 2);
    add_background_object(create_cavesoil1_1310(3712, 328), 2);
    add_background_object(create_cavesoil3_1339(3712, 440), 2);
    add_background_object(create_cavesoil1_1310(3584, 200), 2);
    add_background_object(create_cavesoil1_1310(3712, 200), 2);
    add_background_object(create_cavesoil1_1310(3840, 328), 2);
    add_background_object(create_cavesoil3_1339(3840, 440), 2);
    add_background_object(create_cavesoil1_1310(3840, 200), 2);
    add_background_object(create_cavesoil1_1310(3968, 328), 2);
    add_background_object(create_cavesoil3_1339(3968, 440), 2);
    add_background_object(create_cavesoil1_1310(4096, 328), 2);
    add_background_object(create_cavesoil3_1339(4096, 440), 2);
    add_background_object(create_cavesoil1_1310(3968, 200), 2);
    add_background_object(create_cavesoil1_1310(4096, 200), 2);
    add_background_object(create_cavesoil1_1310(4224, 328), 2);
    add_background_object(create_cavesoil3_1339(4224, 440), 2);
    add_background_object(create_cavesoil1_1310(4352, 328), 2);
    add_background_object(create_cavesoil3_1339(4352, 440), 2);
    add_background_object(create_cavesoil1_1310(4224, 200), 2);
    add_background_object(create_cavesoil1_1310(4352, 200), 2);
    add_background_object(create_cavesoil1_1310(4480, 328), 2);
    add_background_object(create_cavesoil3_1339(4480, 440), 2);
    add_background_object(create_cavesoil1_1310(4608, 328), 2);
    add_background_object(create_cavesoil3_1339(4608, 440), 2);
    add_background_object(create_cavesoil1_1310(4480, 200), 2);
    add_background_object(create_cavesoil1_1310(4608, 200), 2);
    add_background_object(create_cavesoil1_1310(4736, 328), 2);
    add_background_object(create_cavesoil3_1339(4736, 440), 2);
    add_background_object(create_cavesoil1_1310(4864, 328), 2);
    add_background_object(create_cavesoil3_1339(4864, 440), 2);
    add_background_object(create_cavesoil1_1310(4736, 200), 2);
    add_background_object(create_cavesoil1_1310(4864, 200), 2);
    add_background_object(create_cavesoil1_1310(4992, 328), 2);
    add_background_object(create_cavesoil3_1339(4992, 440), 2);
    add_background_object(create_cavesoil1_1310(4992, 200), 2);
    add_background_object(create_cavesoil1_1310(5120, 328), 2);
    add_background_object(create_cavesoil3_1339(5120, 440), 2);
    add_background_object(create_cavesoil1_1310(5248, 328), 2);
    add_background_object(create_cavesoil3_1339(5248, 440), 2);
    add_background_object(create_cavesoil1_1310(5120, 200), 2);
    add_background_object(create_cavesoil1_1310(5248, 200), 2);
    add_background_object(create_cavesoil1_1310(5376, 328), 2);
    add_background_object(create_cavesoil3_1339(5376, 440), 2);
    add_background_object(create_cavesoil1_1310(5376, 200), 2);
    add_background_object(create_cavesoil1_1310(5504, 328), 2);
    add_background_object(create_cavesoil3_1339(5504, 440), 2);
    add_background_object(create_cavesoil1_1310(5632, 328), 2);
    add_background_object(create_cavesoil3_1339(5632, 440), 2);
    add_background_object(create_cavesoil1_1310(5504, 200), 2);
    add_background_object(create_cavesoil1_1310(5632, 200), 2);
    add_background_object(create_cavesoil1_1310(5760, 328), 2);
    add_background_object(create_cavesoil3_1339(5760, 440), 2);
    add_background_object(create_cavesoil1_1310(5888, 328), 2);
    add_background_object(create_cavesoil3_1339(5888, 440), 2);
    add_background_object(create_cavesoil1_1310(5760, 200), 2);
    add_background_object(create_cavesoil1_1310(5888, 200), 2);
    add_background_object(create_cavesoil1_1310(7552, 328), 2);
    add_background_object(create_cavesoil3_1339(7552, 440), 2);
    add_background_object(create_cavesoil1_1310(7680, 328), 2);
    add_background_object(create_cavesoil3_1339(7680, 440), 2);
    add_background_object(create_cavesoil1_1310(7552, 200), 2);
    add_background_object(create_cavesoil1_1310(7680, 200), 2);
    add_background_object(create_cavesoil1_1310(7808, 328), 2);
    add_background_object(create_cavesoil3_1339(7808, 440), 2);
    add_background_object(create_cavesoil1_1310(7808, 200), 2);
    add_background_object(create_cavesoil1_1310(7936, 328), 2);
    add_background_object(create_cavesoil1_1310(7936, 200), 2);
    add_background_object(create_cavesoil1_1310(8192, 328), 2);
    add_background_object(create_cavesoil1_1310(8320, 328), 2);
    add_background_object(create_cavesoil1_1310(8192, 200), 2);
    add_background_object(create_cavesoil1_1310(8320, 200), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 504), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 504), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 504), 2);
    add_background_object(create_rmcavebrick6_1436(7840, 472), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 472), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 472), 2);
    add_background_object(create_cavesoil11_1313(7808, 360), 2);
    add_background_object(create_rmcavebrick7_1446(3208, 952), 2);
    add_background_object(create_rmcavebrick10_1451(3208, 984), 2);
    add_background_object(create_rmcavebrick10_1451(3592, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3464, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3528, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3656, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3720, 984), 2);
    add_background_object(create_rmcavebrick3_1440(3144, 952), 2);
    add_background_object(create_rmscaleypillar_1435(3096, 1256), 2);
    add_background_object(create_rmscaleypillar_1435(2872, 1256), 2);
    add_background_object(create_rmscaleypillar_1435(2496, 1208), 2);
    add_background_object(create_rmscaleypillar_1435(2648, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(7968, 664), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 664), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 664), 2);
    add_background_object(create_rmcavebrick6_1436(7968, 632), 2);
    add_background_object(create_rmcavebrick9_1549(8032, 632), 2);
    add_background_object(create_rmcavebrick8_1548(7816, 632), 2);
    add_background_object(create_rmcavebrick6_1436(3336, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3272, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3272, 1048), 2);
    add_background_object(create_rmcavebrick10_1451(3272, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(3336, 952), 2);
    add_background_object(create_rmcavebrick13_1443(3336, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(3272, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3336, 984), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1240), 2);
    add_background_object(create_rmcavebrick7_1446(4040, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4104, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4168, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4552, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4232, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4296, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4872, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4936, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5000, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5064, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5128, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5192, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5640, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5704, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5384, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5576, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5448, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5512, 952), 2);
    add_background_object(create_rmcavebrick14_1442(3888, 1048), 2);
    add_background_object(create_rmcavebrick14_1442(4848, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(3912, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(3976, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4040, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4104, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4168, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4552, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4680, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4744, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4232, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4424, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4488, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4296, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4360, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4616, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4872, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(4936, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5000, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5064, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5128, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5192, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5640, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5704, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5256, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5320, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5384, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5576, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5448, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5512, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(3912, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(3976, 984), 2);
    add_background_object(create_rmcavebrick6_1436(3976, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4040, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4104, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4104, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4168, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4552, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4552, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4744, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4744, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4232, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4424, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4424, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4488, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4616, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4616, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4872, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(4936, 984), 2);
    add_background_object(create_rmcavebrick6_1436(4936, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5000, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5064, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5064, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5128, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5192, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5192, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5640, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5704, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5704, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5256, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5320, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5320, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5384, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5576, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5576, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5448, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5448, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5512, 984), 2);
    add_background_object(create_rmcavebrick15_1481(4808, 1048), 2);
    add_background_object(create_rmcavebrick15_1481(5768, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1048), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1144), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1240), 2);
    add_background_object(create_rmcavebrick7_1446(6600, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6664, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6216, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6536, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6920, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7176, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7240, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7496, 952), 2);
    add_background_object(create_rmcavebrick14_1442(5808, 1048), 2);
    add_background_object(create_rmcavebrick14_1442(6768, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5832, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5896, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(5960, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6024, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6088, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6472, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6600, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6664, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6152, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6344, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6408, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6216, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6280, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6536, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6792, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6856, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6920, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(6984, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7048, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7112, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7176, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7240, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7304, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7496, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7368, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7432, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(5832, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5896, 984), 2);
    add_background_object(create_rmcavebrick6_1436(5896, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(5960, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6024, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6024, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6088, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6472, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6472, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6600, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6664, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6664, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6152, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6344, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6344, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6408, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6216, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6216, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6280, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6280, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6536, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6536, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6792, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6856, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6856, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(6920, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6984, 984), 2);
    add_background_object(create_rmcavebrick6_1436(6984, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7048, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7112, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7112, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7176, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7240, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7240, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7304, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7496, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7496, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7368, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7368, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7432, 984), 2);
    add_background_object(create_rmcavebrick15_1481(6728, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7560, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7624, 1048), 2);
    add_background_object(create_rmcavebrick7_1446(8008, 952), 2);
    add_background_object(create_rmcavebrick13_1443(8008, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(8008, 984), 2);
    add_background_object(create_rmcavebrick6_1436(8008, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(8200, 984), 2);
    add_background_object(create_rmcavebrick6_1436(8200, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(8200, 952), 2);
    add_background_object(create_rmcavebrick7_1446(8136, 952), 2);
    add_background_object(create_rmcavebrick13_1443(8136, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(8136, 984), 2);
    add_background_object(create_rmcavebrick6_1436(8136, 1016), 2);
    add_background_object(create_rmcavebrick13_1443(8200, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(8328, 984), 2);
    add_background_object(create_rmcavebrick6_1436(8328, 1016), 2);
    add_background_object(create_rmcavebrick7_1446(8328, 952), 2);
    add_background_object(create_rmcavebrick7_1446(8264, 952), 2);
    add_background_object(create_rmcavebrick13_1443(8264, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(8264, 984), 2);
    add_background_object(create_rmcavebrick6_1436(8264, 1016), 2);
    add_background_object(create_rmcavebrick13_1443(8328, 1048), 2);
    add_background_object(create_cavesoil1_1310(6016, 328), 2);
    add_background_object(create_cavesoil3_1339(6016, 440), 2);
    add_background_object(create_cavesoil1_1310(6144, 328), 2);
    add_background_object(create_cavesoil3_1339(6144, 440), 2);
    add_background_object(create_cavesoil1_1310(6016, 200), 2);
    add_background_object(create_cavesoil1_1310(6144, 200), 2);
    add_background_object(create_cavesoil1_1310(6272, 328), 2);
    add_background_object(create_cavesoil3_1339(6272, 440), 2);
    add_background_object(create_cavesoil1_1310(6400, 328), 2);
    add_background_object(create_cavesoil3_1339(6400, 440), 2);
    add_background_object(create_cavesoil1_1310(6272, 200), 2);
    add_background_object(create_cavesoil1_1310(6400, 200), 2);
    add_background_object(create_cavesoil1_1310(6528, 328), 2);
    add_background_object(create_cavesoil3_1339(6528, 440), 2);
    add_background_object(create_cavesoil1_1310(6656, 328), 2);
    add_background_object(create_cavesoil3_1339(6656, 440), 2);
    add_background_object(create_cavesoil1_1310(6528, 200), 2);
    add_background_object(create_cavesoil1_1310(6656, 200), 2);
    add_background_object(create_cavesoil1_1310(6784, 328), 2);
    add_background_object(create_cavesoil3_1339(6784, 440), 2);
    add_background_object(create_cavesoil1_1310(6912, 328), 2);
    add_background_object(create_cavesoil3_1339(6912, 440), 2);
    add_background_object(create_cavesoil1_1310(6784, 200), 2);
    add_background_object(create_cavesoil1_1310(6912, 200), 2);
    add_background_object(create_cavesoil1_1310(7040, 328), 2);
    add_background_object(create_cavesoil3_1339(7040, 440), 2);
    add_background_object(create_cavesoil1_1310(7040, 200), 2);
    add_background_object(create_cavesoil1_1310(7168, 328), 2);
    add_background_object(create_cavesoil3_1339(7168, 440), 2);
    add_background_object(create_cavesoil1_1310(7168, 200), 2);
    add_background_object(create_cavesoil1_1310(7296, 328), 2);
    add_background_object(create_cavesoil3_1339(7296, 440), 2);
    add_background_object(create_cavesoil1_1310(7296, 200), 2);
    add_background_object(create_cavesoil1_1310(7424, 328), 2);
    add_background_object(create_cavesoil3_1339(7424, 440), 2);
    add_background_object(create_cavesoil1_1310(7424, 200), 2);
    add_background_object(create_rmpurplecrystal1_1544(3896, 896), 2);
    add_background_object(create_rmpurplecrystal2_1545(3952, 912), 2);
    add_background_object(create_rmcavebrick7_1446(3912, 952), 2);
    add_background_object(create_rmcavebrick7_1446(3976, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(4392, 904), 2);
    add_background_object(create_rmpurplecrystal2_1545(4448, 896), 2);
    add_background_object(create_rmcavebrick7_1446(4360, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4488, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4424, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(4696, 920), 2);
    add_background_object(create_rmcavebrick7_1446(4616, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4744, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4680, 952), 2);
    add_background_object(create_rmpurplecrystal2_1545(5976, 896), 2);
    add_background_object(create_rmpurplecrystal1_1544(5888, 904), 2);
    add_background_object(create_rmcavebrick7_1446(5896, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5832, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(6024, 920), 2);
    add_background_object(create_rmcavebrick7_1446(5960, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6024, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6088, 952), 2);
    add_background_object(create_rmpurplecrystal2_1545(6344, 904), 2);
    add_background_object(create_rmpurplecrystal2_1545(6424, 920), 2);
    add_background_object(create_rmcavebrick7_1446(6280, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6408, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6344, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6472, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(6152, 896), 2);
    add_background_object(create_rmcavebrick7_1446(6152, 952), 2);
    add_background_object(create_rmpurplecrystal2_1545(6856, 920), 2);
    add_background_object(create_rmcavebrick7_1446(6856, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6792, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(5296, 912), 2);
    add_background_object(create_rmcavebrick7_1446(5256, 952), 2);
    add_background_object(create_rmcavebrick7_1446(5320, 952), 2);
    add_background_object(create_rmpurplecrystal2_1545(7048, 912), 2);
    add_background_object(create_rmcavebrick7_1446(7112, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7048, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6984, 952), 2);
    add_background_object(create_rmpurplecrystal1_1544(7368, 912), 2);
    add_background_object(create_rmcavebrick7_1446(7432, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7368, 952), 2);
    add_background_object(create_rmcavebrick7_1446(7304, 952), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(3352, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(3544, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(3736, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(5464, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(4888, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(5080, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(5656, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(5272, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(6808, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(7000, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(7192, 1528), 2);
    add_background_object(create_rmcavebrick12_1547(7840, 600), 2);
    add_background_object(create_rmcavebrick12_1547(7904, 728), 2);
    add_background_object(create_rmcavebrick6_1436(7880, 824), 2);
    add_background_object(create_rmcavebrick6_1436(7944, 824), 2);
    add_background_object(create_rmcavebrick13_1443(7944, 1048), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 1016), 2);
    add_background_object(create_rmcavebrick6_1436(7880, 984), 2);
    add_background_object(create_rmcavebrick6_1436(7880, 1016), 2);
    add_background_object(create_cavesoil11_1313(7928, 368), 2);
    add_background_object(create_cavesoil15_1316(8192, 712), 2);
    add_background_object(create_cavesoil1_1310(8192, 584), 2);
    add_background_object(create_cavesoil12_1350(8176, 648), 2);
    add_background_object(create_cavesoil12_1350(8176, 680), 2);
    add_background_object(create_cavesoil14_1314(8192, 696), 2);
    add_background_object(create_cavesoil1_1310(8320, 584), 2);
    add_background_object(create_cavesoil1_1310(8320, 456), 2);
    add_background_object(create_cavesoil15_1316(8448, 768), 2);
    add_background_object(create_cavesoil1_1310(8448, 576), 2);
    add_background_object(create_cavesoil1_1310(8448, 328), 2);
    add_background_object(create_cavesoil1_1310(8448, 456), 2);
    add_background_object(create_cavesoil1_1310(8448, 640), 2);
    add_background_object(create_cavesoil11_1313(8440, 584), 2);
    add_background_object(create_cavesoil14_1314(8448, 760), 2);
    add_background_object(create_cavesoil1_1310(8576, 328), 2);
    add_background_object(create_cavesoil1_1310(8576, 456), 2);
    add_background_object(create_cavesoil1_1310(8576, 584), 2);
    add_background_object(create_cavesoil1_1310(8576, 712), 2);
    add_background_object(create_cavesoil3_1339(8576, 816), 2);
    add_background_object(create_cavesoil1_1310(8704, 328), 2);
    add_background_object(create_cavesoil1_1310(8704, 456), 2);
    add_background_object(create_cavesoil1_1310(8704, 584), 2);
    add_background_object(create_cavesoil1_1310(8704, 712), 2);
    add_background_object(create_cavesoil3_1339(8704, 816), 2);
    add_background_object(create_cavesoil1_1310(8448, 200), 2);
    add_background_object(create_cavesoil1_1310(8576, 200), 2);
    add_background_object(create_cavesoil1_1310(8704, 200), 2);
    add_background_object(create_cavesoil1_1310(3456, 72), 2);
    add_background_object(create_cavesoil1_1310(3584, 72), 2);
    add_background_object(create_cavesoil1_1310(3712, 72), 2);
    add_background_object(create_cavesoil1_1310(3840, 72), 2);
    add_background_object(create_cavesoil1_1310(3968, 72), 2);
    add_background_object(create_cavesoil1_1310(4096, 72), 2);
    add_background_object(create_cavesoil1_1310(4224, 72), 2);
    add_background_object(create_cavesoil1_1310(4352, 72), 2);
    add_background_object(create_cavesoil1_1310(4480, 72), 2);
    add_background_object(create_cavesoil1_1310(4608, 72), 2);
    add_background_object(create_cavesoil1_1310(4736, 72), 2);
    add_background_object(create_cavesoil1_1310(4864, 72), 2);
    add_background_object(create_cavesoil1_1310(4992, 72), 2);
    add_background_object(create_cavesoil1_1310(5120, 72), 2);
    add_background_object(create_cavesoil1_1310(5248, 72), 2);
    add_background_object(create_cavesoil1_1310(5376, 72), 2);
    add_background_object(create_cavesoil1_1310(5504, 72), 2);
    add_background_object(create_cavesoil1_1310(5632, 72), 2);
    add_background_object(create_cavesoil1_1310(5760, 72), 2);
    add_background_object(create_cavesoil1_1310(5888, 72), 2);
    add_background_object(create_cavesoil1_1310(7552, 72), 2);
    add_background_object(create_cavesoil1_1310(7680, 72), 2);
    add_background_object(create_cavesoil1_1310(7808, 72), 2);
    add_background_object(create_cavesoil1_1310(7936, 72), 2);
    add_background_object(create_cavesoil1_1310(8192, 72), 2);
    add_background_object(create_cavesoil1_1310(8320, 72), 2);
    add_background_object(create_cavesoil1_1310(6016, 72), 2);
    add_background_object(create_cavesoil1_1310(6144, 72), 2);
    add_background_object(create_cavesoil1_1310(6272, 72), 2);
    add_background_object(create_cavesoil1_1310(6400, 72), 2);
    add_background_object(create_cavesoil1_1310(6528, 72), 2);
    add_background_object(create_cavesoil1_1310(6656, 72), 2);
    add_background_object(create_cavesoil1_1310(6784, 72), 2);
    add_background_object(create_cavesoil1_1310(6912, 72), 2);
    add_background_object(create_cavesoil1_1310(7040, 72), 2);
    add_background_object(create_cavesoil1_1310(7168, 72), 2);
    add_background_object(create_cavesoil1_1310(7296, 72), 2);
    add_background_object(create_cavesoil1_1310(7424, 72), 2);
    add_background_object(create_cavesoil1_1310(8448, 72), 2);
    add_background_object(create_cavesoil1_1310(8576, 72), 2);
    add_background_object(create_cavesoil1_1310(8704, 72), 2);
    add_background_object(create_cavesoil1_1310(3456, -56), 2);
    add_background_object(create_cavesoil1_1310(3584, -56), 2);
    add_background_object(create_cavesoil1_1310(3712, -56), 2);
    add_background_object(create_cavesoil1_1310(3840, -56), 2);
    add_background_object(create_cavesoil1_1310(3968, -56), 2);
    add_background_object(create_cavesoil1_1310(4096, -56), 2);
    add_background_object(create_cavesoil1_1310(4224, -56), 2);
    add_background_object(create_cavesoil1_1310(4352, -56), 2);
    add_background_object(create_cavesoil1_1310(4480, -56), 2);
    add_background_object(create_cavesoil1_1310(4608, -56), 2);
    add_background_object(create_cavesoil1_1310(4736, -56), 2);
    add_background_object(create_cavesoil1_1310(4864, -56), 2);
    add_background_object(create_cavesoil1_1310(4992, -56), 2);
    add_background_object(create_cavesoil1_1310(5120, -56), 2);
    add_background_object(create_cavesoil1_1310(5248, -56), 2);
    add_background_object(create_cavesoil1_1310(5376, -56), 2);
    add_background_object(create_cavesoil1_1310(5504, -56), 2);
    add_background_object(create_cavesoil1_1310(5632, -56), 2);
    add_background_object(create_cavesoil1_1310(5760, -56), 2);
    add_background_object(create_cavesoil1_1310(5888, -56), 2);
    add_background_object(create_cavesoil1_1310(7552, -56), 2);
    add_background_object(create_cavesoil1_1310(7680, -56), 2);
    add_background_object(create_cavesoil1_1310(7808, -56), 2);
    add_background_object(create_cavesoil1_1310(7936, -56), 2);
    add_background_object(create_cavesoil1_1310(8192, -56), 2);
    add_background_object(create_cavesoil1_1310(8320, -56), 2);
    add_background_object(create_cavesoil1_1310(6016, -56), 2);
    add_background_object(create_cavesoil1_1310(6144, -56), 2);
    add_background_object(create_cavesoil1_1310(6272, -56), 2);
    add_background_object(create_cavesoil1_1310(6400, -56), 2);
    add_background_object(create_cavesoil1_1310(6528, -56), 2);
    add_background_object(create_cavesoil1_1310(6656, -56), 2);
    add_background_object(create_cavesoil1_1310(6784, -56), 2);
    add_background_object(create_cavesoil1_1310(6912, -56), 2);
    add_background_object(create_cavesoil1_1310(7040, -56), 2);
    add_background_object(create_cavesoil1_1310(7168, -56), 2);
    add_background_object(create_cavesoil1_1310(7296, -56), 2);
    add_background_object(create_cavesoil1_1310(7424, -56), 2);
    add_background_object(create_cavesoil1_1310(8448, -56), 2);
    add_background_object(create_cavesoil1_1310(8576, -56), 2);
    add_background_object(create_cavesoil1_1310(8704, -56), 2);
    add_background_object(create_rmcavebrick15_1481(8392, 1048), 2);
    add_background_object(create_rmcavebrick9_1549(8392, 1016), 2);
    add_background_object(create_rmcavebrick9_1549(8392, 984), 2);
    add_background_object(create_rmcavebrick9_1549(8392, 952), 2);
    add_background_object(create_rmcavebrick2_1445(8392, 952), 2);
    add_background_object(create_cavesoil1_1310(8304, 1064), 2);
    add_background_object(create_cavesoil1_1310(8432, 1000), 2);
    add_background_object(create_cavesoil1_1310(8432, 1136), 2);
    add_background_object(create_cavesoil12_1350(8416, 1000), 2);
    add_background_object(create_cavesoil12_1350(8416, 1032), 2);
    add_background_object(create_cavesoil19_1460(8416, 992), 2);
    add_background_object(create_cavesoil2_1338(8432, 992), 2);
    add_background_object(create_cavesoil12_1350(8288, 1168), 2);
    add_background_object(create_cavesoil12_1350(8288, 1136), 2);
    add_background_object(create_cavesoil12_1350(8288, 1104), 2);
    add_background_object(create_cavesoil12_1350(8288, 1072), 2);
    add_background_object(create_cavesoil2_1338(8304, 1056), 2);
    add_background_object(create_cavesoil19_1460(8288, 1056), 2);
    add_background_object(create_cavesoil1_1310(8560, 1008), 2);
    add_background_object(create_cavesoil1_1310(8560, 1136), 2);
    add_background_object(create_cavesoil11_1313(8472, 1032), 2);
    add_background_object(create_cavesoil1_1310(8304, 1136), 2);
    add_background_object(create_cavesoil12_1350(8288, 1232), 2);
    add_background_object(create_cavesoil12_1350(8288, 1200), 2);
    add_background_object(create_cavesoil11_1313(8384, 1088), 2);
    add_background_object(create_cavesoil1_1310(8432, 1264), 2);
    add_background_object(create_cavesoil12_1350(8288, 1296), 2);
    add_background_object(create_cavesoil12_1350(8288, 1264), 2);
    add_background_object(create_cavesoil1_1310(8560, 1264), 2);
    add_background_object(create_cavesoil1_1310(8304, 1264), 2);
    add_background_object(create_cavesoil12_1350(8288, 1328), 2);
    add_background_object(create_cavesoil12_1350(8288, 1360), 2);
    add_background_object(create_cavesoil2_1338(8560, 992), 2);
    add_background_object(create_cavesoil1_1310(8688, 1008), 2);
    add_background_object(create_cavesoil1_1310(8688, 1136), 2);
    add_background_object(create_cavesoil1_1310(8688, 1264), 2);
    add_background_object(create_cavesoil2_1338(8688, 992), 2);
    add_background_object(create_cavesoil1_1310(8832, 328), 2);
    add_background_object(create_cavesoil1_1310(8832, 456), 2);
    add_background_object(create_cavesoil1_1310(8832, 584), 2);
    add_background_object(create_cavesoil1_1310(8832, 712), 2);
    add_background_object(create_cavesoil3_1339(8832, 816), 2);
    add_background_object(create_cavesoil1_1310(8960, 328), 2);
    add_background_object(create_cavesoil1_1310(8960, 456), 2);
    add_background_object(create_cavesoil1_1310(8960, 584), 2);
    add_background_object(create_cavesoil1_1310(8960, 712), 2);
    add_background_object(create_cavesoil3_1339(8960, 816), 2);
    add_background_object(create_cavesoil1_1310(8832, 200), 2);
    add_background_object(create_cavesoil1_1310(8960, 200), 2);
    add_background_object(create_cavesoil1_1310(8832, 72), 2);
    add_background_object(create_cavesoil1_1310(8960, 72), 2);
    add_background_object(create_cavesoil1_1310(8832, -56), 2);
    add_background_object(create_cavesoil1_1310(8960, -56), 2);
    add_background_object(create_cavesoil1_1310(8816, 1008), 2);
    add_background_object(create_cavesoil1_1310(8816, 1136), 2);
    add_background_object(create_cavesoil1_1310(8816, 1264), 2);
    add_background_object(create_cavesoil2_1338(8816, 992), 2);
    add_background_object(create_cavesoil1_1310(8944, 1008), 2);
    add_background_object(create_cavesoil1_1310(8944, 1136), 2);
    add_background_object(create_cavesoil1_1310(8944, 1264), 2);
    add_background_object(create_cavesoil2_1338(8944, 992), 2);
    add_background_object(create_cavesoil1_1310(9088, 328), 2);
    add_background_object(create_cavesoil1_1310(9088, 456), 2);
    add_background_object(create_cavesoil1_1310(9088, 584), 2);
    add_background_object(create_cavesoil1_1310(9088, 712), 2);
    add_background_object(create_cavesoil3_1339(9088, 816), 2);
    add_background_object(create_cavesoil1_1310(9216, 328), 2);
    add_background_object(create_cavesoil1_1310(9216, 456), 2);
    add_background_object(create_cavesoil1_1310(9216, 584), 2);
    add_background_object(create_cavesoil1_1310(9216, 712), 2);
    add_background_object(create_cavesoil3_1339(9216, 816), 2);
    add_background_object(create_cavesoil1_1310(9088, 200), 2);
    add_background_object(create_cavesoil1_1310(9216, 200), 2);
    add_background_object(create_cavesoil1_1310(9088, 72), 2);
    add_background_object(create_cavesoil1_1310(9216, 72), 2);
    add_background_object(create_cavesoil1_1310(9088, -56), 2);
    add_background_object(create_cavesoil1_1310(9216, -56), 2);
    add_background_object(create_cavesoil1_1310(9072, 1008), 2);
    add_background_object(create_cavesoil1_1310(9072, 1136), 2);
    add_background_object(create_cavesoil1_1310(9072, 1264), 2);
    add_background_object(create_cavesoil2_1338(9072, 992), 2);
    add_background_object(create_cavesoil1_1310(9200, 1008), 2);
    add_background_object(create_cavesoil1_1310(9200, 1136), 2);
    add_background_object(create_cavesoil1_1310(9200, 1264), 2);
    add_background_object(create_cavesoil2_1338(9200, 992), 2);
    add_background_object(create_cavesoil1_1310(9344, 328), 2);
    add_background_object(create_cavesoil1_1310(9344, 456), 2);
    add_background_object(create_cavesoil1_1310(9344, 584), 2);
    add_background_object(create_cavesoil1_1310(9344, 712), 2);
    add_background_object(create_cavesoil3_1339(9344, 816), 2);
    add_background_object(create_cavesoil1_1310(9472, 328), 2);
    add_background_object(create_cavesoil1_1310(9472, 456), 2);
    add_background_object(create_cavesoil1_1310(9472, 584), 2);
    add_background_object(create_cavesoil1_1310(9472, 712), 2);
    add_background_object(create_cavesoil3_1339(9472, 816), 2);
    add_background_object(create_cavesoil1_1310(9344, 200), 2);
    add_background_object(create_cavesoil1_1310(9472, 200), 2);
    add_background_object(create_cavesoil1_1310(9344, 72), 2);
    add_background_object(create_cavesoil1_1310(9472, 72), 2);
    add_background_object(create_cavesoil1_1310(9344, -56), 2);
    add_background_object(create_cavesoil1_1310(9472, -56), 2);
    add_background_object(create_cavesoil1_1310(9328, 1008), 2);
    add_background_object(create_cavesoil1_1310(9328, 1136), 2);
    add_background_object(create_cavesoil1_1310(9328, 1264), 2);
    add_background_object(create_cavesoil2_1338(9328, 992), 2);
    add_background_object(create_cavesoil1_1310(9456, 1008), 2);
    add_background_object(create_cavesoil1_1310(9456, 1136), 2);
    add_background_object(create_cavesoil1_1310(9456, 1264), 2);
    add_background_object(create_cavesoil2_1338(9456, 992), 2);
    add_background_object(create_cavesoil1_1310(9584, 1008), 2);
    add_background_object(create_cavesoil1_1310(9584, 1136), 2);
    add_background_object(create_cavesoil1_1310(9584, 1264), 2);
    add_background_object(create_cavesoil2_1338(9584, 992), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1336), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1432), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(7768, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(7384, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(7576, 1528), 2);
    add_background_object(create_cavesoil1_1310(8192, 456), 2);
    add_background_object(create_cavesoil11_1313(8344, 632), 2);
    add_background_object(create_cavesoil3_1339(8320, 752), 2);
    add_background_object(create_cavesoil20_1464(8176, 696), 2);
    add_background_object(create_cavesoil12_1350(8176, 584), 2);
    add_background_object(create_cavesoil12_1350(8176, 616), 2);
    add_background_object(create_cavesoil12_1350(8176, 520), 2);
    add_background_object(create_cavesoil12_1350(8176, 552), 2);
    add_background_object(create_cavesoil12_1350(8176, 456), 2);
    add_background_object(create_cavesoil12_1350(8176, 488), 2);
    add_background_object(create_cavesoil12_1350(8176, 392), 2);
    add_background_object(create_cavesoil12_1350(8176, 424), 2);
    add_background_object(create_cavesoil12_1350(8176, 328), 2);
    add_background_object(create_cavesoil12_1350(8176, 360), 2);
    add_background_object(create_cavesoil12_1350(8176, 296), 2);
    add_background_object(create_cavesoil12_1350(8176, 232), 2);
    add_background_object(create_cavesoil12_1350(8176, 264), 2);
    add_background_object(create_cavesoil12_1350(8176, 168), 2);
    add_background_object(create_cavesoil12_1350(8176, 200), 2);
    add_background_object(create_cavesoil12_1350(8176, 104), 2);
    add_background_object(create_cavesoil12_1350(8176, 136), 2);
    add_background_object(create_cavesoil12_1350(8176, 72), 2);
    add_background_object(create_cavesoil12_1350(8176, 8), 2);
    add_background_object(create_cavesoil12_1350(8176, 40), 2);
    add_background_object(create_cavesoil12_1350(8176, -56), 2);
    add_background_object(create_cavesoil12_1350(8176, -24), 2);
    add_background_object(create_cavesoil13_1456(8048, -56), 2);
    add_background_object(create_cavesoil13_1456(8048, -24), 2);
    add_background_object(create_cavesoil13_1456(8048, 8), 2);
    add_background_object(create_cavesoil13_1456(8048, 40), 2);
    add_background_object(create_cavesoil13_1456(8048, 72), 2);
    add_background_object(create_cavesoil13_1456(8048, 104), 2);
    add_background_object(create_cavesoil13_1456(8048, 136), 2);
    add_background_object(create_cavesoil13_1456(8048, 168), 2);
    add_background_object(create_cavesoil13_1456(8048, 200), 2);
    add_background_object(create_cavesoil13_1456(8048, 232), 2);
    add_background_object(create_cavesoil13_1456(8048, 264), 2);
    add_background_object(create_cavesoil13_1456(8048, 296), 2);
    add_background_object(create_cavesoil13_1456(8048, 328), 2);
    add_background_object(create_cavesoil13_1456(8048, 360), 2);
    add_background_object(create_cavesoil13_1456(8048, 392), 2);
    add_background_object(create_cavesoil13_1456(8048, 424), 2);
    add_background_object(create_cavesoil3_1339(7936, 440), 2);
    add_background_object(create_cavesoil20_1464(8064, 448), 2);
    add_background_object(create_rmladder_1152(8072, 952), 2);
    add_background_object(create_rmcavebrick14_1442(8112, 1048), 2);
    add_background_object(create_rmladder_1152(8072, 984), 2);
    add_background_object(create_rmladder_1152(8072, 1016), 2);
    add_background_object(create_rmladder_1152(8072, 1048), 2);
    add_background_object(create_rmladder_1152(8072, 1080), 2);
    add_background_object(create_rmladder_1152(8072, 1112), 2);
    add_background_object(create_rmladder_1152(8072, 1144), 2);
    add_background_object(create_rmladder_1152(8072, 1176), 2);
    add_background_object(create_cavesoil1_1310(8432, 1392), 2);
    add_background_object(create_cavesoil12_1350(8288, 1424), 2);
    add_background_object(create_cavesoil12_1350(8288, 1392), 2);
    add_background_object(create_cavesoil1_1310(8560, 1392), 2);
    add_background_object(create_cavesoil1_1310(8304, 1392), 2);
    add_background_object(create_cavesoil12_1350(8288, 1488), 2);
    add_background_object(create_cavesoil12_1350(8288, 1456), 2);
    add_background_object(create_cavesoil1_1310(8432, 1520), 2);
    add_background_object(create_cavesoil12_1350(8288, 1552), 2);
    add_background_object(create_cavesoil12_1350(8288, 1520), 2);
    add_background_object(create_cavesoil1_1310(8560, 1520), 2);
    add_background_object(create_cavesoil1_1310(8304, 1520), 2);
    add_background_object(create_cavesoil12_1350(8288, 1584), 2);
    add_background_object(create_cavesoil12_1350(8288, 1616), 2);
    add_background_object(create_cavesoil1_1310(8688, 1392), 2);
    add_background_object(create_cavesoil1_1310(8688, 1520), 2);
    add_background_object(create_cavesoil1_1310(8816, 1392), 2);
    add_background_object(create_cavesoil1_1310(8816, 1520), 2);
    add_background_object(create_cavesoil1_1310(8944, 1392), 2);
    add_background_object(create_cavesoil1_1310(8944, 1520), 2);
    add_background_object(create_cavesoil1_1310(9072, 1392), 2);
    add_background_object(create_cavesoil1_1310(9072, 1520), 2);
    add_background_object(create_cavesoil1_1310(9200, 1392), 2);
    add_background_object(create_cavesoil1_1310(9200, 1520), 2);
    add_background_object(create_cavesoil1_1310(9328, 1392), 2);
    add_background_object(create_cavesoil1_1310(9328, 1520), 2);
    add_background_object(create_cavesoil1_1310(9456, 1392), 2);
    add_background_object(create_cavesoil1_1310(9456, 1520), 2);
    add_background_object(create_cavesoil1_1310(9584, 1392), 2);
    add_background_object(create_cavesoil1_1310(9584, 1520), 2);
    add_background_object(create_rmscaleypillar_1435(8152, 1240), 2);
    add_background_object(create_rmscaleypillar_1435(7960, 1240), 2);
    add_background_object(create_rmcavebrick15_1481(8264, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(8200, 1272), 2);
    add_background_object(create_rmcavebrick6_1436(8200, 1304), 2);
    add_background_object(create_rmcavebrick7_1446(8200, 1240), 2);
    add_background_object(create_rmcavebrick7_1446(8136, 1240), 2);
    add_background_object(create_rmcavebrick13_1443(8136, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(8136, 1272), 2);
    add_background_object(create_rmcavebrick6_1436(8136, 1304), 2);
    add_background_object(create_rmcavebrick13_1443(8200, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(8072, 1272), 2);
    add_background_object(create_rmcavebrick6_1436(8072, 1304), 2);
    add_background_object(create_rmcavebrick7_1446(8072, 1240), 2);
    add_background_object(create_rmcavebrick7_1446(8008, 1240), 2);
    add_background_object(create_rmcavebrick13_1443(8008, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(8008, 1272), 2);
    add_background_object(create_rmcavebrick6_1436(8008, 1304), 2);
    add_background_object(create_rmcavebrick13_1443(8072, 1336), 2);
    add_background_object(create_rmcavebrick12_1547(7816, 1048), 2);
    add_background_object(create_rmcavebrick12_1547(7816, 1176), 2);
    add_background_object(create_rmcavebrick7_1446(7944, 1240), 2);
    add_background_object(create_rmcavebrick13_1443(7944, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(7944, 1272), 2);
    add_background_object(create_rmcavebrick6_1436(7944, 1304), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1048), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1080), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1112), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1144), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1176), 2);
    add_background_object(create_rmcavebrick9_1549(7944, 1208), 2);
    add_background_object(create_rmcavebrick14_1442(7792, 1336), 2);
    add_background_object(create_rmcavebrick13_1443(7880, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(7880, 1304), 2);
    add_background_object(create_rmcavebrick13_1443(7816, 1336), 2);
    add_background_object(create_rmcavebrick6_1436(7816, 1304), 2);
    add_background_object(create_cavesoil3_1339(3328, 504), 2);
    add_background_object(create_cavesoil1_1310(3456, 392), 2);
    add_background_object(create_cavesoil1_1310(3584, 392), 2);
    add_background_object(create_cavesoil13_1456(3696, 488), 2);
    add_background_object(create_cavesoil13_1456(3696, 456), 2);
    add_background_object(create_rmscaleypillar_1435(4504, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(3928, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(4120, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(4696, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(4312, 1528), 2);
    add_background_object(create_rmcavebrick7_1446(3848, 952), 2);
    add_background_object(create_rmcavebrick7_1446(4808, 952), 2);
    add_background_object(create_rmscaleypillar_1435(6424, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(5848, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(6040, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(6616, 1528), 2);
    add_background_object(create_rmscaleypillar_1435(6232, 1528), 2);
    add_background_object(create_rmcavebrick7_1446(5768, 952), 2);
    add_background_object(create_rmcavebrick7_1446(6728, 952), 2);
    add_background_object(create_rmbosscorpse3_1539(3504, 936), 2);
    add_background_object(create_rmbosscorpse3_1539(3664, 936), 2);
    add_background_object(create_rmcavebrick9_1549(8264, 1304), 2);
    add_background_object(create_rmcavebrick9_1549(8264, 1272), 2);
    add_background_object(create_rmcavebrick8_1548(3888, 1016), 2);
    add_background_object(create_rmcavebrick8_1548(3888, 984), 2);
    add_background_object(create_rmcavebrick13_1443(3848, 984), 2);
    add_background_object(create_rmcavebrick8_1548(4848, 1016), 2);
    add_background_object(create_rmcavebrick8_1548(4848, 984), 2);
    add_background_object(create_rmcavebrick8_1548(5808, 1016), 2);
    add_background_object(create_rmcavebrick8_1548(5808, 984), 2);
    add_background_object(create_rmcavebrick8_1548(6768, 1016), 2);
    add_background_object(create_rmcavebrick8_1548(6768, 984), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1304), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1272), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1240), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1208), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1176), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1144), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1112), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1080), 2);
    add_background_object(create_rmcavebrick8_1548(7792, 1048), 2);
    add_background_object(create_rmcavebrick13_1443(7752, 1048), 2);
    add_background_object(create_rmcavebrick9_1549(8264, 1240), 2);
    add_background_object(create_rmcavebrick2_1445(8264, 1240), 2);
    add_background_object(create_rmcavebrick8_1548(8112, 1016), 2);
    add_background_object(create_rmcavebrick8_1548(8112, 984), 2);
    add_background_object(create_rmcavebrick8_1548(8112, 952), 2);
    add_background_object(create_rmcavebrick1_1449(8112, 952), 2);
    add_background_object(create_rmcavebrick1_1449(7920, 1240), 2);
    add_background_object(create_rmcavebrick9_1549(4808, 1016), 2);
    add_background_object(create_rmcavebrick9_1549(4808, 984), 2);
    add_background_object(create_rmcavebrick13_1443(4808, 984), 2);
    add_background_object(create_rmcavebrick9_1549(5768, 1016), 2);
    add_background_object(create_rmcavebrick9_1549(5768, 984), 2);
    add_background_object(create_rmcavebrick13_1443(5768, 984), 2);
    add_background_object(create_rmcavebrick9_1549(6728, 1016), 2);
    add_background_object(create_rmcavebrick9_1549(6728, 984), 2);
    add_background_object(create_rmcavebrick13_1443(6728, 984), 2);
    add_background_object(create_rmcavebrick10_1451(7432, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(7304, 984), 2);
    add_background_object(create_rmcavebrick10_1451(7176, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(7048, 984), 2);
    add_background_object(create_rmcavebrick10_1451(6920, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(6792, 984), 2);
    add_background_object(create_rmcavebrick10_1451(6600, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(6408, 984), 2);
    add_background_object(create_rmcavebrick10_1451(6152, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(6088, 984), 2);
    add_background_object(create_rmcavebrick10_1451(5960, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(5832, 984), 2);
    add_background_object(create_rmcavebrick10_1451(5640, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(5512, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(5384, 984), 2);
    add_background_object(create_rmcavebrick10_1451(5256, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(5128, 984), 2);
    add_background_object(create_rmcavebrick10_1451(5000, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(4872, 984), 2);
    add_background_object(create_rmcavebrick10_1451(4680, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(4488, 984), 2);
    add_background_object(create_rmcavebrick10_1451(4232, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(4168, 984), 2);
    add_background_object(create_rmcavebrick10_1451(4040, 1016), 2);
    add_background_object(create_rmcavebrick10_1451(3912, 984), 2);
    add_background_object(create_cavesoil3_1339(3456, 504), 2);
    add_background_object(create_cavesoil3_1339(3584, 504), 2);
    add_background_object(create_cavesoil20_1464(3712, 512), 2);
    add_background_object(create_rmcavebrick13_1443(928, 1256), 2);
    add_background_object(create_rmcavebrick13_1443(992, 1256), 2);
    add_background_object(create_rmcavebrick8_1548(872, 1256), 2);
    add_background_object(create_rmcavebrick7_1446(896, 1320), 2);
    add_background_object(create_rmcavebrick7_1446(960, 1320), 2);
    add_background_object(create_rmcavebrick10_1451(960, 1224), 2);
    add_background_object(create_rmcavebrick10_1451(896, 1224), 2);
    add_object(create_objectbluepot_1565(304, 700), 2);
    add_object(create_objectbluepot_1565(400, 700), 2);
    add_object(create_objectbluepot_1565(336, 700), 2);
    add_object(create_objectbluepot_1565(368, 700), 2);
    add_object(create_objectbluepot_1565(320, 924), 2);
    add_object(create_objectbluepot_1565(384, 924), 2);
    add_object(create_objectbluepot_1565(272, 1436), 2);
    add_object(create_objectbluepot_1565(736, 1436), 2);
    add_object(create_objectbluepot_1565(784, 1436), 2);
    add_object(create_objectbluepot_1565(320, 1436), 2);
    add_object(create_objectbluepot_1565(400, 1436), 2);
    add_object(create_objectbluepot_1565(448, 1436), 2);
    add_object(create_objectbluepot_1565(608, 1436), 2);
    add_object(create_objectbluepot_1565(656, 1436), 2);
    add_object(create_objectbluepot_1565(600, 1852), 2);
    add_object(create_objectbluepot_1565(424, 1852), 2);
    add_object(create_objectjumppad_1510(8088, -288), 2);
    add_object(create_objectjumppad_1510(8112, -248), 2);
    add_object(create_objectjumppad_1510(8072, -216), 2);
    add_object(create_objectjumppad_1510(8120, -168), 2);
    add_object(create_objectjumppad_1510(8080, -112), 2);
    add_object(create_objectjumppad_1510(1176, 216), 2);
    add_object(create_objectjumppad_1510(1176, 520), 2);
    add_object(create_objectjumppad_1510(624, 2632), 2);
    add_object(create_enemylimiter_350(469, 2202), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_gimmickhangingmovingbar_1173(6072, -336), 2);
    add_object(create_gimmickhangingmovingsensor_1566(6097, -280), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_cameratriggerboss_424(4216, 760), 2);
    add_object(create_breakableruins_1489(-96, 1016), 2);
    add_object(create_sign_351(9056, 2997), 2);
    add_object(create_gimmickrelicflippanel2_1242(-440, 928), 2);
    add_object(create_gimmickhangingswitch_1567(-152, 1352), 2);
    add_object(create_gimmickhangingidleswitch_1257(-151, 1352), 2);
    add_object(create_layerchangeswitch2_1239(-272, -16), 2);
    add_object(create_monitorkeystone_562(-216, 32), 2);
    add_object(create_gimmickmovingpillar3_1409(136, 1512), 2);
    add_object(create_gimmickmovingpillar2_1408(-376, 936), 2);
    add_object(create_switchpressureplate_1507(-232, 1416), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldwater_318(-76, 332), 2);
    add_object(create_shieldmagnetic_317(-76, 340), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldflamefront_316(-124, 332), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_gatewayfront_1511(352, 508), 2);
    add_object(create_gatewayfront2_1509(352, 508), 2);
    add_object(create_playerstartingpoint_358(341, 533), 2);
    add_object(create_laddertop_357(468, 735), 2);
    add_object(create_laddertop_357(236, 735), 2);
    add_object(create_gimmickmovingpillar1_1407(136, 1448), 2);
    add_object(create_minibossrailing_923(888, 1360), 2);
    add_object(create_minibossrailing_923(888, 1408), 2);
    add_object(create_minibossrailing_923(912, 1360), 2);
    add_object(create_minibossrailing_923(912, 1408), 2);
    add_object(create_minibossrailing_923(936, 1360), 2);
    add_object(create_minibossrailing_923(936, 1408), 2);
    add_object(create_minibossrailing_923(960, 1360), 2);
    add_object(create_minibossrailing_923(960, 1408), 2);
    add_object(create_minibossbarrier_924(872, 1360), 2);
    add_object(create_minibossbarrier_924(872, 1408), 2);
    add_object(create_enemyiris_1183(264, 636), 2);
    add_object(create_enemyiris_1183(352, 636), 2);
    add_object(create_enemyiris_1183(440, 636), 2);
    add_object(create_enemyiris_1183(312, 796), 2);
    add_object(create_enemyiris_1183(376, 796), 2);
    add_object(create_enemyiris_1183(176, 860), 2);
    add_object(create_enemyiris_1183(536, 860), 2);
    add_object(create_enemyiris_1183(584, 860), 2);
    add_object(create_spikeceiling_1568(0, 1864), 2);
    add_object(create_yellowspringleft_436(664, 2248), 2);
    add_object(create_enemylimiter_350(173, 2202), 2);
    add_object(create_laddertop_357(1044, 2399), 2);
    add_object(create_hazardspikesup_1172(1032, 2568), 2);
    add_object(create_hazardspikesup_1172(1000, 2568), 2);
    add_object(create_hazardspikesup_1172(984, 2568), 2);
    add_object(create_yellowspringupleft_432(1096, 2344), 2);
    add_object(create_enemylimiter_350(685, 2234), 2);
    add_object(create_enemylimiter_350(877, 2234), 2);
    add_object(create_enemyfirespitter_1385(780, 2232), 2);
    add_object(create_enemylimiter_350(685, 2554), 2);
    add_object(create_enemylimiter_350(893, 2554), 2);
    add_object(create_enemyfirespitter_1385(740, 2552), 2);
    add_object(create_enemyfirespitter_1385(348, 2200), 2);
    add_object(create_laddertop_357(148, 1855), 2);
    add_object(create_lightstonebase_1569(192, 2663), 2);
    add_object(create_lightstonebase2_1570(1152, 1447), 2);
    add_object(create_lightstonetop_1571(192, 2512), 2);
    add_object(create_objectcrystal_279(477, 1914), 2);
    add_object(create_objectcrystal_279(501, 1914), 2);
    add_object(create_objectcrystal_279(525, 1914), 2);
    add_object(create_objectcrystal_279(549, 1914), 2);
    add_object(create_objectcrystal_279(301, 2202), 2);
    add_object(create_objectcrystal_279(269, 2202), 2);
    add_object(create_objectcrystal_279(333, 2202), 2);
    add_object(create_objectcrystal_279(365, 2202), 2);
    add_object(create_objectcrystal_279(917, 2426), 2);
    add_object(create_objectcrystal_279(941, 2442), 2);
    add_object(create_objectcrystal_279(917, 2474), 2);
    add_object(create_objectcrystal_279(941, 2490), 2);
    add_object(create_objectcrystal_279(85, 2122), 2);
    add_object(create_objectcrystal_279(101, 2154), 2);
    add_object(create_objectcrystal_279(125, 2178), 2);
    add_object(create_objectcrystal_279(149, 2194), 2);
    add_object(create_objectcrystal_279(429, 2602), 2);
    add_object(create_objectcrystal_279(453, 2602), 2);
    add_object(create_objectcrystal_279(509, 2602), 2);
    add_object(create_objectcrystal_279(533, 2602), 2);
    add_object(create_lightstonetop_1571(792, 2416), 2);
    add_object(create_lightstonetop_1571(792, 2128), 2);
    add_object(create_lightstonetop_1571(416, 2128), 2);
    add_object(create_lightstonetop_1571(224, 2128), 2);
    add_object(create_lightstonetop_1571(224, 1744), 2);
    add_object(create_lightstonetop_1571(512, 1744), 2);
    add_object(create_lightstonetop_1571(864, 1744), 2);
    add_object(create_switchwallplate_1572(88, 2584), 2);
    add_object(create_switchwallplate2_1573(1240, 1368), 2);
    add_object(create_minibossrailing_923(984, 1360), 2);
    add_object(create_minibossrailing_923(984, 1408), 2);
    add_object(create_lightstonetop2_1574(112, 1360), 2);
    add_object(create_objectjumppad_1510(352, 2664), 2);
    add_object(create_minibossbonegolempiece3_1575(628, 1427), 2);
    add_object(create_minibossbonegolempiece3_1575(444, 1427), 2);
    add_object(create_minibossbonegolem_1576(528, 1416), 2);
    add_object(create_minibossbonegolempiece_1577(420, 1436), 2);
    add_object(create_minibossbonegolempiece_1577(444, 1436), 2);
    add_object(create_minibossbonegolempiece6_1578(590, 1443), 2);
    add_object(create_minibossbonegolempiece6_1578(430, 1443), 2);
    add_object(create_minibossbonegolempiece5_1579(530, 1391), 2);
    add_object(create_minibossbonegolemneck1_1580(625, 1440), 2);
    add_object(create_minibossbonegolemneck2_1581(641, 1440), 2);
    add_object(create_minibossbonegolemneck3_1582(657, 1440), 2);
    add_object(create_minibossbonegolemneck4_1583(673, 1440), 2);
    add_object(create_minibossbonegolemhead_1584(696, 1440), 2);
    add_object(create_lightstonetop2_1574(1152, 1296), 2);
    add_object(create_breakableruins_1489(1640, 744), 2);
    add_object(create_breakableruins_1489(1640, 688), 2);
    add_object(create_lightstonedoor1_1585(552, 616), 2);
    add_object(create_lightstonedoor2_1586(600, 616), 2);
    add_object(create_monitorrings_407(584, 552), 2);
    add_object(create_monitorcrystals_324(88, 584), 2);
    add_object(create_monitorrings_407(464, 2696), 2);
    add_object(create_enemysentinel_1496(1024, 752), 2);
    add_object(create_objectpetal_302(785, 641), 2);
    add_object(create_objectpetal_302(745, 641), 2);
    add_object(create_objectcrystal_279(1405, 866), 2);
    add_object(create_objectcrystal_279(1445, 850), 2);
    add_object(create_objectcrystal_279(1501, 850), 2);
    add_object(create_objectcrystal_279(1541, 866), 2);
    add_object(create_objectcrystal_279(1533, 298), 2);
    add_object(create_objectcrystal_279(1597, 330), 2);
    add_object(create_objectcrystal_279(1661, 362), 2);
    add_object(create_kingdomstone_1587(3592, 888), 2);
    add_object(create_placeholdercharacter_1588(3558, 913), 2);
    add_object(create_lightray_1589(3458, 772), 2);
    add_object(create_lightray2_1590(3458, 780), 2);
    add_object(create_shrine2_1591(3568, 888), 2);
    add_object(create_objectchair_1592(1085, 1392), 2);
    add_object(create_objectchair_1592(789, 1808), 2);
    add_object(create_enemyfirespitter_1385(2004, 408), 2);
    add_object(create_enemylimiter_350(1829, 410), 2);
    add_object(create_enemylimiter_350(2173, 410), 2);
    add_object(create_bossanimationdata_1593(3960, 648), 2);
    add_object(create_bossgroundcut1_1594(4000, -104), 2);
    add_object(create_bossgroundcut2_1595(4032, -104), 2);
    add_object(create_bossmantalithhead3_1596(4345, 769), 2);
    add_object(create_bossmantalithhead2_1597(4374, 769), 2);
    add_object(create_bossmantalithhead_1598(4360, 788), 2);
    add_object(create_bossmantalitharm6_1599(4431, 841), 2);
    add_object(create_bossmantalitharm3_1600(4288, 841), 2);
    add_object(create_npchookline_1601(3591, 857), 2);
    add_object(create_bossmantalithhitbox1_1603(4104, 672), 2);
    add_object(create_bossmantalithhitbox2_1604(4136, 672), 2);
    add_object(create_bossjumppoint_1605(9776, 856), 2);
    add_object(create_monitorcrystals_324(5112, 920), 2);
    add_object(create_monitorrings_407(6264, 920), 2);
    add_object(create_objectpetal_302(7801, 777), 2);
    add_object(create_objectpetal_302(7801, 817), 2);
    add_object(create_objectpetal_302(7801, 697), 2);
    add_object(create_monitorcrystals_324(5496, 920), 2);
    add_object(create_monitorcrystals_324(7224, 920), 2);
    add_object(create_gatewayfront_1511(8200, 1196), 2);
    add_object(create_gatewayfront2_1509(8200, 1196), 2);
    add_object(create_laddertop_357(8092, 975), 2);
    add_object(create_objectpetal_302(7801, 737), 2);
    add_object(create_objectpetal_302(7801, 657), 2);
    add_object(create_ksprojectile1_1525(3584, 951), 2);
    add_object(create_ksprojectile2_1606(3599, 951), 2);
    add_object(create_levelcrushdeath_1607(1144, 2016), 2);
    add_object(create_levelcrushdeath_1607(1032, 2016), 2);
    add_object(create_levelcrushdeath_1607(920, 2016), 2);
    add_object(create_levelcrushdeath_1607(808, 2016), 2);
    add_object(create_levelcrushdeath_1607(696, 2016), 2);
    add_object(create_levelcrushdeath_1607(576, 2016), 2);
    add_object(create_levelcrushdeath_1607(752, 2304), 2);
    add_object(create_levelcrushdeath_1607(648, 2304), 2);
    add_object(create_levelcrushdeath_1607(600, 2336), 2);
    add_object(create_levelcrushdeath_1607(488, 2336), 2);
    add_object(create_levelcrushdeath_1607(360, 2400), 2);
    add_object(create_levelcrushdeath_1607(248, 2400), 2);
    add_object(create_levelcrushdeath_1607(136, 2400), 2);
    add_object(create_levelcrushdeath_1607(24, 2400), 2);
    add_object(create_levelcrushdeath_1607(1256, 2016), 2);
    add_object(create_objectcodec_354(7802, 605), 2);
    add_object(create_objectbluepot_1565(992, 1308), 2);
    add_object(create_objectbluepot_1565(928, 1308), 2);
    add_object(create_objectpetal_302(953, 1281), 2);
    add_object(create_objectpetal_302(969, 1305), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_rmcavebrick12_1547(7880, 856), 3);
    add_background_object(create_rmblueentrywayleft3_1608(0, 840), 3);
    add_background_object(create_rmblueentrywayright3_1609(608, 840), 3);
    add_background_object(create_rmcavebrick6_1436(704, 840), 3);
    add_background_object(create_rmcavebrick6_1436(704, 872), 3);
    add_background_object(create_rmcavebrick6_1436(704, 904), 3);
    add_background_object(create_rmcavebrick16_1557(128, 968), 3);
    add_background_object(create_rmcavebrick16_1557(256, 968), 3);
    add_background_object(create_rmcavebrick16_1557(384, 968), 3);
    add_background_object(create_rmcavebrick16_1557(512, 968), 3);
    add_background_object(create_rmcavebrick16_1557(0, 968), 3);
    add_background_object(create_rmcavebrick7_1446(0, 936), 3);
    add_background_object(create_rmcavebrick7_1446(64, 936), 3);
    add_background_object(create_rmcavebrick7_1446(128, 936), 3);
    add_background_object(create_rmcavebrick7_1446(192, 936), 3);
    add_background_object(create_rmcavebrick7_1446(256, 936), 3);
    add_background_object(create_rmcavebrick7_1446(320, 936), 3);
    add_background_object(create_rmcavebrick7_1446(448, 936), 3);
    add_background_object(create_rmcavebrick7_1446(512, 936), 3);
    add_background_object(create_rmcavebrick7_1446(576, 936), 3);
    add_background_object(create_rmcavebrick7_1446(384, 936), 3);
    add_background_object(create_rmcavebrick16_1557(640, 968), 3);
    add_background_object(create_rmcavebrick7_1446(640, 936), 3);
    add_background_object(create_rmcavebrick7_1446(704, 936), 3);
    add_background_object(create_rmcavebrick13_1443(576, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(640, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(704, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(768, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(832, 1256), 3);
    add_background_object(create_rmcavebrick7_1446(0, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(64, 1448), 3);
    add_background_object(create_rmblueentrywayleft3_1608(0, 1352), 3);
    add_background_object(create_rmcavebrick17_1558(128, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(512, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(640, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(768, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(0, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(896, 1128), 3);
    add_background_object(create_rmcavebrick7_1446(192, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(512, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(576, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(640, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(704, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(768, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(832, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(896, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(960, 1448), 3);
    add_background_object(create_rmcavebrick16_1557(0, 1480), 3);
    add_background_object(create_rmcavebrick16_1557(128, 1480), 3);
    add_background_object(create_rmcavebrick16_1557(512, 1480), 3);
    add_background_object(create_rmcavebrick16_1557(640, 1480), 3);
    add_background_object(create_rmcavebrick16_1557(768, 1480), 3);
    add_background_object(create_rmcavebrick16_1557(896, 1480), 3);
    add_background_object(create_rmcavebrick7_1446(128, 1448), 3);
    add_background_object(create_rmblueentrywayright3_1609(928, 1736), 3);
    add_background_object(create_rmcavebrick12_1547(1024, 1736), 3);
    add_background_object(create_rmcavebrick17_1558(768, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(1024, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(1152, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(896, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(128, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(256, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(384, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(512, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(0, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(640, 1608), 3);
    add_background_object(create_rmcavebrick17_1558(1280, 1608), 3);
    add_background_object(create_rmcavebrick16_1557(0, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(128, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(256, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(384, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(512, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(640, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(768, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(896, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(1024, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(1152, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(1280, 2760), 3);
    add_background_object(create_rmcavebrick16_1557(1408, 2760), 3);
    add_background_object(create_rmcavebrick17_1558(256, 1128), 3);
    add_background_object(create_rmcavebrick17_1558(384, 1128), 3);
    add_background_object(create_rmcavebrick7_1446(384, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(448, 1448), 3);
    add_background_object(create_rmcavebrick16_1557(384, 1480), 3);
    add_background_object(create_rmcavebrick7_1446(256, 1448), 3);
    add_background_object(create_rmcavebrick7_1446(320, 1448), 3);
    add_background_object(create_rmcavebrick16_1557(256, 1480), 3);
    add_background_object(create_loop1_1466(7688, 856), 3);
    add_background_object(create_rmcavebrick9_1549(8008, 920), 3);
    add_background_object(create_rmcavebrick9_1549(8008, 888), 3);
    add_background_object(create_rmcavebrick9_1549(8008, 856), 3);
    add_background_object(create_rmcavebrick6_1436(7816, 888), 3);
    add_background_object(create_rmcavebrick10_1451(7816, 856), 3);
    add_background_object(create_rmcavebrick6_1436(7816, 824), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 792), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 792), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 760), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 760), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 728), 3);
    add_background_object(create_rmcavebrick6_1436(7968, 696), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 696), 3);
    add_background_object(create_rmcavebrick6_1436(7968, 600), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 600), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 568), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 568), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 536), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 536), 3);
    add_background_object(create_rmcavebrick10_1451(7840, 728), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 504), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 504), 3);
    add_background_object(create_rmcavebrick6_1436(7968, 664), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 664), 3);
    add_background_object(create_rmcavebrick6_1436(7968, 632), 3);
    add_background_object(create_rmcavebrick8_1548(7816, 632), 3);
    add_background_object(create_loop2_1469(7816, 808), 3);
    add_background_object(create_rmcavebrick10_1451(7816, 952), 3);
    add_background_object(create_rmcavebrick6_1436(7816, 920), 3);
    add_background_object(create_rmcavebrick12_1547(7904, 728), 3);
    add_background_object(create_rmcavebrick6_1436(7880, 824), 3);
    add_background_object(create_rmcavebrick6_1436(7944, 824), 3);
    add_background_object(create_rmcavebrick12_1547(7840, 600), 3);
    add_background_object(create_rmcavebrick12_1547(7904, 472), 3);
    add_background_object(create_rmcavebrick6_1436(7840, 472), 3);
    add_background_object(create_cavesoil11_1313(7808, 360), 3);
    add_background_object(create_cavesoil11_1313(7928, 368), 3);
    add_background_object(create_rmpurplecrystal4_1546(8424, 776), 3);
    add_background_object(create_cavesoil1_1310(8320, 648), 3);
    add_background_object(create_cavesoil1_1310(8320, 584), 3);
    add_background_object(create_cavesoil15_1316(8448, 768), 3);
    add_background_object(create_cavesoil1_1310(8448, 576), 3);
    add_background_object(create_cavesoil1_1310(8448, 640), 3);
    add_background_object(create_cavesoil11_1313(8440, 584), 3);
    add_background_object(create_cavesoil14_1314(8448, 760), 3);
    add_background_object(create_cavesoil1_1310(8576, 584), 3);
    add_background_object(create_cavesoil1_1310(8576, 712), 3);
    add_background_object(create_cavesoil3_1339(8576, 816), 3);
    add_background_object(create_cavesoil1_1310(8704, 584), 3);
    add_background_object(create_cavesoil1_1310(8704, 712), 3);
    add_background_object(create_cavesoil3_1339(8704, 816), 3);
    add_background_object(create_cavesoil1_1310(8832, 584), 3);
    add_background_object(create_cavesoil1_1310(8832, 712), 3);
    add_background_object(create_cavesoil3_1339(8832, 816), 3);
    add_background_object(create_cavesoil1_1310(8960, 584), 3);
    add_background_object(create_cavesoil1_1310(8960, 712), 3);
    add_background_object(create_cavesoil3_1339(8960, 816), 3);
    add_background_object(create_cavesoil1_1310(9088, 584), 3);
    add_background_object(create_cavesoil1_1310(9088, 712), 3);
    add_background_object(create_cavesoil3_1339(9088, 816), 3);
    add_background_object(create_cavesoil1_1310(9216, 584), 3);
    add_background_object(create_cavesoil1_1310(9216, 712), 3);
    add_background_object(create_cavesoil3_1339(9216, 816), 3);
    add_background_object(create_cavesoil1_1310(9344, 584), 3);
    add_background_object(create_cavesoil1_1310(9344, 712), 3);
    add_background_object(create_cavesoil3_1339(9344, 816), 3);
    add_background_object(create_cavesoil1_1310(9472, 584), 3);
    add_background_object(create_cavesoil1_1310(9472, 712), 3);
    add_background_object(create_cavesoil3_1339(9472, 816), 3);
    add_background_object(create_cavesoil3_1339(8320, 752), 3);
    add_background_object(create_cavesoil11_1313(8344, 632), 3);
    add_background_object(create_rmcavebrick6_1436(768, 904), 3);
    add_background_object(create_rmcavebrick6_1436(768, 872), 3);
    add_background_object(create_rmcavebrick6_1436(768, 840), 3);
    add_background_object(create_rmcavebrick7_1446(960, 1832), 3);
    add_background_object(create_rmcavebrick1_1449(7984, 952), 3);
    add_background_object(create_cavesoil1_1310(3456, 392), 3);
    add_background_object(create_cavesoil1_1310(3584, 392), 3);
    add_background_object(create_cavesoil3_1339(3456, 504), 3);
    add_background_object(create_cavesoil3_1339(3584, 504), 3);
    add_background_object(create_rmcavebrick8_1548(1000, 1288), 3);
    add_background_object(create_rmcavebrick9_1549(1024, 1288), 3);
    add_background_object(create_rmcavebrick7_1446(896, 1320), 3);
    add_background_object(create_rmcavebrick7_1446(960, 1320), 3);
    add_background_object(create_rmcavebrick8_1548(936, 1288), 3);
    add_background_object(create_rmcavebrick9_1549(960, 1288), 3);
    add_background_object(create_rmcavebrick13_1443(864, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(928, 1256), 3);
    add_background_object(create_rmcavebrick13_1443(992, 1256), 3);
    add_background_object(create_rmcavebrick9_1549(960, 1256), 3);
    add_background_object(create_rmcavebrick8_1548(936, 1256), 3);
    add_background_object(create_rmcavebrick9_1549(1024, 1256), 3);
    add_background_object(create_rmcavebrick8_1548(1000, 1256), 3);
    add_background_object(create_rmcavebrick8_1548(872, 1288), 3);
    add_background_object(create_rmcavebrick9_1549(896, 1288), 3);
    add_background_object(create_rmcavebrick9_1549(896, 1256), 3);
    add_background_object(create_rmcavebrick8_1548(872, 1256), 3);
    add_object(create_basementlight_1610(-88, 657), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-83, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_1172(-208, 392), 5);
    add_object(create_hazardspikesdown_1192(-168, 392), 5);
    add_object(create_hazardspikesleft_1193(-128, 392), 5);
    add_object(create_hazardspikesright_1194(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(4432, 1623), 5);
    add_object(create_cameralimitbossleft_421(3344, 832), 5);
    add_object(create_cameralimitbossright_422(7871, 736), 5);
    add_object(create_cameralimitbosstop_423(4328, 432), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_effectwarning_1513(4364, 928), 5);
    add_object(create_playerreflect_447(-64, 232), 5);
    add_object(create_playerdig_448(-48, 242), 5);
    add_object(create_playerskintorquearm_449(-88, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
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
    add_object(create_guikeystone_455(432, -112), 6);
    add_object(create_guikeystone_455(416, -112), 6);
    add_object(create_guikeystone_455(400, -112), 6);
    add_object(create_guikeystone_455(384, -112), 6);
    add_object(create_guikeystone_455(368, -112), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 6);
    add_object(create_stringparser_427(-72, -88), 6);
    add_object(create_dialogdata_1611(-136, 472), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_mapdata2_32(-432, 240), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardactclear1_847(-160, 32), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-8, -72), 7);
    add_object(create_totalbonus_853(-18, -72), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
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
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
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
    loop_pot_running = false;
    loop_pot_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_tally_running = false;
    loop_tally_index = 0;
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
    loop_voice_running = false;
    loop_voice_index = 0;
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
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_28, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_28, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_28, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_28, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_28, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_28, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_28, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_28, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_28, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_28, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_28, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_28, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_28, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_28, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_28, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_28, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_28, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_28, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_28, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_28, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_28, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_28, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_28, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_28, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_28, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_28, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_28, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_28, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_28, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_28, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_28, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_28, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_28, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_28, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_28, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_28, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_28, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_28, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_28, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_28, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_28, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_28, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_28, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_28, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_28, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_28, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_28, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_28, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_28, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_28, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_28, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_28, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_28, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_28, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_level_specific_methods_rooms_crusher_room_1 = true;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    once_condition_38_14 = false;
    not_always_1388_13 = loop_count;
    not_always_2063_28 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_56_13 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1938_28 = loop_count;
    not_always_2052_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1 = false;
    once_condition_1845_28 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_1816_28 = loop_count;
    not_always_449_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_140_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_553_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_2323_28 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1684_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_2064_28 = loop_count;
    not_always_1939_28 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_2055_28 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1645_28 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1533_28 = loop_count;
    not_always_1420_13 = loop_count;
    group_main_engine_level_specific_methods_rooms_miniboss_room_1 = true;
    not_always_1880_28 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 = false;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    not_always_2065_28 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_2072_28 = loop_count;
    not_always_2036_28 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1642_28 = loop_count;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    once_condition_1522_28 = false;
    not_always_1393_28 = loop_count;
    not_always_46_13 = loop_count;
    not_always_1690_28 = loop_count;
    once_condition_1799_28 = false;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_2079_28 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    not_always_1398_28 = loop_count;
    once_condition_1522_19 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1 = false;
    not_always_1424_18 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_main_engine_level_specific_methods_local_transitions_1 = true;
    not_always_40_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    once_condition_1851_28 = false;
    not_always_422_13 = loop_count;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    not_always_1395_28 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1664_28 = loop_count;
    not_always_1422_28 = loop_count;
    not_always_789_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1397_28 = loop_count;
    not_always_1458_13 = loop_count;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_1915_28 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1 = false;
    once_condition_538_13 = false;
    not_always_2018_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1399_28 = loop_count;
    not_always_69_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    not_always_1638_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_1689_28 = loop_count;
    not_always_450_13 = loop_count;
    once_condition_1517_23 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    group_main_engine_level_specific_methods_bosses_cave_in_cave_in_lilac_1 = false;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1449_13 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_2038_28 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    group_main_engine_level_specific_methods_rooms_1 = true;
    not_always_1516_19 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1 = true;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    once_condition_2089_28 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_main_engine_level_specific_methods_bosses_cave_in_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1514_19 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1 = false;
    not_always_1424_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_cave_in_cave_in_carol_1 = false;
    not_always_235_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1396_28 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_mantalith_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    not_always_1405_23 = loop_count;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    not_always_1581_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_1705_28 = loop_count;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_1641_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    not_always_540_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1979_28 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1394_28 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    once_condition_2093_28 = false;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    once_condition_1523_28 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1 = false;
    once_condition_55_13 = false;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_6632()
{
    // event 1729_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1729_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1729_29_end;
        if (!(test_obstacle(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_box_index(3)+1))) goto event_1729_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(14, 1);
        }
    }
    event_1729_29_end: ;
}
void Frames::loop_bdfloor_29()
{
    event_func_6632();
}
void Frames::event_func_6633()
{
    // event 1508_29
    {
        if (!(group_main_engine_1)) goto event_1508_29_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (5))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto event_1508_29_end;
        FrameObject * single_instance_1508_29_0; single_instance_1508_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(lamppostfront_1778_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1508_29_0 == NULL)
                    single_instance_1508_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1508_29_0))->get_movement()->set_speed(40+randrange(30));
        ((Active*)((Active*)single_instance_1508_29_0))->force_frame(61+((Active*)get_single(lamppostfront_1778_instances, default_active_instance))->alterables->values.get(4));
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        ((Active*)((Active*)single_instance_1508_29_0))->set_direction(pick_random(11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13));
    }
    event_1508_29_end: ;
}
void Frames::event_func_6634()
{
    // event 1509_29
    {
        if (!(group_main_engine_1)) goto event_1509_29_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto event_1509_29_end;
        FrameObject * single_instance_1509_29_0; single_instance_1509_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(lamppostfront_1778_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1509_29_0 == NULL)
                    single_instance_1509_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1509_29_0))->get_movement()->set_speed(40+randrange(30));
        ((Active*)((Active*)single_instance_1509_29_0))->force_frame(61+((Active*)get_single(lamppostfront_1778_instances, default_active_instance))->alterables->values.get(3));
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        ((Active*)((Active*)single_instance_1509_29_0))->set_direction(pick_random(11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13));
    }
    event_1509_29_end: ;
}
void Frames::loop_lamp_29()
{
    event_func_6633();
    event_func_6634();
}
void Frames::event_func_6635()
{
    // event 1437_29
    {
        if (!(group_main_engine_1)) goto event_1437_29_end;
        gimmickdragontunnelhead_1638_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_dt_index))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnelhead_1638_instances.has_selection()) goto event_1437_29_end;
        gimmickdragontunnel1_1637_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (((Active*)get_single(gimmickdragontunnelhead_1638_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel1_1637_instances.has_selection()) goto event_1437_29_end;
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickdragontunnel1_1637_instances, it.current_index));
            if (parent == NULL) goto pos_end_1437_29_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1437_29_0: ;
        }
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_single(gimmickdragontunnel1_1637_instances, it.current_index, default_active_instance))->alterables->values.get(4)-90)*30, 0);
        }
    }
    event_1437_29_end: ;
}
void Frames::event_func_6636()
{
    // event 1438_29
    {
        if (!(group_main_engine_1)) goto event_1438_29_end;
        gimmickdragontunnelhead2_1640_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelhead2_1640_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_dt_index))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnelhead2_1640_instances.has_selection()) goto event_1438_29_end;
        gimmickdragontunnel2_1639_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (((Active*)get_single(gimmickdragontunnelhead2_1640_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel2_1639_instances.has_selection()) goto event_1438_29_end;
        for (ObjectIterator it(gimmickdragontunnelhead2_1640_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickdragontunnel2_1639_instances, it.current_index));
            if (parent == NULL) goto pos_end_1438_29_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1438_29_0: ;
        }
        for (ObjectIterator it(gimmickdragontunnelhead2_1640_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_single(gimmickdragontunnel2_1639_instances, it.current_index, default_active_instance))->alterables->values.get(4)-90)*-30, 0);
        }
    }
    event_1438_29_end: ;
}
void Frames::loop_dt_29()
{
    event_func_6635();
    event_func_6636();
}
void Frames::event_func_6637()
{
    // event 1546_29
    {
        if (!(group_main_engine_1)) goto event_1546_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1546_29_end;
        FrameObject * single_instance_1546_29_0; single_instance_1546_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1546_29_0 == NULL)
                    single_instance_1546_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1546_29_0))->force_frame(40+((Active*)get_single(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0)*-0.5);
        ((Active*)((Active*)single_instance_1546_29_0))->alterables->values.set(0, get_abs(((Active*)get_single(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0))%math_helper%2*-1);
        ((Active*)((Active*)single_instance_1546_29_0))->get_movement()->set_speed(50+((Active*)get_single(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0)*-5);
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1546_29_end: ;
}
void Frames::loop_spawndebris_29()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_6637();
}
void Frames::event_func_6638()
{
    // event 1900_29
    {
        if (!(group_main_engine_1)) goto event_1900_29_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage3_ogg_147, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1900_29_end: ;
}
void Frames::loop_play_music_5_29()
{
    event_func_6638();
}
void Frames::event_func_6639()
{
    // event 1604_29
    {
        if (!(group_main_engine_1)) goto event_1604_29_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1604_29_end: ;
}
void Frames::loop_cutscene_start_29()
{
    event_func_6639();
}
void Frames::loop_wrapper_sound_kick1_29(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_29(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_29(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_29(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_29(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_29(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_29(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_29(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_29(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_29(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_29(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_29(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_29(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_29(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_29(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_29(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_29(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_29(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_29(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_play_music_6_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_sound_go0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_29(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_process_call_unqueue_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_29(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_29(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_6640()
{
    // event 1591_29
    {
        if (!(group_main_engine_1)) goto event_1591_29_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1591_29_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1591_29_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(1)+180);
    }
    event_1591_29_end: ;
}
void Frames::col_5_29()
{
    event_func_6640();
}
void Frames::event_func_6641()
{
    // event 1646_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1646_29_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(6)) >= (2))) goto event_1646_29_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(6)) < (5))) goto event_1646_29_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(7, ((Active*)col_instance_2)->alterables->values.get(7)*-1);
    }
    event_1646_29_end: ;
}
void Frames::col_6_29()
{
    event_func_6641();
}
void Frames::event_func_6642()
{
    // event 1716_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1716_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1716_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1716_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        FrameObject * single_instance_1716_29_0; single_instance_1716_29_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1716_29_0 == NULL)
                single_instance_1716_29_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_1716_29_end: ;
}
void Frames::col_7_29()
{
    event_func_6642();
}
void Frames::event_func_6643()
{
    // event 1482_29
    {
        if (!(group_main_engine_1)) goto event_1482_29_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, ((Active*)col_instance_1)->alterables->values.get(4));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, ((Active*)col_instance_1)->alterables->values.get(5));
    }
    event_1482_29_end: ;
}
void Frames::col_10_29()
{
    event_func_6643();
}
void Frames::event_func_6644()
{
    // event 1488_29
    {
        if (!(group_main_engine_1)) goto event_1488_29_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(3)) == (1))) goto event_1488_29_end;
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(3, 2);
    }
    event_1488_29_end: ;
}
void Frames::col_20_29()
{
    event_func_6644();
}
void Frames::event_func_6645()
{
    // event 1715_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1715_29_end;
        FrameObject * single_instance_1715_29_0; single_instance_1715_29_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1715_29_0 == NULL)
                single_instance_1715_29_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)((Active*)col_instance_1))->destroy();
    }
    event_1715_29_end: ;
}
void Frames::col_22_29()
{
    event_func_6645();
}
void Frames::event_func_6646()
{
    // event 1589_29
    {
        if (!(group_main_engine_1)) goto event_1589_29_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1589_29_0; single_instance_1589_29_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1589_29_0 == NULL)
                single_instance_1589_29_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1589_29_0))->set_scale(0.5);
    }
    event_1589_29_end: ;
}
void Frames::col_23_29()
{
    event_func_6646();
}
void Frames::test_collisions_29()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(playersensorleftbig_391_instances, breakablewall_1748_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(qualifier_8, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 1, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(minibossufoborder_1762_instances, minibossufo_1763_instances, 1, 1, (EventFunction)&Frames::col_6_29);
    test_collisions(playercharactersensor_383_instances, minibossboomerang_1623_instances, 1, 1, (EventFunction)&Frames::col_7_29);
    test_collisions(playersensorrightbig_393_instances, breakablewall_1748_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(gimmickboostblock_1747_instances, breakablewall_1748_instances, 1, 4, (EventFunction)&Frames::col_10_29);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
    for (it1 = gimmickboostblock_1747_instances.begin(); it1 != gimmickboostblock_1747_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_29();
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
    for (it1 = minibossboomerang_1623_instances.begin(); it1 != minibossboomerang_1623_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_22_29();
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
    for (it1 = enemylaser_1626_instances.begin(); it1 != enemylaser_1626_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_29();
    }
}
void Frames::event_func_6647()
{
    // event 1435_29
    {
        if (!(group_main_engine_1)) goto event_1435_29_end;
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelmask2_1781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_d2)->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_d2)->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_d2)->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_d2)->get_y()+40))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnelmask2_1781_instances.has_selection()) goto event_1435_29_end;
        for (ObjectIterator it(gimmickdragontunnelmask2_1781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1435_29_end: ;
}
void Frames::foreach_d2_29()
{
    event_func_6647();
}
void Frames::event_func_6648()
{
    // event 1434_29
    {
        if (!(group_main_engine_1)) goto event_1434_29_end;
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_d1)->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_d1)->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_d1)->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_d1)->get_y()+40))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnelmask1_1780_instances.has_selection()) goto event_1434_29_end;
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1434_29_end: ;
}
void Frames::foreach_d1_29()
{
    event_func_6648();
}
void Frames::event_func_6649()
{
    // event 476_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_476_29_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_476_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_476_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2, ((Active*)get_single(qualifier_22, default_active_instance))->get_x()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_476_29_end: ;
}
void Frames::event_func_6650()
{
    // event 477_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_477_29_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_477_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_477_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2, ((Active*)get_single(qualifier_22, default_active_instance))->get_x()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_477_29_end: ;
}
void Frames::event_func_6651()
{
    // event 478_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_478_29_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_478_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) == (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_478_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_478_29_end: ;
}
void Frames::event_func_6652()
{
    // event 540_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_540_29_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_540_29_end;
        FrameObject * single_instance_540_29_0; single_instance_540_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_540_29_0 == NULL)
                    single_instance_540_29_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_29();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_540_29_end: ;
}
void Frames::event_func_6653()
{
    // event 557_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_29_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_557_29_end;
        FrameObject * single_instance_557_29_0; single_instance_557_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_557_29_0 == NULL)
                    single_instance_557_29_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_29();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_557_29_end: ;
}
void Frames::event_func_6654()
{
    // event 691_29
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_691_29_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_691_29_end;
        FrameObject * single_instance_691_29_0; single_instance_691_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_691_29_0 == NULL)
                    single_instance_691_29_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_29();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_691_29_end: ;
}
void Frames::event_func_6655()
{
    // event 1400_29
    {
        if (!(group_main_engine_1)) goto event_1400_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1400_29_end;
        if (not_always_1400_29 > loop_count) {
            not_always_1400_29 = loop_count + 2;
            goto event_1400_29_end;
        }
        not_always_1400_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1400_29_end: ;
}
void Frames::event_func_6656()
{
    // event 1401_29
    {
        if (!(group_main_engine_1)) goto event_1401_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1401_29_end;
        if (not_always_1401_29 > loop_count) {
            not_always_1401_29 = loop_count + 2;
            goto event_1401_29_end;
        }
        not_always_1401_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1401_29_end: ;
}
void Frames::event_func_6657()
{
    // event 1402_29
    {
        if (!(group_main_engine_1)) goto event_1402_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1402_29_end;
        if (not_always_1402_29 > loop_count) {
            not_always_1402_29 = loop_count + 2;
            goto event_1402_29_end;
        }
        not_always_1402_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1402_29_end: ;
}
void Frames::event_func_6658()
{
    // event 1403_29
    {
        if (!(group_main_engine_1)) goto event_1403_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1403_29_end;
        if (not_always_1403_29 > loop_count) {
            not_always_1403_29 = loop_count + 2;
            goto event_1403_29_end;
        }
        not_always_1403_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1403_29_end: ;
}
void Frames::event_func_6659()
{
    // event 1404_29
    {
        if (!(group_main_engine_1)) goto event_1404_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1404_29_end;
        if (not_always_1404_29 > loop_count) {
            not_always_1404_29 = loop_count + 2;
            goto event_1404_29_end;
        }
        not_always_1404_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1404_29_end: ;
}
void Frames::event_func_6660()
{
    // event 1406_29
    {
        if (!(group_main_engine_1)) goto event_1406_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_29_end;
        if (not_always_1406_29 > loop_count) {
            not_always_1406_29 = loop_count + 2;
            goto event_1406_29_end;
        }
        not_always_1406_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1406_29_end: ;
}
void Frames::event_func_6661()
{
    // event 1407_29
    {
        if (!(group_main_engine_1)) goto event_1407_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_29_end;
        if (not_always_1407_29 > loop_count) {
            not_always_1407_29 = loop_count + 2;
            goto event_1407_29_end;
        }
        not_always_1407_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1407_29_end: ;
}
void Frames::event_func_6662()
{
    // event 1408_29
    {
        if (!(group_main_engine_1)) goto event_1408_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_29_end;
        if (not_always_1408_29 > loop_count) {
            not_always_1408_29 = loop_count + 2;
            goto event_1408_29_end;
        }
        not_always_1408_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1408_29_end: ;
}
void Frames::event_func_6663()
{
    // event 1409_29
    {
        if (!(group_main_engine_1)) goto event_1409_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1409_29_end;
        if (not_always_1409_29 > loop_count) {
            not_always_1409_29 = loop_count + 2;
            goto event_1409_29_end;
        }
        not_always_1409_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1409_29_end: ;
}
