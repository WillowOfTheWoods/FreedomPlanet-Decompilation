#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1418()
{
    // event 181_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_181_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_181_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_181_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_181_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))) < (45.0))) goto event_181_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*get_max(0.175, (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))/math_helper/((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(3))))%math_helper%360);
    }
    event_181_13_end: ;
}
void Frames::event_func_1419()
{
    // event 182_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_182_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_182_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_182_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_182_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))) >= (45.0))) goto event_182_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)%math_helper%360);
    }
    event_182_13_end: ;
}
void Frames::event_func_1420()
{
    // event 183_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_183_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_183_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_183_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_183_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)%math_helper%360);
    }
    event_183_13_end: ;
}
void Frames::event_func_1421()
{
    // event 186_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_186_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_186_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) >= (75.0))) goto event_186_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) <= (285.0))) goto event_186_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (0.4+get_abs(get_min(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)), 0))*2))) goto event_186_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*(0-sin_deg(get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)))));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*(cos_deg(get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)))));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_186_13_end: ;
}
void Frames::event_func_1422()
{
    // event 187_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_187_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_187_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (0))) goto event_187_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*(0-sin_deg(get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)))));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*(cos_deg(get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)))));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_187_13_end: ;
}
void Frames::event_func_1423()
{
    // event 188_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_188_13_end;
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_188_13_end: ;
}
void Frames::event_func_1424()
{
    // event 189_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_189_13_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_13();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_189_13_end: ;
}
void Frames::event_func_1425()
{
    // event 190_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_190_13_end;
        player_389_instances.clear_selection();
        layerchangeto0_405_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeto0_405_instances)) goto event_190_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 0);
    }
    event_190_13_end: ;
}
void Frames::event_func_1426()
{
    // event 191_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_191_13_end;
        player_389_instances.clear_selection();
        layerchangeto1_406_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeto1_406_instances)) goto event_191_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
    }
    event_191_13_end: ;
}
void Frames::event_func_1427()
{
    // event 192_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_192_13_end;
        player_389_instances.clear_selection();
        layerchangeswitch_404_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeswitch_404_instances)) goto event_192_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_192_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
    }
    event_192_13_end: ;
}
void Frames::event_func_1428()
{
    // event 193_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_193_13_end;
        player_389_instances.clear_selection();
        layerchangeswitch_404_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeswitch_404_instances)) goto event_193_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_193_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 0);
    }
    event_193_13_end: ;
}
void Frames::event_func_1429()
{
    // event 194_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_194_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(15)) == (0))) goto event_194_13_end;
        qualifier_10.clear_selection();
        for (QualifierIterator it(qualifier_10); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        // icache destruction
        sbloop2_2210_instances.clear_selection();
        active2_2271_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        active_2270_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        for (QualifierIterator it(qualifier_11); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_194_13_end: ;
}
void Frames::event_func_1430()
{
    // event 195_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_195_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(15)) == (1))) goto event_195_13_end;
        qualifier_10.clear_selection();
        for (QualifierIterator it(qualifier_10); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        // icache destruction
        sbloop2_2210_instances.clear_selection();
        active2_2271_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        active_2270_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        for (QualifierIterator it(qualifier_11); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_195_13_end: ;
}
void Frames::event_func_1431()
{
    // event 196_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_196_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.disable(5);
    }
    event_196_13_end: ;
}
void Frames::event_func_1432()
{
    // event 197_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_197_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (80))) goto event_197_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (280))) goto event_197_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.enable(5);
    }
    event_197_13_end: ;
}
void Frames::event_func_1433()
{
    // event 198_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_198_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_198_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_198_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_198_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_198_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_198_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*5), 0.0));
    }
    event_198_13_end: ;
}
void Frames::event_func_1434()
{
    // event 199_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_199_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_199_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_199_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_199_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_199_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_199_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*5), 0.0));
    }
    event_199_13_end: ;
}
void Frames::event_func_1435()
{
    // event 200_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_200_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_200_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_200_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (2))) goto event_200_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_200_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_200_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_200_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*4), 0.0));
    }
    event_200_13_end: ;
}
void Frames::event_func_1436()
{
    // event 201_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_201_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_201_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_201_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (2))) goto event_201_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_201_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_201_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_201_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*4), 0.0));
    }
    event_201_13_end: ;
}
void Frames::event_func_1437()
{
    // event 202_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_202_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (4))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_202_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_202_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_202_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4));
    }
    event_202_13_end: ;
}
void Frames::event_func_1438()
{
    // event 203_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_203_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (4))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_203_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_203_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_203_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4));
    }
    event_203_13_end: ;
}
void Frames::event_func_1439()
{
    // event 204_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_204_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) < (0))) goto event_204_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)+1, 0));
    }
    event_204_13_end: ;
}
void Frames::event_func_1440()
{
    // event 205_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_205_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) > (0))) goto event_205_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)-1, 0));
    }
    event_205_13_end: ;
}
void Frames::event_func_1441()
{
    // event 206_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_206_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (4))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_206_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_206_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (2))) goto event_206_13_end;
        if (!(((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.is_off(5))) goto event_206_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_206_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*8), 2));
    }
    event_206_13_end: ;
}
void Frames::event_func_1442()
{
    // event 207_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_207_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (4))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_207_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_207_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (2))) goto event_207_13_end;
        if (!(((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.is_off(5))) goto event_207_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_207_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*8), 0-2));
    }
    event_207_13_end: ;
}
void Frames::event_func_1443()
{
    // event 208_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_208_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_208_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_208_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_208_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_208_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_208_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4));
    }
    event_208_13_end: ;
}
void Frames::event_func_1444()
{
    // event 209_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_209_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_209_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_209_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (2))) goto event_209_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_209_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) >= (0))) goto event_209_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*4, 2));
    }
    event_209_13_end: ;
}
void Frames::event_func_1445()
{
    // event 210_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_210_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_210_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_210_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_210_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_210_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_210_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4));
    }
    event_210_13_end: ;
}
void Frames::event_func_1446()
{
    // event 211_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_211_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_211_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_211_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-2))) goto event_211_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_211_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(14)) <= (0))) goto event_211_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*4, -2));
    }
    event_211_13_end: ;
}
void Frames::event_func_1447()
{
    // event 212_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_212_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_212_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_212_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_212_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_212_13_end: ;
}
void Frames::event_func_1448()
{
    // event 213_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_213_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_213_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_213_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_213_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_213_13_end: ;
}
void Frames::event_func_1449()
{
    // event 214_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_214_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_214_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_214_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_214_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_214_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_214_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0), 80));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_13();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_214_13_end: ;
}
void Frames::event_func_1450()
{
    // event 215_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_215_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_215_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_215_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_215_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_215_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_13();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_215_13_end: ;
}
void Frames::event_func_1451()
{
    // event 216_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_216_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_216_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_216_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_216_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_216_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_216_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0), 80));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_13();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_216_13_end: ;
}
void Frames::event_func_1452()
{
    // event 217_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_217_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_217_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_217_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_217_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_217_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_13();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_217_13_end: ;
}
void Frames::event_func_1453()
{
    // event 220_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_220_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_220_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+16))) goto event_220_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+16);
    }
    event_220_13_end: ;
}
void Frames::event_func_1454()
{
    // event 221_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_221_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_221_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-16))) goto event_221_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) != (2))) goto event_221_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-16);
    }
    event_221_13_end: ;
}
void Frames::event_func_1455()
{
    // event 222_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_222_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_222_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)+32))) goto event_222_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (2))) goto event_222_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)+32);
    }
    event_222_13_end: ;
}
void Frames::event_func_1456()
{
    // event 223_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_223_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_223_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_223_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_223_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_223_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (35))) goto event_223_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (325))) goto event_223_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(5)*0.38);
    }
    event_223_13_end: ;
}
void Frames::event_func_1457()
{
    // event 224_13
    bool or_result_224_13 = false;
    bool or_temp_result_224_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto or_event_224_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_224_13_0_end;
        if (!((((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)) == (0))) goto or_event_224_13_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (180))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_224_13_0_end;
        or_result_224_13 = true;
        or_temp_result_224_13_0 = true;
    }
    or_event_224_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_224_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 224_13
    bool or_temp_result_224_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto or_event_224_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_224_13_1_end;
        if (!((((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)) == (0))) goto or_event_224_13_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (360-45))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_224_13_1_end;
        or_result_224_13 = true;
        or_temp_result_224_13_1 = true;
        or_event_224_13_1_end: ;
        if (or_temp_result_224_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_224_13) goto or_final_or_event_224_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_224_13_0 || or_temp_result_224_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-sin_deg(((Active*)*it)->alterables->values.get(13))*((Active*)*it)->alterables->values.get(5)*0.38);
        }
    }
    or_final_or_event_224_13_1_end: ;
}
void Frames::event_func_1458()
{
    // event 225_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_225_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_225_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)))) goto event_225_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_225_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (35))) goto event_225_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (325))) goto event_225_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(5));
    }
    event_225_13_end: ;
}
void Frames::event_func_1459()
{
    // event 226_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_226_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_226_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(8));
    }
    event_226_13_end: ;
}
void Frames::event_func_1460()
{
    // event 227_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_227_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_227_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_227_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-4))) goto event_227_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (0.125))) goto event_227_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(19));
    }
    event_227_13_end: ;
}
void Frames::event_func_1461()
{
    // event 228_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_228_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_228_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_228_13_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_228_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_228_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_228_13_end: ;
}
void Frames::event_func_1462()
{
    // event 229_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_229_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_229_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_229_13_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_229_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_229_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_229_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_13();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_229_13_end: ;
}
void Frames::event_func_1463()
{
    // event 230_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_230_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_230_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_230_13_end: ;
}
void Frames::event_func_1464()
{
    // event 231_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_231_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)+32))) goto event_231_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_231_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)+32);
    }
    event_231_13_end: ;
}
void Frames::event_func_1465()
{
    // event 232_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_232_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_232_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (-32))) goto event_232_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, -32);
    }
    event_232_13_end: ;
}
void Frames::event_func_1466()
{
    // event 233_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_233_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) > (0))) goto event_233_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(10, 1);
            group_main_engine_global_methods_player_player_control_control_1 = false;
    
            group_main_engine_global_methods_player_player_movement_1 = false;
    
    }
    event_233_13_end: ;
}
void Frames::event_func_1467()
{
    // event 234_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_234_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_234_13_end;
        if (not_always_234_13 > loop_count) {
            not_always_234_13 = loop_count + 2;
            goto event_234_13_end;
        }
        not_always_234_13 = loop_count + 2;
        if (!group_main_engine_global_methods_player_player_control_control_1) {
            group_main_engine_global_methods_player_player_control_control_1 = true;
        }
        if (!group_main_engine_global_methods_player_player_movement_1) {
            group_main_engine_global_methods_player_player_movement_1 = true;
        }
    }
    event_234_13_end: ;
}
void Frames::event_func_1468()
{
    // event 235_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_235_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_235_13_end;
        if (not_always_235_13 > loop_count) {
            not_always_235_13 = loop_count + 2;
            goto event_235_13_end;
        }
        not_always_235_13 = loop_count + 2;
        ((Active*)get_instance(guienergy_124_instances))->set_visible(false);
            group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    
        if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) {
            group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = true;
        }
    }
    event_235_13_end: ;
}
void Frames::event_func_1469()
{
    // event 236_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_236_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_236_13_end;
        if (not_always_236_13 > loop_count) {
            not_always_236_13 = loop_count + 2;
            goto event_236_13_end;
        }
        not_always_236_13 = loop_count + 2;
        ((Active*)get_instance(guienergy_124_instances))->set_visible(false);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    
        if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) {
            group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = true;
        }
    }
    event_236_13_end: ;
}
void Frames::event_func_1470()
{
    // event 237_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_237_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_237_13_end;
        if (not_always_237_13 > loop_count) {
            not_always_237_13 = loop_count + 2;
            goto event_237_13_end;
        }
        not_always_237_13 = loop_count + 2;
            group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    
        if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) {
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = true;
        }
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        spread_value(guikeystone_455_instances, 0, 0);
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10+((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_237_13_end: ;
}
void Frames::event_func_1471()
{
    // event 238_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_238_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_238_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_238_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_238_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_238_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_238_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_238_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+0.4, 100));
    }
    event_238_13_end: ;
}
void Frames::event_func_1472()
{
    // event 239_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_239_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(13)) > (0))) goto event_239_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.sub(13, 1);
    }
    event_239_13_end: ;
}
void Frames::event_func_1473()
{
    // event 240_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_240_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_240_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_240_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_240_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_240_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_240_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+1, 100));
    }
    event_240_13_end: ;
}
void Frames::event_func_1474()
{
    // event 241_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_241_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_241_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_241_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_241_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_241_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_241_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_241_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+0.25, 100));
    }
    event_241_13_end: ;
}
void Frames::event_func_1475()
{
    // event 242_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_242_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_242_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_242_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_242_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_242_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_242_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+0.5);
    }
    event_242_13_end: ;
}
void Frames::event_func_1476()
{
    // event 243_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_243_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_243_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_243_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_243_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_243_13_end: ;
}
void Frames::event_func_1477()
{
    // event 244_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_244_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_244_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_244_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_244_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+1.5);
    }
    event_244_13_end: ;
}
void Frames::event_func_1478()
{
    // event 245_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_245_13_end;
        if (!(((Active*)get_instance(guienergy_124_instances))->alterables->flags.is_on(1))) goto event_245_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_245_13_end;
        ((Active*)get_instance(guienergy_124_instances))->force_animation(0);
        ((Active*)get_instance(guienergy_124_instances))->force_animation(8);
    }
    event_245_13_end: ;
}
void Frames::event_func_1479()
{
    // event 246_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_246_13_end;
        if (!(((Active*)get_instance(guienergy_124_instances))->alterables->flags.is_on(1))) goto event_246_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->flags.disable(1);
    }
    event_246_13_end: ;
}
void Frames::event_func_1480()
{
    // event 247_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_247_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) > (100))) goto event_247_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
    }
    event_247_13_end: ;
}
void Frames::event_func_1481()
{
    // event 248_13
    bool or_result_248_13 = false;
    bool or_temp_result_248_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_248_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_248_13_0_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_248_13_0_end;
        or_result_248_13 = true;
        or_temp_result_248_13_0 = true;
    }
    or_event_248_13_0_end: ;
    guienergy_124_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_248_13_0) {
        guienergy_124_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 248_13
    bool or_temp_result_248_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_248_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_248_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_248_13_1_end;
        or_result_248_13 = true;
        or_temp_result_248_13_1 = true;
    }
    or_event_248_13_1_end: ;
    if (or_temp_result_248_13_1) {
        guienergy_124_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 248_13
    bool or_temp_result_248_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_248_13_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_248_13_2_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_248_13_2_end;
        or_result_248_13 = true;
        or_temp_result_248_13_2 = true;
        or_event_248_13_2_end: ;
        if (or_temp_result_248_13_2) {
            guienergy_124_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_248_13) goto or_final_or_event_248_13_2_end;
        playermovementvalues_245_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        if (or_temp_result_248_13_0 || or_temp_result_248_13_1 || or_temp_result_248_13_2) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_248_13_0 || or_temp_result_248_13_1 || or_temp_result_248_13_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_FULLENERGY_26, -1, 1);
    }
    or_final_or_event_248_13_2_end: ;
}
void Frames::event_func_1482()
{
    // event 249_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_249_13_end;
        if (((Active*)get_instance(guienergy_124_instances))->test_animation(7)) goto event_249_13_end;
        if (((Active*)get_instance(guienergy_124_instances))->test_animation(11)) goto event_249_13_end;
        if (!(((Active*)get_instance(guienergy_124_instances))->alterables->flags.is_on(0))) goto event_249_13_end;
        ((Active*)get_instance(guienergy_124_instances))->force_animation(1);
    }
    event_249_13_end: ;
}
void Frames::event_func_1483()
{
    // event 250_13
    bool or_result_250_13 = false;
    bool or_temp_result_250_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_250_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_250_13_0_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_250_13_0_end;
        or_result_250_13 = true;
        or_temp_result_250_13_0 = true;
    }
    or_event_250_13_0_end: ;
    guienergy_124_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_250_13_0) {
        guienergy_124_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 250_13
    bool or_temp_result_250_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_250_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_250_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_250_13_1_end;
        or_result_250_13 = true;
        or_temp_result_250_13_1 = true;
    }
    or_event_250_13_1_end: ;
    if (or_temp_result_250_13_1) {
        guienergy_124_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 250_13
    bool or_temp_result_250_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_250_13_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_250_13_2_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_250_13_2_end;
        or_result_250_13 = true;
        or_temp_result_250_13_2 = true;
        or_event_250_13_2_end: ;
        if (or_temp_result_250_13_2) {
            guienergy_124_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_250_13) goto or_final_or_event_250_13_2_end;
        playermovementvalues_245_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        if (or_temp_result_250_13_0 || or_temp_result_250_13_1 || or_temp_result_250_13_2) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_250_13_0 || or_temp_result_250_13_1 || or_temp_result_250_13_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->force_animation(0);
        }
    }
    or_final_or_event_250_13_2_end: ;
}
void Frames::event_func_1484()
{
    // event 251_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_251_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_251_13_end;
        if (!((effectscolordot_308_instances.size()) == (0))) goto event_251_13_end;
        FrameObject * single_instance_251_13_0; single_instance_251_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectscolordot_308(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_251_13_0 == NULL)
                    single_instance_251_13_0 = new_obj;
            }
        }
    }
    event_251_13_end: ;
}
void Frames::event_func_1485()
{
    // event 252_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_252_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_252_13_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->get_angle())*-8);
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+cos_deg(((Active*)get_instance(playerskinsash_418_instances))->get_angle())*-8);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-20, 0);
        }
        ((Active*)get_instance(guienergy_124_instances))->force_animation(11);
    }
    event_252_13_end: ;
}
void Frames::event_func_1486()
{
    // event 253_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_253_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(8))) goto event_253_13_end;
        if (!((effectscolordot_308_instances.size()) > (0))) goto event_253_13_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_253_13_end: ;
}
void Frames::event_func_1487()
{
    // event 254_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_254_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_254_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) == (0))) goto event_254_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
    }
    event_254_13_end: ;
}
void Frames::event_func_1488()
{
    // event 255_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_255_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_255_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (2+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)))) goto event_255_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-0.4, 2+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)));
    }
    event_255_13_end: ;
}
void Frames::event_func_1489()
{
    // event 256_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_256_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_256_13_end;
        if (!media.is_sample_playing(SOUND_CAROL_WILDKICK_415)) goto event_256_13_end;
        media.stop_sample(SOUND_CAROL_WILDKICK_415);
    }
    event_256_13_end: ;
}
void Frames::event_func_1490()
{
    // event 257_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_charge_attack_1)) goto event_257_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_257_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) >= (0))) goto event_257_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_257_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(20, 1);
    }
    event_257_13_end: ;
}
void Frames::event_func_1491()
{
    // event 258_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_charge_attack_1)) goto event_258_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) < (0))) goto event_258_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_258_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(20, 1);
    }
    event_258_13_end: ;
}
void Frames::event_func_1492()
{
    // event 259_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_charge_attack_1)) goto event_259_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) == (20))) goto event_259_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(20, 1);
        {
            loop_color_dots_running = true;
            int times = int(4);
            loop_color_dots_index = 0;
            while (loop_color_dots_index < times) {
                loop_color_dots_13();
                if (!loop_color_dots_running) break;
                loop_color_dots_index++;
            }
        }
    }
    event_259_13_end: ;
}
void Frames::event_func_1493()
{
    // event 260_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_charge_attack_1)) goto event_260_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) > (0))) goto event_260_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) < (70))) goto event_260_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_260_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(20, 0);
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_260_13_end: ;
}
void Frames::event_func_1494()
{
    // event 261_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_charge_attack_1)) goto event_261_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(20)) >= (70))) goto event_261_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_261_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(20, -2);
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_261_13_end: ;
}
void Frames::event_func_1495()
{
    // event 262_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_262_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    
    }
    event_262_13_end: ;
}
void Frames::event_func_1496()
{
    // event 263_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_263_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_263_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = true;
        }
    }
    event_263_13_end: ;
}
void Frames::event_func_1497()
{
    // event 264_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_264_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (1))) goto event_264_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = true;
        }
    }
    event_264_13_end: ;
}
void Frames::event_func_1498()
{
    // event 265_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_265_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (2))) goto event_265_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = true;
        }
    }
    event_265_13_end: ;
}
void Frames::event_func_1499()
{
    // event 266_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_266_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (3))) goto event_266_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = true;
        }
    }
    event_266_13_end: ;
}
void Frames::event_func_1500()
{
    // event 267_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_267_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (4))) goto event_267_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = true;
        }
    }
    event_267_13_end: ;
}
void Frames::event_func_1501()
{
    // event 268_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_268_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_268_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) {
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
    }
    event_268_13_end: ;
}
void Frames::event_func_1502()
{
    // event 269_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_269_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (6))) goto event_269_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
    }
    event_269_13_end: ;
}
void Frames::event_func_1503()
{
    // event 270_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_270_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (8))) goto event_270_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = true;
        }
    }
    event_270_13_end: ;
}
void Frames::event_func_1504()
{
    // event 271_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_271_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_271_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) {
            group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = true;
        }
    }
    event_271_13_end: ;
}
void Frames::event_func_1505()
{
    // event 272_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_272_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (10))) goto event_272_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) {
            group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = true;
        }
    }
    event_272_13_end: ;
}
void Frames::event_func_1506()
{
    // event 273_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_273_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_273_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = true;
        }
    }
    event_273_13_end: ;
}
void Frames::event_func_1507()
{
    // event 274_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_274_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (12))) goto event_274_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = true;
        }
    }
    event_274_13_end: ;
}
void Frames::event_func_1508()
{
    // event 275_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_275_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (19))) goto event_275_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) {
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
    }
    event_275_13_end: ;
}
void Frames::event_func_1509()
{
    // event 276_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_276_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_276_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_276_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) {
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = true;
        }
    }
    event_276_13_end: ;
}
void Frames::event_func_1510()
{
    // event 277_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_277_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_277_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_277_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) {
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = true;
        }
    }
    event_277_13_end: ;
}
void Frames::event_func_1511()
{
    // event 278_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_278_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) {
            group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = true;
        }
    }
    event_278_13_end: ;
}
void Frames::event_func_1512()
{
    // event 279_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_279_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_279_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_279_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) {
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = true;
        }
    }
    event_279_13_end: ;
}
void Frames::event_func_1513()
{
    // event 280_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_280_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) {
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = true;
        }
    }
    event_280_13_end: ;
}
void Frames::event_func_1514()
{
    // event 281_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_281_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_281_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_281_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) {
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = true;
        }
    }
    event_281_13_end: ;
}
void Frames::event_func_1515()
{
    // event 282_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_282_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (22))) goto event_282_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) {
            group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = true;
        }
    }
    event_282_13_end: ;
}
void Frames::event_func_1516()
{
    // event 283_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_283_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (25))) goto event_283_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = true;
        }
    }
    event_283_13_end: ;
}
void Frames::event_func_1517()
{
    // event 284_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_284_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_284_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) {
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = true;
        }
    }
    event_284_13_end: ;
}
