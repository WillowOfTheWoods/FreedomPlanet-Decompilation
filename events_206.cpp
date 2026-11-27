#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16165()
{
    // event 159_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_159_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_159_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_159_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_159_73_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_159_73_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_159_73_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_159_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        }
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_73();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13));
    }
    event_159_73_end: ;
}
void Frames::event_func_16166()
{
    // event 161_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_161_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_161_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_161_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_161_73_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_161_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(22, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(10, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_161_73_end: ;
}
void Frames::event_func_16167()
{
    // event 162_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_162_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_162_73_end: ;
}
void Frames::event_func_16168()
{
    // event 163_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_163_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_163_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_163_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (-1.75))) goto event_163_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_163_73_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_163_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 180);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 180);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_163_73_end: ;
}
void Frames::event_func_16169()
{
    // event 164_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_164_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_164_73_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_164_73_end;
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 2);
        }
        {
            loop_player01detectsensoredges_running = true;
            int times = int(1);
            loop_player01detectsensoredges_index = 0;
            while (loop_player01detectsensoredges_index < times) {
                loop_player01detectsensoredges_13();
                if (!loop_player01detectsensoredges_running) break;
                loop_player01detectsensoredges_index++;
            }
        }
    }
    event_164_73_end: ;
}
void Frames::event_func_16170()
{
    // event 165_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_165_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_165_73_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_165_73_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_165_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        }
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_73();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13));
    }
    event_165_73_end: ;
}
void Frames::event_func_16171()
{
    // event 166_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_166_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_166_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (170))) goto event_166_73_end;
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))/math_helper/0.35)*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(9))));
    }
    event_166_73_end: ;
}
void Frames::event_func_16172()
{
    // event 167_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_167_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_167_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (190))) goto event_167_73_end;
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))/math_helper/0.35)*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(9))));
    }
    event_167_73_end: ;
}
void Frames::event_func_16173()
{
    // event 168_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_168_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (3))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_168_73_end;
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(22, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
    }
    event_168_73_end: ;
}
void Frames::event_func_16174()
{
    // event 169_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_169_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) > (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_169_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_169_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_169_73_end: ;
}
void Frames::event_func_16175()
{
    // event 176_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_176_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_176_73_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_176_73_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_176_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        }
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_73();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances, default_active_instance))->alterables->values.get(2));
    }
    event_176_73_end: ;
}
void Frames::event_func_16176()
{
    // event 186_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_186_73_end;
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_186_73_end: ;
}
void Frames::event_func_16177()
{
    // event 187_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_187_73_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_73();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_187_73_end: ;
}
void Frames::event_func_16178()
{
    // event 212_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_212_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_212_73_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_212_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_212_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_212_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_212_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
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
    event_212_73_end: ;
}
void Frames::event_func_16179()
{
    // event 214_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_214_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_214_73_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_214_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_214_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_214_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_214_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
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
    event_214_73_end: ;
}
void Frames::event_func_16180()
{
    // event 225_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_225_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_225_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_225_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-4))) goto event_225_73_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (0.125))) goto event_225_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*((Active*)get_instance(playeractionvaluesb_388_instances, default_active_instance))->alterables->values.get(19));
    }
    event_225_73_end: ;
}
void Frames::event_func_16181()
{
    // event 297_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_manage_actions_1)) goto event_297_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (46))) goto event_297_73_end;
        if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) {
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = true;
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_297_73_end: ;
}
void Frames::event_func_16182()
{
    // event 305_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_305_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_305_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_305_73_end;
        if (!((shieldinstashield_359_instances.size()) == (0))) goto event_305_73_end;
        FrameObject * single_instance_305_73_0; single_instance_305_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_305_73_0 == NULL)
                    single_instance_305_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_305_73_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_305_73_0))->set_direction(24);
    }
    event_305_73_end: ;
}
void Frames::event_func_16183()
{
    // event 308_73
    bool or_result_308_73 = false;
    bool or_temp_result_308_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_308_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_308_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_308_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_308_73_0_end;
        or_result_308_73 = true;
        or_temp_result_308_73_0 = true;
    }
    or_event_308_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_308_73_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 308_73
    bool or_temp_result_308_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_308_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_308_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_308_73_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_308_73_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_308_73_1_end;
        or_result_308_73 = true;
        or_temp_result_308_73_1 = true;
    }
    or_event_308_73_1_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_308_73_1) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinspade_419_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 308_73
    bool or_temp_result_308_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_308_73_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_308_73_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_308_73_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_308_73_2_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_308_73_2_end;
        or_result_308_73 = true;
        or_temp_result_308_73_2 = true;
        or_event_308_73_2_end: ;
        playerskincarol_445_instances.clear_saved_selection();
        if (or_temp_result_308_73_2) {
            playerskincarol_445_instances.save_selection();
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_308_73) goto or_final_or_event_308_73_2_end;
        playerskinspade_419_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_308_73_2) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_308_73_0 || or_temp_result_308_73_1 || or_temp_result_308_73_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_308_73_0 || or_temp_result_308_73_1 || or_temp_result_308_73_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_308_73_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_308_73_0 || or_temp_result_308_73_1 || or_temp_result_308_73_2) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
    }
    or_final_or_event_308_73_2_end: ;
}
void Frames::event_func_16184()
{
    // event 309_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_309_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_309_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) == (500))) goto event_309_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_309_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_309_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)) != (2))) goto event_309_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)) != (4))) goto event_309_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)) != (6))) goto event_309_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()+1+randrange(2));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(9, get_min((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)+1), 8));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1+randrange(2));
        }
    }
    event_309_73_end: ;
}
void Frames::event_func_16185()
{
    // event 310_73
    bool or_result_310_73 = false;
    bool or_temp_result_310_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_310_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_310_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_310_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_310_73_0_end;
        or_result_310_73 = true;
        or_temp_result_310_73_0 = true;
    }
    or_event_310_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_310_73_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 310_73
    bool or_temp_result_310_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_310_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_310_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_310_73_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_310_73_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_310_73_1_end;
        or_result_310_73 = true;
        or_temp_result_310_73_1 = true;
        or_event_310_73_1_end: ;
        playerskinspade_419_instances.clear_saved_selection();
        if (or_temp_result_310_73_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerskinspade_419_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_310_73) goto or_final_or_event_310_73_1_end;
        playerskinspade_419_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_310_73_0 || or_temp_result_310_73_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_310_73_0 || or_temp_result_310_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_310_73_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_310_73_0 || or_temp_result_310_73_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
            ((Active*)*it)->alterables->flags.disable(19);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
    }
    or_final_or_event_310_73_1_end: ;
}
void Frames::event_func_16186()
{
    // event 311_73
    bool or_result_311_73 = false;
    bool or_temp_result_311_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_311_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_311_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_311_73_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_311_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_311_73_0_end;
        or_result_311_73 = true;
        or_temp_result_311_73_0 = true;
    }
    or_event_311_73_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_311_73_0) {
        playerskincarol_445_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 311_73
    bool or_temp_result_311_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_311_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_311_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_311_73_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_311_73_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) != (6))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_311_73_1_end;
        or_result_311_73 = true;
        or_temp_result_311_73_1 = true;
        or_event_311_73_1_end: ;
        playerskinmilla_446_instances.clear_saved_selection();
        if (or_temp_result_311_73_1) {
            playerothers_123_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_311_73) goto or_final_or_event_311_73_1_end;
        playerskinmilla_446_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_311_73_0) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_311_73_0 || or_temp_result_311_73_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_311_73_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_311_73_0 || or_temp_result_311_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_311_73_0 || or_temp_result_311_73_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
            ((Active*)*it)->alterables->flags.disable(19);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
    }
    or_final_or_event_311_73_1_end: ;
}
void Frames::event_func_16187()
{
    // event 312_73
    bool or_result_312_73 = false;
    bool or_temp_result_312_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_312_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_312_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_312_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_312_73_0_end;
        or_result_312_73 = true;
        or_temp_result_312_73_0 = true;
    }
    or_event_312_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_312_73_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 312_73
    bool or_temp_result_312_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_312_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (500))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_312_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_312_73_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_312_73_1_end;
        or_result_312_73 = true;
        or_temp_result_312_73_1 = true;
        or_event_312_73_1_end: ;
        playerskinspade_419_instances.clear_saved_selection();
        if (or_temp_result_312_73_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerskinspade_419_instances.save_selection();
        }
        if (!or_result_312_73) goto or_final_or_event_312_73_1_end;
        playerskinspade_419_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_312_73_0 || or_temp_result_312_73_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_312_73_0 || or_temp_result_312_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_312_73_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_312_73_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
            ((Active*)*it)->alterables->flags.disable(19);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
    }
    or_final_or_event_312_73_1_end: ;
}
void Frames::event_func_16188()
{
    // event 313_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_313_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_313_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) == (500))) goto event_313_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_313_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_313_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()+4);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(9, get_min((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)+1), 8));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
    }
    event_313_73_end: ;
}
void Frames::event_func_16189()
{
    // event 314_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_314_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_314_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) == (500))) goto event_314_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_314_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_314_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()+4);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(9, get_min((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(9)+1), 8));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
    }
    event_314_73_end: ;
}
void Frames::event_func_16190()
{
    // event 317_73
    bool or_result_317_73 = false;
    bool or_temp_result_317_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_317_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_317_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_317_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_317_73_0_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_317_73_0_end;
        or_result_317_73 = true;
        or_temp_result_317_73_0 = true;
    }
    or_event_317_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_317_73_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 317_73
    bool or_temp_result_317_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_317_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_317_73_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_317_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_317_73_1_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_317_73_1_end;
        or_result_317_73 = true;
        or_temp_result_317_73_1 = true;
    }
    or_event_317_73_1_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_317_73_1) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinspade_419_instances.save_selection();
    }
    // event 317_73
    bool or_temp_result_317_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto or_event_317_73_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_317_73_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_317_73_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_317_73_2_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_317_73_2_end;
        or_result_317_73 = true;
        or_temp_result_317_73_2 = true;
        or_event_317_73_2_end: ;
        playerskincarol_445_instances.clear_saved_selection();
        if (or_temp_result_317_73_2) {
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_317_73) goto or_final_or_event_317_73_2_end;
        playerskinspade_419_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_317_73_2) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_317_73_0 || or_temp_result_317_73_1 || or_temp_result_317_73_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_317_73_0 || or_temp_result_317_73_1 || or_temp_result_317_73_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_317_73_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_317_73_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
    }
    or_final_or_event_317_73_2_end: ;
}
void Frames::event_func_16191()
{
    // event 318_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_318_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_318_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_318_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_318_73_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_318_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction((((Active*)get_instance(playerskinsash_418_instances))->get_direction()/math_helper/16)*16);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()/math_helper/16)*16);
        }
    }
    event_318_73_end: ;
}
void Frames::event_func_16192()
{
    // event 319_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_319_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_319_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_319_73_end: ;
}
void Frames::event_func_16193()
{
    // event 322_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_322_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_322_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_322_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_322_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
    }
    event_322_73_end: ;
}
void Frames::event_func_16194()
{
    // event 323_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_323_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_323_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_323_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_323_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
    }
    event_323_73_end: ;
}
void Frames::event_func_16195()
{
    // event 324_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_324_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_324_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_324_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_324_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_324_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
    }
    event_324_73_end: ;
}
void Frames::event_func_16196()
{
    // event 325_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_325_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_325_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_325_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_325_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_325_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
    }
    event_325_73_end: ;
}
void Frames::event_func_16197()
{
    // event 328_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_328_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_328_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_328_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_328_73_end: ;
}
void Frames::event_func_16198()
{
    // event 333_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_333_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_333_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (12))) goto event_333_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (9))) goto event_333_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_333_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-3))) goto event_333_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
    }
    event_333_73_end: ;
}
void Frames::event_func_16199()
{
    // event 336_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_336_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_336_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_336_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_336_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(15)) >= (10))) goto event_336_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_336_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_336_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
    }
    event_336_73_end: ;
}
void Frames::event_func_16200()
{
    // event 337_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_337_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_337_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_337_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_337_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_337_73_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (2))) goto event_337_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_337_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_337_73_end: ;
}
void Frames::event_func_16201()
{
    // event 341_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_341_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_341_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_341_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_341_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_341_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_341_73_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
    }
    event_341_73_end: ;
}
void Frames::event_func_16202()
{
    // event 343_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_343_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_343_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_343_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_343_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_343_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_343_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_343_73_end: ;
}
void Frames::event_func_16203()
{
    // event 354_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_354_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_354_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_354_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_354_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_354_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_354_73_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 32);
    }
    event_354_73_end: ;
}
void Frames::event_func_16204()
{
    // event 369_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_369_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_369_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_369_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_369_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(15)) >= (3))) goto event_369_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_369_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_369_73_end: ;
}
void Frames::event_func_16205()
{
    // event 374_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_374_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_374_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_374_73_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (20))) goto event_374_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 44);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_kick_67+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_374_73_0_end;
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
        dynamic_374_73_0_end: ;
    }
    event_374_73_end: ;
}
void Frames::event_func_16206()
{
    // event 378_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_378_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_378_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_378_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_378_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_378_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_378_73_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 32);
    }
    event_378_73_end: ;
}
void Frames::event_func_16207()
{
    // event 380_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_380_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_380_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(1)))) goto event_380_73_end;
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesa_387_instances.has_selection()) goto event_380_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_single(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(1));
    }
    event_380_73_end: ;
}
void Frames::event_func_16208()
{
    // event 383_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_383_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_383_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_383_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_383_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_383_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_383_73_end: ;
}
void Frames::event_func_16209()
{
    // event 384_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_384_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_384_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_384_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(7)))) goto event_384_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_384_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_384_73_end: ;
}
void Frames::event_func_16210()
{
    // event 388_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_388_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_388_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_388_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_388_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_388_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_388_73_end: ;
}
void Frames::event_func_16211()
{
    // event 396_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_396_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_396_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_396_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_396_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_396_73_end: ;
}
void Frames::event_func_16212()
{
    // event 397_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_397_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_397_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_397_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_397_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_397_73_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
    }
    event_397_73_end: ;
}
void Frames::event_func_16213()
{
    // event 407_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_407_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_407_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_407_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_407_73_0; single_instance_407_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_407_73_0 == NULL)
                    single_instance_407_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_407_73_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        global_values->set(1, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_407_73_0))->alterables->flags.enable(1);
    }
    event_407_73_end: ;
}
void Frames::event_func_16214()
{
    // event 408_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_408_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_408_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_408_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_408_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_408_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_408_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_408_73_end: ;
}
void Frames::event_func_16215()
{
    // event 410_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_410_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_410_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (1))) goto event_410_73_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_410_73_end;
        FrameObject * single_instance_410_73_0; single_instance_410_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_410_73_0 == NULL)
                    single_instance_410_73_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKED_292, -1, 1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)((Active*)single_instance_410_73_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()-1);
        ((Active*)((Active*)single_instance_410_73_0))->force_speed(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)single_instance_410_73_0)->move_back(((Active*)get_instance(playerskinsash_418_instances)));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(2);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_410_73_1_end;
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
        dynamic_410_73_1_end: ;
    }
    event_410_73_end: ;
}
void Frames::event_func_16216()
{
    // event 418_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_418_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_418_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_418_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_418_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 27);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 20);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_418_73_end: ;
}
void Frames::event_func_16217()
{
    // event 421_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_421_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_421_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_421_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(8), 0));
    }
    event_421_73_end: ;
}
void Frames::event_func_16218()
{
    // event 423_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_423_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_423_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_423_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(8), 0));
    }
    event_423_73_end: ;
}
void Frames::event_func_16219()
{
    // event 427_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_427_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_427_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_427_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_427_73_end: ;
}
void Frames::event_func_16220()
{
    // event 429_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_429_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_429_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_429_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(15), 0));
    }
    event_429_73_end: ;
}
void Frames::event_func_16221()
{
    // event 430_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_430_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_430_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_430_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(14), 0));
    }
    event_430_73_end: ;
}
void Frames::event_func_16222()
{
    // event 431_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_431_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_431_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_431_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(15), 0));
    }
    event_431_73_end: ;
}
void Frames::event_func_16223()
{
    // event 432_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_432_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_432_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_432_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(14), 0));
    }
    event_432_73_end: ;
}
void Frames::event_func_16224()
{
    // event 433_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_433_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_433_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_433_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (180))) goto event_433_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(16));
    }
    event_433_73_end: ;
}
void Frames::event_func_16225()
{
    // event 434_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_434_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_434_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_434_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (180))) goto event_434_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(16));
    }
    event_434_73_end: ;
}
void Frames::event_func_16226()
{
    // event 435_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_435_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_435_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_435_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (180))) goto event_435_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(17));
    }
    event_435_73_end: ;
}
void Frames::event_func_16227()
{
    // event 436_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_436_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_436_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_436_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (180))) goto event_436_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(17));
    }
    event_436_73_end: ;
}
void Frames::event_func_16228()
{
    // event 437_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_437_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_437_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    
    }
    event_437_73_end: ;
}
void Frames::event_func_16229()
{
    // event 438_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_438_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_438_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_438_73_end;
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesa_387_instances.has_selection()) goto event_438_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_single(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_single(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_438_73_end: ;
}
void Frames::event_func_16230()
{
    // event 441_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_441_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_441_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_441_73_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_441_73_end;
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesa_387_instances.has_selection()) goto event_441_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_441_73_end: ;
}
void Frames::event_func_16231()
{
    // event 447_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_447_73_end;
        if (not_always_447_73 > loop_count) {
            not_always_447_73 = loop_count + 2;
            goto event_447_73_end;
        }
        not_always_447_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        media.stop_sample(SOUND_BIKE_SKID_162);
    }
    event_447_73_end: ;
}
void Frames::event_func_16232()
{
    // event 452_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_452_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_452_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) <= (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_452_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_452_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_452_73_end: ;
}
void Frames::event_func_16233()
{
    // event 457_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_457_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_457_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_457_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_457_73_end: ;
}
void Frames::event_func_16234()
{
    // event 459_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_459_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_459_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_459_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_459_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_459_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_459_73_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
    }
    event_459_73_end: ;
}
void Frames::event_func_16235()
{
    // event 474_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_474_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_474_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_474_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_474_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_474_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_474_73_end: ;
}
void Frames::event_func_16236()
{
    // event 481_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_481_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_481_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_481_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_481_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_481_73_end: ;
}
void Frames::event_func_16237()
{
    // event 487_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_487_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_487_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_487_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_487_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_487_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_487_73_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 32);
    }
    event_487_73_end: ;
}
void Frames::event_func_16238()
{
    // event 491_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_491_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_491_73_end: ;
}
void Frames::event_func_16239()
{
    // event 494_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_494_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_494_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_494_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4.5);
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_494_73_end: ;
}
void Frames::event_func_16240()
{
    // event 495_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_495_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_495_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) != (0))) goto event_495_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_495_73_end: ;
}
void Frames::event_func_16241()
{
    // event 500_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_500_73_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->test_animation(33))) goto event_500_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_500_73_end: ;
}
void Frames::event_func_16242()
{
    // event 512_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_512_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_512_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_512_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_512_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_512_73_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_512_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_512_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
    }
    event_512_73_end: ;
}
void Frames::event_func_16243()
{
    // event 513_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_513_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_513_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_513_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_513_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_513_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_513_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 3);
    }
    event_513_73_end: ;
}
void Frames::event_func_16244()
{
    // event 519_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_519_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_519_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_519_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_519_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
    }
    event_519_73_end: ;
}
void Frames::event_func_16245()
{
    // event 522_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_522_73_end;
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_73();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_522_73_end: ;
}
void Frames::event_func_16246()
{
    // event 524_73
    bool or_result_524_73 = false;
    bool or_temp_result_524_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_524_73_0_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_524_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_524_73_0_end;
        or_result_524_73 = true;
        or_temp_result_524_73_0 = true;
    }
    or_event_524_73_0_end: ;
    guilifebasemeter_125_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_524_73_0) {
        guilifebasemeter_125_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 524_73
    bool or_temp_result_524_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_524_73_1_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_524_73_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_524_73_1_end;
        or_result_524_73 = true;
        or_temp_result_524_73_1 = true;
    }
    or_event_524_73_1_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_524_73_1) {
        playerskinspade_419_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 524_73
    bool or_temp_result_524_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_524_73_2_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_524_73_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_524_73_2_end;
        or_result_524_73 = true;
        or_temp_result_524_73_2 = true;
    }
    or_event_524_73_2_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_524_73_2) {
        playerskincarol_445_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 524_73
    bool or_temp_result_524_73_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_524_73_3_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_524_73_3_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_524_73_3_end;
        or_result_524_73 = true;
        or_temp_result_524_73_3 = true;
    }
    or_event_524_73_3_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_524_73_3) {
        playerskinmilla_446_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 524_73
    bool or_temp_result_524_73_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_524_73_4_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_524_73_4_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_524_73_4_end;
        or_result_524_73 = true;
        or_temp_result_524_73_4 = true;
        or_event_524_73_4_end: ;
        playerskintorque_450_instances.clear_saved_selection();
        if (or_temp_result_524_73_4) {
            guilifebasemeter_125_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_524_73) goto or_final_or_event_524_73_4_end;
        playerskinspade_419_instances.empty_selection();
        guilifebasemeter_125_instances.empty_selection();
        playerskinmilla_446_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_524_73_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_524_73_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_524_73_3) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_524_73_2) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_524_73_4) {
            playerskintorque_450_instances.restore_selection();
        }
        if (or_temp_result_524_73_0 || or_temp_result_524_73_1 || or_temp_result_524_73_2 || or_temp_result_524_73_3 || or_temp_result_524_73_4) {
            guilifebasemeter_125_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        FrameObject * single_instance_524_73_0; single_instance_524_73_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_524_73_0 == NULL)
                    single_instance_524_73_0 = new_obj;
            }
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_524_73_4_end: ;
}
void Frames::event_func_16247()
{
    // event 547_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_547_73_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_73();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_547_73_end: ;
}
void Frames::event_func_16248()
{
    // event 552_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_552_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) >= (4))) goto event_552_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_552_73_end: ;
}
void Frames::event_func_16249()
{
    // event 600_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_600_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_600_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_600_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_600_73_end: ;
}
void Frames::event_func_16250()
{
    // event 602_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_602_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_602_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_602_73_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_602_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_602_73_0_end;
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
        dynamic_602_73_0_end: ;
    }
    event_602_73_end: ;
}
void Frames::event_func_16251()
{
    // event 603_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_603_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_603_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_603_73_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_603_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_603_73_0_end;
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
        dynamic_603_73_0_end: ;
    }
    event_603_73_end: ;
}
void Frames::event_func_16252()
{
    // event 604_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_604_73_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_604_73_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_604_73_end;
        FrameObject * single_instance_604_73_0; single_instance_604_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_604_73_0 == NULL)
                    single_instance_604_73_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKEU_291, -1, 1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        ((Active*)((Active*)single_instance_604_73_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()+1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(2);
    }
    event_604_73_end: ;
}
void Frames::event_func_16253()
{
    // event 617_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_617_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_617_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_617_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0)*0.7)-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_617_73_end: ;
}
void Frames::event_func_16254()
{
    // event 640_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_640_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_640_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_640_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_640_73_end: ;
}
void Frames::event_func_16255()
{
    // event 658_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_658_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_658_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_658_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_658_73_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_658_73_end;
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_658_73_end: ;
}
void Frames::event_func_16256()
{
    // event 663_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_663_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (44))) goto event_663_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) >= (90))) goto event_663_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) <= (270))) goto event_663_73_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(2)));
            if (dyn_it == (*loops).end()) goto dynamic_663_73_0_end;
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
        dynamic_663_73_0_end: ;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 44);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, get_max(((Active*)*it)->alterables->values.get(14), 1));
        }
    }
    event_663_73_end: ;
}
void Frames::event_func_16257()
{
    // event 679_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_679_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_679_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_679_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_679_73_0; single_instance_679_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_679_73_0 == NULL)
                    single_instance_679_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_679_73_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        global_values->set(1, 2);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_679_73_0))->alterables->flags.enable(1);
    }
    event_679_73_end: ;
}
void Frames::event_func_16258()
{
    // event 684_73
    bool or_result_684_73 = false;
    bool or_temp_result_684_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_684_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_684_73_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_684_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_684_73_0_end;
        or_result_684_73 = true;
        or_temp_result_684_73_0 = true;
    }
    or_event_684_73_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_684_73_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 684_73
    bool or_temp_result_684_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_684_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_684_73_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_684_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_684_73_1_end;
        or_result_684_73 = true;
        or_temp_result_684_73_1 = true;
        or_event_684_73_1_end: ;
        if (or_temp_result_684_73_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_684_73) goto or_final_or_event_684_73_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_684_73_0 || or_temp_result_684_73_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_684_73_0 || or_temp_result_684_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_684_73_0 || or_temp_result_684_73_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 30);
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -8);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
        media.play_id(SOUND_CAROL_BIKEBOOST_2_389, -1, 1);
    }
    or_final_or_event_684_73_1_end: ;
}
void Frames::event_func_16259()
{
    // event 691_73
    bool or_result_691_73 = false;
    bool or_temp_result_691_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_691_73_0_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto or_event_691_73_0_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) == (0))) goto or_event_691_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_691_73_0_end;
        or_result_691_73 = true;
        or_temp_result_691_73_0 = true;
    }
    or_event_691_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_691_73_0) {
        playerothers_123_instances.save_selection();
    }
    // event 691_73
    bool or_temp_result_691_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_691_73_1_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto or_event_691_73_1_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) != (0))) goto or_event_691_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_691_73_1_end;
        or_result_691_73 = true;
        or_temp_result_691_73_1 = true;
        or_event_691_73_1_end: ;
        if (or_temp_result_691_73_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_691_73) goto or_final_or_event_691_73_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_691_73_0 || or_temp_result_691_73_1) {
            playerothers_123_instances.restore_selection();
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(8);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->set_scale(0.7);
        }
    }
    or_final_or_event_691_73_1_end: ;
}
void Frames::event_func_16260()
{
    // event 693_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_693_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(12))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_693_73_end;
        FrameObject * single_instance_693_73_0; single_instance_693_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_693_73_0 == NULL)
                    single_instance_693_73_0 = new_obj;
            }
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)((Active*)single_instance_693_73_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()+2+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_693_73_0))->force_speed(100);
        ((Active*)single_instance_693_73_0)->move_back(((Active*)get_single(playerskincarol_445_instances)));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_693_73_1_end;
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
        dynamic_693_73_1_end: ;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1+randrange(3));
        }
    }
    event_693_73_end: ;
}
void Frames::event_func_16261()
{
    // event 698_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_698_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(12))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_698_73_end;
        FrameObject * single_instance_698_73_0; single_instance_698_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_698_73_0 == NULL)
                    single_instance_698_73_0 = new_obj;
            }
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)((Active*)single_instance_698_73_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()-2);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_698_73_1_end;
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
        dynamic_698_73_1_end: ;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.disable(12);
        }
        media.play_id(SOUND_CAROL_WILDCLAW_2_416, -1, 1);
    }
    event_698_73_end: ;
}
void Frames::event_func_16262()
{
    // event 703_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_703_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_703_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_703_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_703_73_end: ;
}
void Frames::event_func_16263()
{
    // event 715_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_715_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_715_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_715_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_715_73_end: ;
}
void Frames::event_func_16264()
{
    // event 722_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_722_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_722_73_end: ;
}
