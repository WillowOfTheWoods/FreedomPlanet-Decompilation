#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8568()
{
    // event 2034_35
    {
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_2034_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) < (0))) goto event_2034_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
        }
    }
    event_2034_35_end: ;
}
void Frames::event_func_8569()
{
    // event 2035_35
    bool or_result_2035_35 = false;
    bool or_temp_result_2035_35_0 = false;
    {
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_2035_35_0_end;
        or_result_2035_35 = true;
        or_temp_result_2035_35_0 = true;
    }
    or_event_2035_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_2035_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 2035_35
    bool or_temp_result_2035_35_1 = false;
    {
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (3))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_2035_35_1_end;
        or_result_2035_35 = true;
        or_temp_result_2035_35_1 = true;
        or_event_2035_35_1_end: ;
        if (or_temp_result_2035_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_2035_35) goto or_final_or_event_2035_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_2035_35_0 || or_temp_result_2035_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
        }
    }
    or_final_or_event_2035_35_1_end: ;
}
void Frames::handle_frame_36_events()
{
    test_collisions_35();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_4203();
    event_func_4205();
    event_func_2650();
    event_func_4187();
    event_func_4188();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
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
    event_func_2735();
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
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_5410();
    event_func_5411();
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
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_8226();
    event_func_1471();
    event_func_2744();
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
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
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
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
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
    event_func_2752();
    event_func_2753();
    event_func_2754();
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
    event_func_2755();
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
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
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
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
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
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
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
    event_func_2776();
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
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
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
    event_func_2783();
    event_func_1776();
    event_func_1777();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
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
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
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
    event_func_2823();
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
    event_func_1909();
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
    event_func_2824();
    event_func_1973();
    event_func_2825();
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
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
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
    event_func_8227();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_8228();
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
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
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
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
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
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
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
    event_func_2939();
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
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
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
    event_func_6058();
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
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_2968();
    event_func_8229();
    event_func_8230();
    event_func_8231();
    event_func_8232();
    event_func_8233();
    event_func_8234();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_8235();
    event_func_8236();
    event_func_8237();
    event_func_8238();
    event_func_8239();
    event_func_8240();
    event_func_8241();
    event_func_4355();
    event_func_4356();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_4200();
    event_func_4202();
    event_func_4204();
    event_func_4206();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4942();
    event_func_8242();
    event_func_8243();
    event_func_6078();
    event_func_6079();
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_8244();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    event_func_8245();
    event_func_8246();
    event_func_8247();
    event_func_8248();
    event_func_8249();
    if (!group_main_engine_level_specific_methods_frame_transition_boss_1) goto group_main_engine_level_specific_methods_frame_transition_boss_1_end;
    event_func_8250();
    event_func_8251();
    event_func_8252();
    group_main_engine_level_specific_methods_frame_transition_boss_1_end: ;
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_4233();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_8253();
    event_func_8254();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1_end;
    event_func_8255();
    event_func_8256();
    event_func_8257();
    event_func_8258();
    event_func_8259();
    event_func_8260();
    event_func_8261();
    event_func_8262();
    event_func_8263();
    event_func_8264();
    event_func_8265();
    event_func_8266();
    event_func_8267();
    event_func_8268();
    event_func_8269();
    event_func_8270();
    event_func_8271();
    event_func_8272();
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_8273();
    event_func_8274();
    event_func_8275();
    event_func_8276();
    event_func_8277();
    event_func_8278();
    event_func_8279();
    event_func_8280();
    event_func_8281();
    event_func_8282();
    event_func_8283();
    event_func_8284();
    event_func_8285();
    event_func_8286();
    event_func_8287();
    event_func_8288();
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_8289();
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1_end;
    event_func_8290();
    event_func_8291();
    event_func_8292();
    event_func_8293();
    event_func_8294();
    event_func_8295();
    event_func_8296();
    event_func_8297();
    event_func_8298();
    event_func_8299();
    event_func_8300();
    event_func_8301();
    event_func_8302();
    event_func_8303();
    event_func_8304();
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1_end: ;
    event_func_8305();
    event_func_8306();
    event_func_8307();
    event_func_8308();
    event_func_8309();
    event_func_8310();
    event_func_8311();
    event_func_8312();
    event_func_8313();
    event_func_8314();
    event_func_8315();
    event_func_8316();
    event_func_8317();
    event_func_8318();
    event_func_8319();
    event_func_8320();
    event_func_8321();
    event_func_8322();
    event_func_8323();
    event_func_8324();
    event_func_8325();
    event_func_8326();
    event_func_8327();
    event_func_8328();
    event_func_8329();
    event_func_8330();
    event_func_8331();
    event_func_8332();
    event_func_8333();
    event_func_8334();
    event_func_8335();
    event_func_8336();
    event_func_8337();
    event_func_8338();
    event_func_8339();
    event_func_8340();
    event_func_8341();
    event_func_8342();
    event_func_8343();
    event_func_8344();
    event_func_8345();
    event_func_8346();
    event_func_8347();
    event_func_8348();
    event_func_8349();
    event_func_8350();
    event_func_8351();
    event_func_8352();
    event_func_8353();
    event_func_8354();
    event_func_8355();
    event_func_8356();
    event_func_8357();
    event_func_8358();
    event_func_8359();
    event_func_8360();
    event_func_8361();
    event_func_8362();
    event_func_8363();
    event_func_8364();
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1_end: ;
    if (!group_main_engine_level_specific_methods_hub_area_1) goto group_main_engine_level_specific_methods_hub_area_1_end;
    group_main_engine_level_specific_methods_hub_area_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    if (!group_main_engine_level_specific_methods_bosses_cannon_fire_1) goto group_main_engine_level_specific_methods_bosses_cannon_fire_1_end;
    event_func_8365();
    event_func_8366();
    event_func_8367();
    event_func_8368();
    event_func_8369();
    event_func_8370();
    event_func_8371();
    event_func_8372();
    event_func_8373();
    group_main_engine_level_specific_methods_bosses_cannon_fire_1_end: ;
    event_func_8374();
    event_func_8375();
    event_func_8376();
    event_func_8377();
    event_func_8378();
    if (!group_main_engine_level_specific_methods_bosses_boss_prince_dail_1) goto group_main_engine_level_specific_methods_bosses_boss_prince_dail_1_end;
    event_func_8379();
    event_func_8380();
    event_func_8381();
    event_func_8382();
    event_func_8383();
    event_func_8384();
    event_func_8385();
    event_func_8386();
    event_func_8387();
    event_func_8388();
    event_func_8389();
    event_func_8390();
    event_func_8391();
    event_func_8392();
    event_func_8393();
    event_func_8394();
    event_func_8395();
    event_func_8396();
    event_func_8397();
    event_func_8398();
    event_func_8399();
    event_func_8400();
    event_func_8401();
    event_func_8402();
    event_func_8403();
    event_func_8404();
    event_func_8405();
    event_func_8406();
    event_func_8407();
    event_func_8408();
    event_func_8409();
    event_func_8410();
    event_func_8411();
    event_func_8412();
    event_func_8413();
    event_func_8414();
    event_func_8415();
    event_func_8416();
    event_func_8417();
    event_func_8418();
    event_func_8419();
    event_func_8420();
    event_func_8421();
    event_func_8422();
    event_func_8423();
    event_func_8424();
    event_func_8425();
    event_func_8426();
    event_func_8427();
    event_func_8428();
    event_func_8429();
    event_func_8430();
    event_func_8431();
    event_func_8432();
    event_func_8433();
    event_func_8434();
    event_func_8435();
    event_func_8436();
    event_func_8437();
    event_func_8438();
    event_func_8439();
    event_func_8440();
    event_func_8441();
    event_func_8442();
    event_func_8443();
    event_func_8444();
    event_func_8445();
    event_func_8446();
    event_func_8447();
    event_func_8448();
    event_func_8449();
    event_func_8450();
    event_func_8451();
    event_func_8452();
    event_func_8453();
    event_func_8454();
    event_func_8455();
    event_func_8456();
    event_func_8457();
    event_func_8458();
    event_func_8459();
    event_func_8460();
    event_func_8461();
    event_func_8462();
    event_func_8463();
    event_func_8464();
    event_func_8465();
    event_func_8466();
    event_func_8467();
    event_func_8468();
    event_func_8469();
    event_func_8470();
    event_func_8471();
    event_func_8472();
    event_func_8473();
    event_func_8474();
    event_func_8475();
    event_func_8476();
    event_func_8477();
    event_func_8478();
    event_func_8479();
    event_func_8480();
    event_func_8481();
    event_func_8482();
    event_func_8483();
    event_func_8484();
    event_func_8485();
    event_func_8486();
    event_func_8487();
    event_func_8488();
    event_func_8489();
    event_func_8490();
    event_func_8491();
    event_func_8492();
    event_func_8493();
    event_func_8494();
    event_func_8495();
    event_func_8496();
    event_func_8497();
    event_func_8498();
    event_func_8499();
    event_func_8500();
    event_func_8501();
    event_func_8502();
    event_func_8503();
    event_func_8504();
    event_func_8505();
    event_func_8506();
    event_func_8507();
    event_func_8508();
    event_func_8509();
    event_func_8510();
    event_func_8511();
    event_func_8512();
    event_func_8513();
    event_func_8514();
    event_func_8515();
    event_func_8516();
    event_func_8517();
    event_func_8518();
    event_func_8519();
    event_func_8520();
    event_func_8521();
    event_func_8522();
    event_func_8523();
    event_func_8524();
    event_func_8525();
    event_func_8526();
    event_func_8527();
    event_func_8528();
    event_func_8529();
    event_func_8530();
    event_func_8531();
    event_func_8532();
    event_func_8533();
    event_func_8534();
    event_func_8535();
    group_main_engine_level_specific_methods_bosses_boss_prince_dail_1_end: ;
    event_func_8536();
    event_func_8537();
    event_func_8538();
    event_func_8539();
    event_func_8540();
    event_func_8541();
    event_func_8542();
    event_func_8543();
    event_func_8544();
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_8545();
    event_func_8546();
    event_func_8547();
    event_func_8548();
    event_func_8549();
    event_func_8550();
    event_func_8551();
    event_func_8552();
    event_func_8553();
    event_func_8554();
    event_func_8555();
    event_func_8556();
    event_func_8557();
    if (!group_main_engine_interface_and_post_processing_methods_all_shields_1) goto group_main_engine_interface_and_post_processing_methods_all_shields_1_end;
    event_func_3656();
    event_func_3657();
    event_func_3658();
    event_func_3659();
    event_func_3660();
    event_func_3661();
    event_func_3662();
    event_func_3663();
    event_func_3664();
    group_main_engine_interface_and_post_processing_methods_all_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
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
    event_func_4119();
    event_func_2577();
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
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
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
    event_func_3246();
    event_func_8558();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_8559();
    event_func_8560();
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
    event_func_8561();
    event_func_8562();
    event_func_8563();
    event_func_8564();
    event_func_8565();
    group_pause_1_end: ;
    event_func_4314();
    event_func_8566();
    event_func_8567();
    event_func_8568();
    event_func_8569();
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
void Frames::handle_frame_36_pre_events()
{
}
void Frames::event_func_8570()
{
    // event 2_35
    {
        if (!((global_values->get(4)) != (99))) goto event_2_35_end;
        levelparallaxsbnight2_2042_instances.clear_selection();
        for (ObjectIterator it(levelparallaxsbnight2_2042_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxsbnight1_2040_instances.clear_selection();
        for (ObjectIterator it(levelparallaxsbnight1_2040_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_2_35_end: ;
}
void Frames::event_func_8571()
{
    // event 3_35
    {
        if (!((global_values->get(4)) == (99))) goto event_3_35_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
            group_main_engine_level_specific_methods_hub_area_1 = false;
    
        switchplatformmask_2067_instances.clear_selection();
        for (ObjectIterator it(switchplatformmask_2067_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelshipname1_2101_instances.clear_selection();
        for (ObjectIterator it(levelshipname1_2101_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelshipname2_2102_instances.clear_selection();
        for (ObjectIterator it(levelshipname2_2102_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelshipname3_2103_instances.clear_selection();
        for (ObjectIterator it(levelshipname3_2103_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(5, ((Active*)get_instance(playerstartingpoint_358_instances))->get_x()+160);
        global_values->set(6, ((Active*)get_instance(playerstartingpoint_358_instances))->get_y()-16);
            group_main_engine_level_specific_methods_bosses_1 = false;
    
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece0_465_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1_2_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_3_35_end: ;
}
void Frames::event_func_8572()
{
    // event 4_35
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 4);
#endif
    }
    event_4_35_end: ;
}
void Frames::event_func_8573()
{
    // event 10_35
    {
        if (!(group_main_engine_1)) goto event_10_35_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 17);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_10_35_end: ;
}
void Frames::event_func_8574()
{
    // event 27_35
    {
        if (!(group_main_engine_1)) goto event_27_35_end;
        levelparallaxpiece0_465_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.99);
            ((SystemBox*)*it)->alterables->values.set(4, 0.99);
        }
        levelparallaxpiece1_2_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.97);
            ((SystemBox*)*it)->alterables->values.set(4, 0.97);
        }
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.05);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.2);
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.7);
            ((SystemBox*)*it)->alterables->values.set(4, 0.97);
        }
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.5);
            ((SystemBox*)*it)->alterables->values.set(4, 0.9);
        }
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -0.01);
        }
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -0.1);
        }
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.4);
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -3);
        }
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -6);
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.6);
            ((SystemBox*)*it)->alterables->values.set(4, 0.94);
            ((SystemBox*)*it)->alterables->values.set(6, -4.5);
        }
        levelparallaxsbnight2_2042_instances.clear_selection();
        for (ObjectIterator it(levelparallaxsbnight2_2042_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.97);
            ((SystemBox*)*it)->alterables->values.set(4, 0.97);
            ((SystemBox*)*it)->alterables->values.set(6, -0.1);
        }
        levelparallaxsbnight1_2040_instances.clear_selection();
        for (ObjectIterator it(levelparallaxsbnight1_2040_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.99);
            ((SystemBox*)*it)->alterables->values.set(4, 0.99);
            ((SystemBox*)*it)->alterables->values.set(6, -0.01);
        }
    }
    event_27_35_end: ;
}
void Frames::event_func_8575()
{
    // event 1424_35
    {
        if (!(group_main_engine_1)) goto event_1424_35_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        switchdoor_735_instances.clear_selection();
        spread_value(switchdoor_735_instances, 0, 0);
        spread_value(switchplatform_2100_instances, 2, 0);
    }
    event_1424_35_end: ;
}
void Frames::event_func_8576()
{
    // event 1480_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1480_35_end;
        if (!((global_values->get(4)) >= (0))) goto event_1480_35_end;
        if (!((global_values->get(4)) < (99))) goto event_1480_35_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1480_35_end: ;
}
void Frames::event_func_8577()
{
    // event 1481_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1481_35_end;
        if (!((global_values->get(4)) >= (99))) goto event_1481_35_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1481_35_end: ;
}
void Frames::event_func_8578()
{
    // event 1488_35
    {
        if (!(group_main_engine_1)) goto event_1488_35_end;
        if (!((global_values->get(4)) == (99))) goto event_1488_35_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 = true;
        }
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
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
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        monitorrings_407_instances.clear_selection();
        for (ObjectIterator it(monitorrings_407_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_interface_and_post_processing_methods_all_shields_1 = false;
    
    }
    event_1488_35_end: ;
}
void Frames::event_func_8579()
{
    // event 1603_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1603_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(4))) goto event_1603_35_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1603_35_end;
        levelshipname1_2101_instances.clear_selection();
        for (ObjectIterator it(levelshipname1_2101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(1, 24);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1603_35_end: ;
}
void Frames::event_func_8580()
{
    // event 1604_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1604_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(5))) goto event_1604_35_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1604_35_end;
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(1, 24);
        }
        levelshipname2_2102_instances.clear_selection();
        for (ObjectIterator it(levelshipname2_2102_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1604_35_end: ;
}
void Frames::event_func_8581()
{
    // event 1605_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1605_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(6))) goto event_1605_35_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1605_35_end;
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(1, 24);
        }
        levelshipname3_2103_instances.clear_selection();
        for (ObjectIterator it(levelshipname3_2103_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1605_35_end: ;
}
void Frames::event_func_8582()
{
    // event 1606_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1606_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(4))) goto event_1606_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1606_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1606_35_end: ;
}
void Frames::event_func_8583()
{
    // event 1607_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1607_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(5))) goto event_1607_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1607_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1607_35_end: ;
}
void Frames::event_func_8584()
{
    // event 1608_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_hub_area_1)) goto event_1608_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(6))) goto event_1608_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1608_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1608_35_end: ;
}
void Frames::event_func_8585()
{
    // event 1609_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1609_35_end;
        bosskujackertail_2104_instances.clear_selection();
        spread_value(bosskujackertail_2104_instances, 0, 0);
        bosskujackerwing1_2110_instances.clear_selection();
        spread_value(bosskujackerwing1_2110_instances, 0, 0);
        bosskujackerwing2_2111_instances.clear_selection();
        spread_value(bosskujackerwing2_2111_instances, 0, 0);
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)*((((Active*)*it)->alterables->values.get(0)+1)/math_helper/2)*20);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, ((Active*)get_instance(bosskujackerbase_2107_instances))->get_x());
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, ((Active*)get_instance(bosskujackerbase_2107_instances))->get_y());
        bosskujackerhead2_2108_instances.clear_selection();
        spread_value(bosskujackerhead2_2108_instances, 0, 0);
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, bosskujackerhead2_2108_instances.size()-((Active*)*it)->alterables->values.get(0));
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        spread_value(bosskujackertailtarget_2109_instances, 3, 0);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1609_35_end: ;
}
void Frames::event_func_8586()
{
    // event 1610_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1610_35_end;
        effectwarning_1065_instances.clear_selection();
        spread_value(effectwarning_1065_instances, 0, 0);
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*10);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
        }
        spread_value(effectwarning_1065_instances, 8, 0);
        levelairship1_2059_instances.clear_selection();
        spread_value(levelairship1_2059_instances, 8, 0);
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1610_35_end: ;
}
void Frames::event_func_8587()
{
    // event 1962_35
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1962_35_end;
        if (!((global_values->get(4)) > (0))) goto event_1962_35_end;
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
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(4);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1962_35_end: ;
}
void Frames::on_frame_36_start_events()
{
    event_func_5375();
    event_func_8570();
    event_func_8571();
    event_func_8572();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_8573();
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
    event_func_8574();
    event_func_3269();
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
    event_func_8575();
    event_func_2686();
    event_func_8576();
    event_func_8577();
    event_func_8578();
    event_func_8579();
    event_func_8580();
    event_func_8581();
    event_func_8582();
    event_func_8583();
    event_func_8584();
    event_func_8585();
    event_func_8586();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_8587();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_36_init()
{
    index = 35;
    width = 3200;
    height = 2400;
    virtual_width = 3200;
    virtual_height = 2400;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.25, 0.25, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &shipplatform1_2093_instances, &shipplatform2_2094_instances, &shipplatform3_2095_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &shipplatform1_2093_instances, &shipplatform2_2094_instances, &shipplatform3_2095_instances, &levelsbplatform1_2096_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&bosskujackertailtarget_2109_instances, &bosskujackerhead_2113_instances, NULL};
    qualifier_20.set(2, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxsbnight1_2040_instances, &levelparallaxpiece1_2_instances, &levelparallaxsbnight2_2042_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(10, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &switchdoor_735_instances, &switchplatform_2100_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2039(0, -8), 0);
    add_background_object(create_levelparallaxsbnight1_2040(480, -8), 0);
    add_background_object(create_levelparallaxpiece1_2041(0, 160), 0);
    add_background_object(create_levelparallaxsbnight2_2042(480, 160), 0);
    add_background_object(create_levelparallaxpiece3_2043(0, 80), 0);
    add_background_object(create_levelparallaxpiece4_2044(0, 224), 0);
    add_background_object(create_levelparallaxpiece2_2045(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_2046(0, 192), 0);
    add_background_object(create_levelparallaxpiece6_2047(8, 208), 0);
    add_background_object(create_levelparallaxpiece7_2048(0, 0), 0);
    add_object(create_levelairship1_2059(763, 328), 1);
    add_object(create_levelairship1_2059(259, 320), 1);
    add_object(create_levelairship1_2059(491, 288), 1);
    add_background_object(create_quickbackdrop6_2060(1104, 1176), 2);
    add_background_object(create_sbflagpole_2061(1816, 432), 2);
    add_background_object(create_sbflagpole_2061(2328, 656), 2);
    add_background_object(create_shipmast_2062(1216, 848), 2);
    add_background_object(create_shipmast2_2063(1216, 1040), 2);
    add_background_object(create_shipmast2_2063(1216, 1040), 2);
    add_background_object(create_shipmast_2062(1792, 912), 2);
    add_background_object(create_shipmast_2062(1792, 528), 2);
    add_background_object(create_shipmast2_2063(1792, 1040), 2);
    add_background_object(create_shipmast_2062(672, 656), 2);
    add_background_object(create_shipmast2_2063(672, 952), 2);
    add_background_object(create_shipmast_2062(2304, 880), 2);
    add_background_object(create_shipmast_2062(2304, 752), 2);
    add_background_object(create_shipmast2_2063(2304, 1120), 2);
    add_background_object(create_ship19_2064(960, 336), 2);
    add_background_object(create_ship18_2065(2016, 728), 2);
    add_background_object(create_ship17_2066(496, 688), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(3200, -91), 2);
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
    add_object(create_switchplatformmask_2067(2448, 1152), 2);
    add_object(create_switchplatformmask_2067(872, 1024), 2);
    add_object(create_switchplatformmask_2067(1704, 1152), 2);
    add_object(create_levelzaoflag_2068(695, 574), 2);
    add_object(create_levelzaoflag_2068(1815, 446), 2);
    add_object(create_levelzaoflag_2068(2327, 670), 2);
    add_object(create_leveldarksky_2069(0, 0), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_blimpcable1_2070(1960, 1168), 3);
    add_background_object(create_blimpcable1_2070(944, 1040), 3);
    add_background_object(create_blimpcable1_2070(944, 888), 3);
    add_background_object(create_blimpcable1_2070(928, 952), 3);
    add_background_object(create_blimpcable1_2070(912, 1016), 3);
    add_background_object(create_blimpcable1_2070(896, 1080), 3);
    add_background_object(create_ship24_2071(960, 1096), 3);
    add_background_object(create_ship30_2072(960, 1136), 3);
    add_background_object(create_ship30_2072(960, 1152), 3);
    add_background_object(create_ship24_2071(1024, 1112), 3);
    add_background_object(create_ship31_2073(784, 1176), 3);
    add_background_object(create_ship30_2072(1024, 1152), 3);
    add_background_object(create_ship30_2072(832, 1184), 3);
    add_background_object(create_ship30_2072(896, 1184), 3);
    add_background_object(create_shipbottomsail_2074(960, 1496), 3);
    add_background_object(create_shipbottomsail_2074(1256, 1456), 3);
    add_background_object(create_shipbottomsail_2074(1336, 1432), 3);
    add_background_object(create_shipbottomsail_2074(1024, 1472), 3);
    add_background_object(create_shipbottomsail_2074(768, 1472), 3);
    add_background_object(create_shipbottomsail_2074(1080, 1432), 3);
    add_background_object(create_ship28_2075(1712, 1376), 3);
    add_background_object(create_ship13_2076(1936, 1176), 3);
    add_background_object(create_ship21_2077(2192, 1168), 3);
    add_background_object(create_ship20_2078(608, 1008), 3);
    add_background_object(create_ship24_2071(704, 1032), 3);
    add_background_object(create_ship23_2079(688, 1096), 3);
    add_background_object(create_shipplatformlong_2080(784, 1208), 3);
    add_background_object(create_ship16_2081(1248, 1280), 3);
    add_background_object(create_ship16_2081(1376, 1280), 3);
    add_background_object(create_ship16_2081(1504, 1280), 3);
    add_background_object(create_ship16_2081(1632, 1280), 3);
    add_background_object(create_ship16_2081(1760, 1280), 3);
    add_background_object(create_ship16_2081(1888, 1280), 3);
    add_background_object(create_ship16_2081(2016, 1280), 3);
    add_background_object(create_ship16_2081(2144, 1280), 3);
    add_background_object(create_ship16_2081(1120, 1280), 3);
    add_background_object(create_ship20_2078(640, 1016), 3);
    add_background_object(create_ship24_2071(768, 1048), 3);
    add_background_object(create_ship24_2071(832, 1064), 3);
    add_background_object(create_ship24_2071(896, 1080), 3);
    add_background_object(create_ship26_2082(832, 1560), 3);
    add_background_object(create_ship26_2082(896, 1552), 3);
    add_background_object(create_ship26_2082(960, 1544), 3);
    add_background_object(create_ship26_2082(1024, 1536), 3);
    add_background_object(create_ship26_2082(1088, 1528), 3);
    add_background_object(create_ship26_2082(1152, 1520), 3);
    add_background_object(create_ship26_2082(1216, 1512), 3);
    add_background_object(create_ship28_2075(1512, 1456), 3);
    add_background_object(create_ship27_2083(1280, 1496), 3);
    add_background_object(create_ship28_2075(1552, 1440), 3);
    add_background_object(create_ship28_2075(1592, 1424), 3);
    add_background_object(create_ship28_2075(1632, 1408), 3);
    add_background_object(create_ship28_2075(1672, 1392), 3);
    add_background_object(create_ship29_2084(1736, 1392), 3);
    add_background_object(create_ship26_2082(768, 1568), 3);
    add_background_object(create_shipthrusterfront_2085(1040, 1504), 3);
    add_background_object(create_shipthrusterend_2086(656, 1504), 3);
    add_background_object(create_ship22_2087(776, 1208), 3);
    add_background_object(create_shipthrustermid_2088(752, 1504), 3);
    add_background_object(create_shipbottomsailshadow_2089(968, 1392), 3);
    add_background_object(create_shipthrusterfront_2085(1040, 1392), 3);
    add_background_object(create_shipthrustermid_2088(752, 1392), 3);
    add_background_object(create_shipthrusterend_2086(656, 1392), 3);
    add_background_object(create_ship25_2090(1088, 1128), 3);
    add_background_object(create_ship31_2073(784, 1112), 3);
    add_background_object(create_ship30_2072(832, 1120), 3);
    add_background_object(create_ship30_2072(896, 1120), 3);
    add_background_object(create_sbsigndown_2091(672, -208), 3);
    add_background_object(create_sbmetalshippanel_2092(1688, 2416), 3);
    add_background_object(create_sbflagpole_2061(696, 560), 3);
    add_background_object(create_blimpcable1_2070(2040, 848), 3);
    add_background_object(create_blimpcable1_2070(2024, 912), 3);
    add_background_object(create_blimpcable1_2070(2008, 976), 3);
    add_background_object(create_blimpcable1_2070(1992, 1040), 3);
    add_background_object(create_blimpcable1_2070(1976, 1104), 3);
    add_background_object(create_blimpcable1_2070(2008, 1144), 3);
    add_object(create_playerstartingpoint_358(949, 1189), 3);
    add_object(create_shipplatform1_2093(608, 1008), 3);
    add_object(create_shipplatform1_2093(672, 1024), 3);
    add_object(create_shipplatform1_2093(736, 1040), 3);
    add_object(create_shipplatform1_2093(800, 1056), 3);
    add_object(create_shipplatform2_2094(784, 1208), 3);
    add_object(create_shipplatform1_2093(864, 1072), 3);
    add_object(create_shipplatform1_2093(928, 1088), 3);
    add_object(create_shipplatform1_2093(992, 1104), 3);
    add_object(create_shipplatform1_2093(1048, 1118), 3);
    add_object(create_shipplatform2_2094(912, 1208), 3);
    add_object(create_shipplatform2_2094(1040, 1208), 3);
    add_object(create_shipplatform2_2094(1168, 1208), 3);
    add_object(create_shipplatform2_2094(1296, 1208), 3);
    add_object(create_shipplatform2_2094(1424, 1208), 3);
    add_object(create_shipplatform2_2094(1552, 1208), 3);
    add_object(create_shipplatform2_2094(1680, 1208), 3);
    add_object(create_shipplatform2_2094(1808, 1208), 3);
    add_object(create_shipplatform2_2094(1936, 1208), 3);
    add_object(create_shipplatform2_2094(2064, 1208), 3);
    add_object(create_shipplatform3_2095(2192, 1168), 3);
    add_object(create_levelsbplatform1_2096(1240, 1104), 3);
    add_object(create_levelsbplatformflame1_2097(1239, 1122), 3);
    add_object(create_switchdoor_2099(672, -168), 3);
    add_object(create_switchplatform_2100(2448, 1152), 3);
    add_object(create_levelsbplatform1_2096(1808, 1104), 3);
    add_object(create_levelsbplatformflame1_2097(1807, 1122), 3);
    add_object(create_layerchangeswitch2_1239(744, -136), 3);
    add_object(create_effectwarning_1513(2156, 1192), 3);
    add_object(create_effectwarning_1513(1180, 1192), 3);
    add_object(create_effectwarning_1513(1460, 1192), 3);
    add_object(create_switchplatform_2100(872, 1024), 3);
    add_object(create_switchplatform_2100(1704, 1152), 3);
    add_object(create_levelshipname1_2101(1700, 1087), 3);
    add_object(create_levelshipname2_2102(871, 959), 3);
    add_object(create_levelshipname3_2103(2447, 1079), 3);
    add_object(create_bosskujackertail_2104(1695, -53), 3);
    add_object(create_bosskujackertail_2104(1727, -53), 3);
    add_object(create_bosskujackertail_2104(1759, -53), 3);
    add_object(create_bosskujackertail_2104(1791, -53), 3);
    add_object(create_bosskujackertail_2104(1823, -53), 3);
    add_object(create_bosskujackertail_2104(1855, -53), 3);
    add_object(create_bosskujackertail_2104(1887, -53), 3);
    add_object(create_bosskujackertail_2104(1919, -53), 3);
    add_object(create_bosskujackertail_2104(1951, -53), 3);
    add_object(create_bosskujackerleg2_2105(1847, -288), 3);
    add_object(create_bosskujackerleg1_2106(1784, -288), 3);
    add_object(create_bosskujackerbase_2107(1816, -312), 3);
    add_object(create_bosskujackerhead2_2108(1528, -176), 3);
    add_object(create_bosskujackerhead2_2108(1544, -176), 3);
    add_object(create_bosskujackerhead2_2108(1560, -176), 3);
    add_object(create_bosskujackerhead2_2108(1576, -176), 3);
    add_object(create_bosskujackerhead2_2108(1592, -176), 3);
    add_object(create_bosskujackertailtarget_2109(1692, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1724, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1756, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1788, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1820, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1852, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1884, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1916, -207), 3);
    add_object(create_bosskujackertailtarget_2109(1948, -207), 3);
    add_object(create_bosskujackerwing1_2110(1665, -313), 3);
    add_object(create_bosskujackerwing1_2110(1705, -313), 3);
    add_object(create_bosskujackerwing1_2110(1745, -313), 3);
    add_object(create_bosskujackerwing1_2110(1785, -313), 3);
    add_object(create_bosskujackerwing2_2111(1958, -313), 3);
    add_object(create_bosskujackerwing2_2111(1918, -313), 3);
    add_object(create_bosskujackerwing2_2111(1878, -313), 3);
    add_object(create_bosskujackerwing2_2111(1838, -313), 3);
    add_object(create_bosskujackerpilot_2112(1654, -56), 3);
    add_object(create_bosskujackerhead_2113(1815, -320), 3);
    add_object(create_effectsdust01_332(1297, -199), 3);
    add_object(create_effectschargebeam_2052(1435, -60), 3);
    add_object(create_bosstornado_2114(1400, 1208), 3);
    add_object(create_monitorrings_407(1032, 1176), 3);
    add_object(create_levelsbplatform1_2096(1512, 1048), 3);
    add_object(create_levelsbplatformflame1_2097(1511, 1066), 3);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 3);
    add_object(create_themagister_2115(-184, 734), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_sbflagpole_2061(832, 1112), 4);
    add_background_object(create_blimpcable1_2070(1448, 344), 4);
    add_background_object(create_blimpcable1_2070(1432, 408), 4);
    add_background_object(create_blimpcable1_2070(1416, 472), 4);
    add_background_object(create_blimpcable1_2070(1400, 536), 4);
    add_background_object(create_blimpcable1_2070(1384, 600), 4);
    add_background_object(create_blimpcable1_2070(1368, 664), 4);
    add_background_object(create_blimpcable1_2070(1352, 728), 4);
    add_background_object(create_blimpcable1_2070(1336, 792), 4);
    add_background_object(create_blimpcable1_2070(1320, 856), 4);
    add_background_object(create_blimpcable1_2070(1304, 920), 4);
    add_background_object(create_blimpcable1_2070(1288, 984), 4);
    add_background_object(create_blimpcable1_2070(1272, 1048), 4);
    add_background_object(create_blimpcable1_2070(1256, 1112), 4);
    add_background_object(create_blimpcable1_2070(1248, 1144), 4);
    add_background_object(create_blimpcable1_2070(1152, 504), 4);
    add_background_object(create_blimpcable1_2070(1136, 568), 4);
    add_background_object(create_blimpcable1_2070(1120, 632), 4);
    add_background_object(create_blimpcable1_2070(1104, 696), 4);
    add_background_object(create_blimpcable1_2070(1088, 760), 4);
    add_background_object(create_blimpcable1_2070(1072, 824), 4);
    add_background_object(create_blimpcable1_2070(1056, 888), 4);
    add_background_object(create_blimpcable1_2070(1040, 952), 4);
    add_background_object(create_blimpcable1_2070(1024, 1016), 4);
    add_background_object(create_blimpcable1_2070(1008, 1080), 4);
    add_background_object(create_blimpcable1_2070(992, 1144), 4);
    add_background_object(create_blimpcable1_2070(1008, 696), 4);
    add_background_object(create_blimpcable1_2070(992, 760), 4);
    add_background_object(create_blimpcable1_2070(976, 824), 4);
    add_background_object(create_blimpcable1_2070(960, 888), 4);
    add_background_object(create_blimpcable1_2070(944, 952), 4);
    add_background_object(create_blimpcable1_2070(928, 1016), 4);
    add_background_object(create_blimpcable1_2070(912, 1080), 4);
    add_background_object(create_blimpcable1_2070(896, 1144), 4);
    add_background_object(create_blimpcable1_2070(2168, 728), 4);
    add_background_object(create_blimpcable1_2070(2152, 792), 4);
    add_background_object(create_blimpcable1_2070(2136, 856), 4);
    add_background_object(create_blimpcable1_2070(2120, 920), 4);
    add_background_object(create_blimpcable1_2070(2104, 984), 4);
    add_background_object(create_blimpcable1_2070(2088, 1048), 4);
    add_background_object(create_blimpcable1_2070(2072, 1112), 4);
    add_background_object(create_blimpcable1_2070(2064, 1144), 4);
    add_object(create_levelzaoflag_2068(831, 1126), 4);
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
    add_object(create_hazardspikesup_2116(-208, 392), 5);
    add_object(create_hazardspikesdown_2117(-168, 392), 5);
    add_object(create_hazardspikesleft_2118(-128, 392), 5);
    add_object(create_hazardspikesright_2119(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(384, 2007), 5);
    add_object(create_cameralimitbossleft_421(112, 1832), 5);
    add_object(create_cameralimitbossright_422(623, 1840), 5);
    add_object(create_cameralimitbosstop_423(384, 1696), 5);
    add_object(create_cameratriggerboss_424(160, 1520), 5);
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
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_dialogdata_2120(-128, 456), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
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
    loop_lightning_running = false;
    loop_lightning_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_35, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_35, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_35, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_35, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_35, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_35, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_35, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_35, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_35, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_35, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_35, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_35, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_35, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_35, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_35, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_35, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_35, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_35, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_35, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_35, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_35, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_35, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_35, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_35, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_35, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_35, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_35, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_35, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_35, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_35, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_35, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_35, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_35, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_35, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_35, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_35, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_35, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_35, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_35, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_35, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_35, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_35, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_35, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_35, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_35, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_35, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_35, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_35, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_35, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_35, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_35, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_35, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_35, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_35, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1502_35 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_boss_1 = false;
    once_condition_1632_35 = false;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1559_35 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1364_14 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    once_condition_1630_35 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    not_always_1408_35 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    not_always_449_13 = loop_count;
    not_always_1848_15 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1845_15 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_1583_35 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_64_0 = loop_count;
    not_always_250_35 = loop_count;
    not_always_44_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    once_condition_1633_35 = false;
    not_always_100_0 = loop_count;
    not_always_1599_35 = loop_count;
    not_always_1407_35 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1404_35 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1800_35 = false;
    not_always_1587_35 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    group_main_engine_interface_and_post_processing_methods_all_shields_1 = true;
    once_condition_1628_35 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1485_35 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1552_35 = loop_count;
    not_always_1584_35 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    once_condition_1517_23 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    once_condition_1522_28 = false;
    not_always_46_13 = loop_count;
    not_always_1471_35 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1409_35 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1406_35 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    once_condition_1454_35 = false;
    not_always_101_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1551_35 = false;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1503_35 = loop_count;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    group_main_engine_level_specific_methods_hub_area_1 = true;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1421_13 = loop_count;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_1557_35 = loop_count;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1526_35 = loop_count;
    not_always_69_13 = loop_count;
    not_always_1425_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    once_condition_1638_35 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    once_condition_1634_35 = false;
    not_always_234_13 = loop_count;
    once_condition_1635_35 = false;
    not_always_1476_35 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_1528_13 = loop_count;
    once_condition_1631_35 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1405_35 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1499_35 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_1768_35 = false;
    once_condition_2028_35 = false;
    not_always_1717_17 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_main_engine_level_specific_methods_bosses_cannon_fire_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    once_condition_1455_35 = false;
    group_main_engine_level_specific_methods_bosses_boss_prince_dail_1 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    once_condition_1636_35 = false;
    not_always_1564_35 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
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
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    once_condition_1798_35 = false;
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    not_always_2032_35 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_1506_35 = loop_count;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    once_condition_1523_28 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1573_35 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    once_condition_1672_35 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    not_always_1148_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_8588()
{
    // event 1595_36
    {
        if (!(group_main_engine_1)) goto event_1595_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1595_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.sub(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1595_36_end: ;
}
void Frames::loop_cacteon_floor_36()
{
    event_func_8588();
}
void Frames::event_func_8589()
{
    // event 1430_36
    {
        if (!(group_main_engine_1)) goto event_1430_36_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1430_36_end;
        FrameObject * single_instance_1430_36_0; single_instance_1430_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickcannonbase_2198_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1430_36_0 == NULL)
                    single_instance_1430_36_0 = new_obj;
            }
        }
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)((Active*)single_instance_1430_36_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1430_36_0))->force_frame(90+((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->alterables->values.get(0)*-1);
    }
    event_1430_36_end: ;
}
void Frames::event_func_8590()
{
    // event 1504_36
    {
        if (!(group_main_engine_1)) goto event_1504_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1504_36_end;
        FrameObject * single_instance_1504_36_0; single_instance_1504_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1504_36_0 == NULL)
                    single_instance_1504_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1504_36_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1504_36_0))->force_frame(65+((Active*)get_single(enemydrone_2222_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1504_36_end: ;
}
void Frames::event_func_8591()
{
    // event 1547_36
    {
        if (!(group_main_engine_1)) goto event_1547_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1547_36_end;
        FrameObject * single_instance_1547_36_0; single_instance_1547_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrotorblade_2205_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1547_36_0 == NULL)
                    single_instance_1547_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1547_36_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1547_36_0))->force_frame(75+((Active*)get_single(enemyrotorblade_2205_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1547_36_end: ;
}
void Frames::event_func_8592()
{
    // event 1565_36
    {
        if (!(group_main_engine_1)) goto event_1565_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1565_36_end;
        FrameObject * single_instance_1565_36_0; single_instance_1565_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1565_36_0 == NULL)
                    single_instance_1565_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1565_36_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1565_36_0))->force_frame(85+((Active*)get_single(enemyhoppermkii_2200_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1565_36_end: ;
}
void Frames::loop_spawndebris_36()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_8589();
    event_func_8590();
    event_func_8591();
    event_func_8592();
}
void Frames::event_func_8593()
{
    // event 1596_36
    {
        if (!(group_main_engine_1)) goto event_1596_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1596_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, 1.6);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1596_36_end: ;
}
void Frames::event_func_8594()
{
    // event 1597_36
    {
        if (!(group_main_engine_1)) goto event_1597_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1597_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, -1.6);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1597_36_end: ;
}
void Frames::loop_cacteon_36()
{
    event_func_8593();
    event_func_8594();
}
void Frames::event_func_8595()
{
    // event 1649_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1649_36_end;
        if (!((global_values->get(26)) == (0))) goto event_1649_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1649_36_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1649_36_end: ;
}
void Frames::event_func_8596()
{
    // event 1650_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1650_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1650_36_end: ;
}
void Frames::event_func_8597()
{
    // event 1651_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1651_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1651_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1651_36_end: ;
}
void Frames::event_func_8598()
{
    // event 1683_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1683_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1683_36_end: ;
}
void Frames::loop_voice_36()
{
    event_func_8595();
    event_func_8596();
    event_func_8597();
    event_func_8598();
}
void Frames::loop_wrapper_sound_hurt1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_36(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_36(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_36(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_36(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_36(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_36(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_36(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_36(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_36(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_play_music_6_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_sound_go0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_36(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_28();
}
void Frames::loop_wrapper_sound_explode3_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_36(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_36(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_36(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_8599()
{
    // event 1573_36
    {
        if (!(group_main_engine_1)) goto event_1573_36_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(3))) goto event_1573_36_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1573_36_end;
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 15);
        {
            ((Active*)col_instance_2)->set_shader(Render::INVERT);
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, ((Active*)col_instance_1)->alterables->values.get(0));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, ((Active*)col_instance_1)->alterables->values.get(1));
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
    }
    event_1573_36_end: ;
}
void Frames::col_0_36()
{
    event_func_8599();
}
void Frames::event_func_8600()
{
    // event 1525_36
    {
        if (!(group_main_engine_1)) goto event_1525_36_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1525_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1525_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.add(3, 180);
    }
    event_1525_36_end: ;
}
void Frames::col_3_36()
{
    event_func_8600();
}
void Frames::event_func_8601()
{
    // event 1605_36
    {
        if (!(group_main_engine_1)) goto event_1605_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 30);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, 0);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, ((Active*)col_instance_1)->alterables->values.get(0));
    }
    event_1605_36_end: ;
}
void Frames::col_8_36()
{
    event_func_8601();
}
void Frames::event_func_8602()
{
    // event 1433_36
    {
        if (!(group_main_engine_1)) goto event_1433_36_end;
        FrameObject * single_instance_1433_36_0; single_instance_1433_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + -16, ((Active*)col_instance_1)->y + -16), ((Active*)col_instance_1)->layer);
            if (single_instance_1433_36_0 == NULL)
                single_instance_1433_36_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1433_36_0))->force_frame(9);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1433_36_end: ;
}
