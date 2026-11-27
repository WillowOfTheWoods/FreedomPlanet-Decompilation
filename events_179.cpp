#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13978()
{
    // event 1438_65
    {
        if (!(group_main_engine_1)) goto event_1438_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1438_65_end;
        objecttransporternode0_3415_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode0_3415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode0_3415_instances.has_selection()) goto event_1438_65_end;
        if (!((((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0)) != (0))) goto event_1438_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode0_3415_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode0_3415_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, 0);
    }
    event_1438_65_end: ;
}
void Frames::event_func_13979()
{
    // event 1439_65
    {
        if (!(group_main_engine_1)) goto event_1439_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1439_65_end;
        objecttransporternode90_3428_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode90_3428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode90_3428_instances.has_selection()) goto event_1439_65_end;
        if (!((((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0)) != (90))) goto event_1439_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode90_3428_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode90_3428_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, 90);
    }
    event_1439_65_end: ;
}
void Frames::event_func_13980()
{
    // event 1440_65
    {
        if (!(group_main_engine_1)) goto event_1440_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1440_65_end;
        objecttransporternode180_3426_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode180_3426_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode180_3426_instances.has_selection()) goto event_1440_65_end;
        if (!((((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0)) != (180))) goto event_1440_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode180_3426_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode180_3426_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, 180);
    }
    event_1440_65_end: ;
}
void Frames::event_func_13981()
{
    // event 1441_65
    {
        if (!(group_main_engine_1)) goto event_1441_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1441_65_end;
        objecttransporternode270_3417_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode270_3417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode270_3417_instances.has_selection()) goto event_1441_65_end;
        if (!((((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0)) != (270))) goto event_1441_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode270_3417_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode270_3417_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, 270);
    }
    event_1441_65_end: ;
}
void Frames::event_func_13982()
{
    // event 1442_65
    {
        if (!(group_main_engine_1)) goto event_1442_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1442_65_end;
        objecttransporter_3344_instances.clear_selection();
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-28))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-4))) { it.deselect(); continue; }
        }
        if (!objecttransporter_3344_instances.has_selection()) goto event_1442_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporter_3344_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporter_3344_instances, default_active_instance))->get_y()-16);
    }
    event_1442_65_end: ;
}
void Frames::event_func_13983()
{
    // event 1443_65
    bool or_result_1443_65 = false;
    bool or_temp_result_1443_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_65_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_65_0_end;
        or_result_1443_65 = true;
        or_temp_result_1443_65_0 = true;
    }
    or_event_1443_65_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1443_65_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1443_65
    bool or_temp_result_1443_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_65_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) < (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_65_1_end;
        or_result_1443_65 = true;
        or_temp_result_1443_65_1 = true;
    }
    or_event_1443_65_1_end: ;
    if (or_temp_result_1443_65_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1443_65
    bool or_temp_result_1443_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_65_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (height))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_65_2_end;
        or_result_1443_65 = true;
        or_temp_result_1443_65_2 = true;
    }
    or_event_1443_65_2_end: ;
    if (or_temp_result_1443_65_2) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1443_65
    bool or_temp_result_1443_65_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_65_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (width))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_65_3_end;
        or_result_1443_65 = true;
        or_temp_result_1443_65_3 = true;
        or_event_1443_65_3_end: ;
        if (or_temp_result_1443_65_3) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1443_65) goto or_final_or_event_1443_65_3_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1443_65_0 || or_temp_result_1443_65_1 || or_temp_result_1443_65_2 || or_temp_result_1443_65_3) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
            ((Active*)*it)->alterables->values.set(21, 1);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_1443_65_3_end: ;
}
void Frames::event_func_13984()
{
    // event 1444_65
    {
        if (!(group_main_engine_1)) goto event_1444_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1444_65_end;
        if (!(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->flags.is_on(1))) goto event_1444_65_end;
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->set_x(-100);
        FrameObject * single_instance_1444_65_0; single_instance_1444_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitespawnerwave_3336(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_1444_65_0 == NULL)
                    single_instance_1444_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1444_65_0))->alterables->flags.enable(1);
        media.play_id(SOUND_TELEPORT_END_348, -1, 1);
    }
    event_1444_65_end: ;
}
void Frames::event_func_13985()
{
    // event 1445_65
    {
        if (!(group_main_engine_1)) goto event_1445_65_end;
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawnerwave_3336_instances.has_selection()) goto event_1445_65_end;
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+12-((Active*)*it)->alterables->values.get(0)*4);
        }
    }
    event_1445_65_end: ;
}
void Frames::event_func_13986()
{
    // event 1447_65
    {
        if (!(group_main_engine_1)) goto event_1447_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index));
            if (parent == NULL) goto pos_end_1447_65_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1447_65_0: ;
        }
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90, 0);
        }
        hazardzapbeamhitbox_3421_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index));
            if (parent == NULL) goto pos_end_1447_65_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1447_65_1: ;
        }
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90, 0);
        }
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_min(((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index, default_active_instance))->alterables->values.get(2), 1));
        }
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardzapbeamcannon_3420_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1447_65_end: ;
}
void Frames::event_func_13987()
{
    // event 1448_65
    {
        if (!(group_main_engine_1)) goto event_1448_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1448_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 10);
        }
    }
    event_1448_65_end: ;
}
void Frames::event_func_13988()
{
    // event 1449_65
    {
        if (!(group_main_engine_1)) goto event_1449_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1449_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
        }
    }
    event_1449_65_end: ;
}
void Frames::event_func_13989()
{
    // event 1450_65
    {
        if (!(group_main_engine_1)) goto event_1450_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1450_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1450_65_end: ;
}
void Frames::event_func_13990()
{
    // event 1451_65
    {
        if (!(group_main_engine_1)) goto event_1451_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1451_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1451_65_end: ;
}
void Frames::event_func_13991()
{
    // event 1452_65
    {
        if (!(group_main_engine_1)) goto event_1452_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1452_65_end;
        media.play_id(SOUND_ZAPBEAM_360, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1452_65_end: ;
}
void Frames::event_func_13992()
{
    // event 1453_65
    {
        if (!(group_main_engine_1)) goto event_1453_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1453_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 30);
        }
    }
    event_1453_65_end: ;
}
void Frames::event_func_13993()
{
    // event 1454_65
    {
        if (!(group_main_engine_1)) goto event_1454_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (80))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1454_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1454_65_end: ;
}
void Frames::event_func_13994()
{
    // event 1455_65
    {
        if (!(group_main_engine_1)) goto event_1455_65_end;
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamcannon_3420_instances.has_selection()) goto event_1455_65_end;
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1455_65_end: ;
}
void Frames::event_func_13995()
{
    // event 1456_65
    {
        if (!(group_main_engine_1)) goto event_1456_65_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardzapbeamhitbox_3421_instances, playercharactersensor_383_instances)) goto event_1456_65_end;
        if (!check_not_overlap(hazardzapbeamhitbox_3421_instances, playerreflect_447_instances)) goto event_1456_65_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamhitbox_3421_instances.has_selection()) goto event_1456_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1456_65_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1456_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1456_65_end: ;
}
void Frames::event_func_13996()
{
    // event 1457_65
    {
        if (!(group_main_engine_1)) goto event_1457_65_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(hazardzapbeamhitbox_3421_instances, qualifier_20)) goto event_1457_65_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamhitbox_3421_instances.has_selection()) goto event_1457_65_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1457_65_end;
        FrameObject * single_instance_1457_65_0; single_instance_1457_65_0 = pick_random(qualifier_20);
        if (single_instance_1457_65_0 == NULL) goto event_1457_65_end;
        ((Active*)((Active*)single_instance_1457_65_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1457_65_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3-((Active*)get_instance(shieldinstashield_359_instances, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1457_65_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1457_65_0))->alterables->values.sub(0, 5);
        {
            ((Active*)single_instance_1457_65_0)->set_shader(Render::INVERT);
        }
    }
    event_1457_65_end: ;
}
void Frames::event_func_13997()
{
    // event 1458_65
    {
        if (!(group_main_engine_1)) goto event_1458_65_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(hazardzapbeamhitbox_3421_instances, qualifier_20)) goto event_1458_65_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardzapbeamhitbox_3421_instances.has_selection()) goto event_1458_65_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1458_65_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1458_65_end: ;
}
void Frames::event_func_13998()
{
    // event 1459_65
    {
        if (!(group_main_engine_1)) goto event_1459_65_end;
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerreflect_447_instances))->layer->index+1-1);
        }
    }
    event_1459_65_end: ;
}
void Frames::event_func_13999()
{
    // event 1460_65
    {
        if (!(group_main_engine_1)) goto event_1460_65_end;
        hazardzapbeam_3388_instances.clear_selection();
        if (!check_not_overlap(hazardzapbeam_3388_instances, playerreflect_447_instances)) goto event_1460_65_end;
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(((Active*)*it)->y_scale+1, 24));
        }
    }
    event_1460_65_end: ;
}
void Frames::event_func_14000()
{
    // event 1461_65
    {
        if (!(group_main_engine_1)) goto event_1461_65_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        if (!check_not_overlap(hazardzapbeamhitbox_3421_instances, playerreflect_447_instances)) goto event_1461_65_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(((Active*)*it)->y_scale+1, 24));
        }
    }
    event_1461_65_end: ;
}
void Frames::event_func_14001()
{
    // event 1462_65
    {
        if (!(group_main_engine_1)) goto event_1462_65_end;
        hazardzapbeam_3388_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(hazardzapbeam_3388_instances, playerreflect_447_instances)) goto event_1462_65_end;
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(((Active*)*it)->y_scale-1);
        }
    }
    event_1462_65_end: ;
}
void Frames::event_func_14002()
{
    // event 1463_65
    {
        if (!(group_main_engine_1)) goto event_1463_65_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(hazardzapbeamhitbox_3421_instances, playerreflect_447_instances)) goto event_1463_65_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(((Active*)*it)->y_scale-1);
        }
    }
    event_1463_65_end: ;
}
void Frames::event_func_14003()
{
    // event 1464_65
    {
        if (!(group_main_engine_1)) goto event_1464_65_end;
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1464_65_end: ;
}
void Frames::event_func_14004()
{
    // event 1465_65
    {
        if (!(group_main_engine_1)) goto event_1465_65_end;
        hazardspiralsparkmaker_3422_instances.clear_selection();
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%6);
        }
        fdspiralsparktowerlight_3423_instances.clear_selection();
        for (ObjectIterator it(fdspiralsparktowerlight_3423_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%6);
        }
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+sin_deg(((Active*)*it)->alterables->values.get(0))*40);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.4, 3));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+4)%math_helper%360);
        }
    }
    event_1465_65_end: ;
}
void Frames::event_func_14005()
{
    // event 1466_65
    {
        if (!(group_main_engine_1)) goto event_1466_65_end;
        hazardspiralsparkmaker_3422_instances.clear_selection();
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!hazardspiralsparkmaker_3422_instances.has_selection()) goto event_1466_65_end;
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1466_65_end: ;
}
void Frames::event_func_14006()
{
    // event 1467_65
    {
        if (!(group_main_engine_1)) goto event_1467_65_end;
        hazardspiralsparkmaker_3422_instances.clear_selection();
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!hazardspiralsparkmaker_3422_instances.has_selection()) goto event_1467_65_end;
        if (not_always_1467_65 > loop_count) {
            not_always_1467_65 = loop_count + 2;
            goto event_1467_65_end;
        }
        not_always_1467_65 = loop_count + 2;
        media.play_id(SOUND_KUJACKER_ZAP_276, -1, 1);
    }
    event_1467_65_end: ;
}
void Frames::event_func_14007()
{
    // event 1468_65
    {
        if (!(group_main_engine_1)) goto event_1468_65_end;
        hazardspiralsparkmaker_3422_instances.clear_selection();
        for (ObjectIterator it(hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!hazardspiralsparkmaker_3422_instances.has_selection()) goto event_1468_65_end;
        {
            SavedSelection extra_hazardspiralsparkmaker_3422_instances(hazardspiralsparkmaker_3422_instances);
            for (SavedIterator it(extra_hazardspiralsparkmaker_3422_instances); !it.end(); ++it) {
                foreach_instance_st = ((Active*)*it);
                foreach_st_65();
            }
        }
    }
    event_1468_65_end: ;
}
void Frames::event_func_14008()
{
    // event 1471_65
    {
        if (!(group_main_engine_1)) goto event_1471_65_end;
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (3))) { it.deselect(); continue; }
        }
        if (!hazardspiralspark_3375_instances.has_selection()) goto event_1471_65_end;
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1471_65_end: ;
}
void Frames::event_func_14009()
{
    // event 1472_65
    {
        if (!(group_main_engine_1)) goto event_1472_65_end;
        hazardspiralspark_3375_instances.clear_selection();
        fdspiralsparktowerlight_3423_instances.clear_selection();
        if (!check_overlap(hazardspiralspark_3375_instances, fdspiralsparktowerlight_3423_instances)) goto event_1472_65_end;
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 20);
        }
    }
    event_1472_65_end: ;
}
void Frames::event_func_14010()
{
    // event 1473_65
    {
        if (!(group_main_engine_1)) goto event_1473_65_end;
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (35))) { it.deselect(); continue; }
        }
        if (!hazardspiralspark_3375_instances.has_selection()) goto event_1473_65_end;
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1473_65_0; single_instance_1473_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardspiralspark_3375_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1473_65_0 == NULL)
                    single_instance_1473_65_0 = new_obj;
            }
        }
    }
    event_1473_65_end: ;
}
void Frames::event_func_14011()
{
    // event 1475_65
    {
        if (!(group_main_engine_1)) goto event_1475_65_end;
        hazardspiralspark_3375_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardspiralspark_3375_instances, playercharactersensor_383_instances)) goto event_1475_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1475_65_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1475_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1475_65_0; single_instance_1475_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardspiralspark_3375_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1475_65_0 == NULL)
                    single_instance_1475_65_0 = new_obj;
            }
        }
    }
    event_1475_65_end: ;
}
void Frames::event_func_14012()
{
    // event 1478_65
    {
        if (!(group_main_engine_1)) goto event_1478_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1478_65_end: ;
}
void Frames::event_func_14013()
{
    // event 1479_65
    {
        if (!(group_main_engine_1)) goto event_1479_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1479_65_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickdownhillplatform_3427_instances)) goto event_1479_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
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
    event_1479_65_end: ;
}
void Frames::event_func_14014()
{
    // event 1480_65
    {
        if (!(group_main_engine_1)) goto event_1480_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(16)+((Active*)*it)->alterables->values.get(19));
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(17)+((Active*)*it)->alterables->values.get(19)*0.5);
            ((Active*)*it)->alterables->values.add(19, ((Active*)*it)->alterables->values.get(18));
        }
        gimmickdownhillplatformwheel_3413_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatformwheel_3413_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickdownhillplatform_3427_instances, it.current_index));
            if (parent == NULL) goto pos_end_1480_65_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 48);
            pos_end_1480_65_0: ;
        }
        for (ObjectIterator it(gimmickdownhillplatformwheel_3413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(gimmickdownhillplatform_3427_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_single(gimmickdownhillplatform_3427_instances, it.current_index, default_active_instance))->alterables->values.get(18)*1.5, 0);
        }
    }
    event_1480_65_end: ;
}
void Frames::event_func_14015()
{
    // event 1481_65
    {
        if (!(group_main_engine_1)) goto event_1481_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1481_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 1);
            ((Active*)*it)->set_direction(1);
        }
        media.play_id(SOUND_DOWNHILL_PLATFORM_2_361, -1, 1);
    }
    event_1481_65_end: ;
}
void Frames::event_func_14016()
{
    // event 1482_65
    {
        if (!(group_main_engine_1)) goto event_1482_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1482_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, get_min(((Active*)*it)->alterables->values.get(18)+0.2, 15));
        }
    }
    event_1482_65_end: ;
}
void Frames::event_func_14017()
{
    // event 1483_65
    {
        if (!(group_main_engine_1)) goto event_1483_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1483_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, ((Active*)*it)->alterables->values.get(18)*-0.5);
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_DOWNHILL_PLATFORMSTOP_2_362, -1, 1);
    }
    event_1483_65_end: ;
}
void Frames::event_func_14018()
{
    // event 1484_65
    {
        if (!(group_main_engine_1)) goto event_1484_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) <= (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1484_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1484_65_end: ;
}
void Frames::event_func_14019()
{
    // event 1485_65
    {
        if (!(group_main_engine_1)) goto event_1485_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1485_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(20, 2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->flags.disable(3);
        }
        media.play_id(SOUND_DOWNHILL_PLATFORM_2_361, -1, 1);
    }
    event_1485_65_end: ;
}
void Frames::event_func_14020()
{
    // event 1486_65
    {
        if (!(group_main_engine_1)) goto event_1486_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1486_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, get_max(((Active*)*it)->alterables->values.get(18)-0.2, -15));
        }
    }
    event_1486_65_end: ;
}
void Frames::event_func_14021()
{
    // event 1487_65
    {
        if (!(group_main_engine_1)) goto event_1487_65_end;
        gimmickdownhillplatform_3427_instances.clear_selection();
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickdownhillplatform_3427_instances.has_selection()) goto event_1487_65_end;
        for (ObjectIterator it(gimmickdownhillplatform_3427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 0);
            ((Active*)*it)->alterables->values.set(19, 0);
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    event_1487_65_end: ;
}
void Frames::event_func_14022()
{
    // event 1488_65
    {
        if (!(group_main_engine_1)) goto event_1488_65_end;
        breakablefdhangarwallpiece_3374_instances.clear_selection();
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!breakablefdhangarwallpiece_3374_instances.has_selection()) goto event_1488_65_end;
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 8+randrange(70)*0.1);
            ((Active*)*it)->alterables->values.set(3, -4+randrange(81)*0.1);
        }
    }
    event_1488_65_end: ;
}
void Frames::event_func_14023()
{
    // event 1489_65
    {
        if (!(group_main_engine_1)) goto event_1489_65_end;
        breakablefdhangarwallpiece_3374_instances.clear_selection();
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!breakablefdhangarwallpiece_3374_instances.has_selection()) goto event_1489_65_end;
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.3, 15));
        }
    }
    event_1489_65_end: ;
}
void Frames::event_func_14024()
{
    // event 1490_65
    {
        if (!(group_main_engine_1)) goto event_1490_65_end;
        breakablefdhangarwallpiece_3374_instances.clear_selection();
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+60))) { it.deselect(); continue; }
        }
        if (!breakablefdhangarwallpiece_3374_instances.has_selection()) goto event_1490_65_end;
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1490_65_end: ;
}
void Frames::event_func_14025()
{
    // event 1491_65
    {
        if (!(group_main_engine_1)) goto event_1491_65_end;
        breakablefdhangarwallpiece_3374_instances.clear_selection();
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+60))) { it.deselect(); continue; }
        }
        if (!breakablefdhangarwallpiece_3374_instances.has_selection()) goto event_1491_65_end;
        for (ObjectIterator it(breakablefdhangarwallpiece_3374_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1491_65_end: ;
}
void Frames::event_func_14026()
{
    // event 1588_65
    {
        if (!(group_main_engine_1)) goto event_1588_65_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1588_65_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1588_65_0; single_instance_1588_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1588_65_0 == NULL)
                    single_instance_1588_65_0 = new_obj;
            }
        }
        FrameObject * single_instance_1588_65_1; single_instance_1588_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1588_65_1 == NULL)
                    single_instance_1588_65_1 = new_obj;
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
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1588_65_end: ;
}
void Frames::event_func_14027()
{
    // event 1609_65
    {
        if (!(group_main_engine_1)) goto event_1609_65_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1609_65_end;
        FrameObject * single_instance_1609_65_0; single_instance_1609_65_0 = pick_random(enemyelitespawner_3345_instances);
        if (single_instance_1609_65_0 == NULL) goto event_1609_65_end;
        FrameObject * single_instance_1609_65_1; single_instance_1609_65_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyelitemask_2511(((Active*)single_instance_1609_65_0)->x + 0, ((Active*)single_instance_1609_65_0)->y + 0), ((Active*)single_instance_1609_65_0)->layer);
            if (single_instance_1609_65_1 == NULL)
                single_instance_1609_65_1 = new_obj;
        }
        FrameObject * single_instance_1609_65_2; single_instance_1609_65_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyelite_2510(((Active*)single_instance_1609_65_0)->x + 0, ((Active*)single_instance_1609_65_0)->y + 0), ((Active*)single_instance_1609_65_0)->layer);
            if (single_instance_1609_65_2 == NULL)
                single_instance_1609_65_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1609_65_0))->destroy();
        ((Active*)((Active*)single_instance_1609_65_1))->alterables->values.set(5, ((Active*)single_instance_1609_65_1)->get_x());
        ((Active*)((Active*)single_instance_1609_65_1))->alterables->values.set(6, ((Active*)single_instance_1609_65_1)->get_y());
        ((Active*)((Active*)single_instance_1609_65_1))->alterables->flags.enable(16);
    }
    event_1609_65_end: ;
}
void Frames::event_func_14028()
{
    // event 1613_65
    {
        if (!(group_main_engine_1)) goto event_1613_65_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1613_65_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1613_65_0; single_instance_1613_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytankbot_2821(parent->x + 0, parent->y + -38), parent->layer);
                if (single_instance_1613_65_0 == NULL)
                    single_instance_1613_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1613_65_0))->alterables->flags.enable(16);
        ((Active*)((Active*)single_instance_1613_65_0))->move_back();
    }
    event_1613_65_end: ;
}
void Frames::event_func_14029()
{
    // event 1615_65
    {
        if (!(group_main_engine_1)) goto event_1615_65_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1615_65_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1615_65_0; single_instance_1615_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyhopper_1168(parent->x + 0, parent->y + -31), parent->layer);
                if (single_instance_1615_65_0 == NULL)
                    single_instance_1615_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1615_65_0))->alterables->values.set(7, ((Active*)single_instance_1615_65_0)->get_x());
        ((Active*)((Active*)single_instance_1615_65_0))->alterables->values.set(8, ((Active*)single_instance_1615_65_0)->get_y());
        ((Active*)((Active*)single_instance_1615_65_0))->move_back();
    }
    event_1615_65_end: ;
}
void Frames::event_func_14030()
{
    // event 1617_65
    {
        if (!(group_main_engine_1)) goto event_1617_65_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1617_65_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1617_65_0; single_instance_1617_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyfirespitter_1385(parent->x + 0, parent->y + -15), parent->layer);
                if (single_instance_1617_65_0 == NULL)
                    single_instance_1617_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1617_65_0))->move_back();
        ((Active*)((Active*)single_instance_1617_65_0))->alterables->values.set(3, -1);
    }
    event_1617_65_end: ;
}
void Frames::event_func_14031()
{
    // event 1619_65
    {
        if (!(group_main_engine_1)) goto event_1619_65_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1619_65_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1619_65_0; single_instance_1619_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyhoppermkii_2200(parent->x + 0, parent->y + -31), parent->layer);
                if (single_instance_1619_65_0 == NULL)
                    single_instance_1619_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1619_65_0))->alterables->values.set(3, ((Active*)single_instance_1619_65_0)->get_y());
        ((Active*)((Active*)single_instance_1619_65_0))->alterables->values.set(4, ((Active*)single_instance_1619_65_0)->get_y());
        ((Active*)((Active*)single_instance_1619_65_0))->move_back();
    }
    event_1619_65_end: ;
}
void Frames::event_func_14032()
{
    // event 1655_65
    bool or_result_1655_65 = false;
    bool or_temp_result_1655_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1655_65_0_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1655_65_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto or_event_1655_65_0_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1655_65_0_end;
        or_result_1655_65 = true;
        or_temp_result_1655_65_0 = true;
    }
    or_event_1655_65_0_end: ;
    enemyhopper_1168_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1655_65_0) {
        enemyhopper_1168_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1655_65
    bool or_temp_result_1655_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1655_65_1_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1655_65_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto or_event_1655_65_1_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1655_65_1_end;
        or_result_1655_65 = true;
        or_temp_result_1655_65_1 = true;
    }
    or_event_1655_65_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1655_65_1) {
        enemyhopper_1168_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1655_65
    bool or_temp_result_1655_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1655_65_2_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1655_65_2_end;
        or_result_1655_65 = true;
        or_temp_result_1655_65_2 = true;
        or_event_1655_65_2_end: ;
        if (or_temp_result_1655_65_2) {
            enemyhopper_1168_instances.save_selection();
        }
        if (!or_result_1655_65) goto or_final_or_event_1655_65_2_end;
        qualifier_8.empty_selection();
        enemyhopper_1168_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1655_65_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1655_65_0 || or_temp_result_1655_65_1 || or_temp_result_1655_65_2) {
            enemyhopper_1168_instances.restore_selection();
        }
        if (or_temp_result_1655_65_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1655_65_0; single_instance_1655_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1655_65_0 == NULL)
                    single_instance_1655_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1655_65_0))->set_direction(2);
        FrameObject * single_instance_1655_65_1; single_instance_1655_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1655_65_1 == NULL)
                    single_instance_1655_65_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1655_65_2_end: ;
}
void Frames::event_func_14033()
{
    // event 1684_65
    bool or_result_1684_65 = false;
    bool or_temp_result_1684_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1684_65_0_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1684_65_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_7)) goto or_event_1684_65_0_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1684_65_0_end;
        or_result_1684_65 = true;
        or_temp_result_1684_65_0 = true;
    }
    or_event_1684_65_0_end: ;
    enemydrone_2222_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1684_65_0) {
        enemydrone_2222_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1684_65
    bool or_temp_result_1684_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1684_65_1_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1684_65_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_8)) goto or_event_1684_65_1_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1684_65_1_end;
        or_result_1684_65 = true;
        or_temp_result_1684_65_1 = true;
    }
    or_event_1684_65_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1684_65_1) {
        enemydrone_2222_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1684_65
    bool or_temp_result_1684_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1684_65_2_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1684_65_2_end;
        or_result_1684_65 = true;
        or_temp_result_1684_65_2 = true;
        or_event_1684_65_2_end: ;
        if (or_temp_result_1684_65_2) {
            enemydrone_2222_instances.save_selection();
        }
        if (!or_result_1684_65) goto or_final_or_event_1684_65_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemydrone_2222_instances.empty_selection();
        if (or_temp_result_1684_65_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1684_65_0 || or_temp_result_1684_65_1 || or_temp_result_1684_65_2) {
            enemydrone_2222_instances.restore_selection();
        }
        if (or_temp_result_1684_65_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1684_65_0; single_instance_1684_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1684_65_0 == NULL)
                    single_instance_1684_65_0 = new_obj;
            }
        }
        FrameObject * single_instance_1684_65_1; single_instance_1684_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1684_65_1 == NULL)
                    single_instance_1684_65_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1684_65_2_end: ;
}
void Frames::event_func_14034()
{
    // event 1706_65
    bool or_result_1706_65 = false;
    bool or_temp_result_1706_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1706_65_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1706_65_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1706_65_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1706_65_0_end;
        or_result_1706_65 = true;
        or_temp_result_1706_65_0 = true;
    }
    or_event_1706_65_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1706_65_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1706_65
    bool or_temp_result_1706_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1706_65_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1706_65_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1706_65_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1706_65_1_end;
        or_result_1706_65 = true;
        or_temp_result_1706_65_1 = true;
    }
    or_event_1706_65_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1706_65_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1706_65
    bool or_temp_result_1706_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1706_65_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1706_65_2_end;
        or_result_1706_65 = true;
        or_temp_result_1706_65_2 = true;
        or_event_1706_65_2_end: ;
        if (or_temp_result_1706_65_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1706_65) goto or_final_or_event_1706_65_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1706_65_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1706_65_0 || or_temp_result_1706_65_1 || or_temp_result_1706_65_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1706_65_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1706_65_0; single_instance_1706_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1706_65_0 == NULL)
                    single_instance_1706_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1706_65_0))->set_direction(2);
        FrameObject * single_instance_1706_65_1; single_instance_1706_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1706_65_1 == NULL)
                    single_instance_1706_65_1 = new_obj;
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
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1706_65_2_end: ;
}
void Frames::event_func_14035()
{
    // event 1731_65
    bool or_result_1731_65 = false;
    bool or_temp_result_1731_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1731_65_0_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1731_65_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_7)) goto or_event_1731_65_0_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1731_65_0_end;
        or_result_1731_65 = true;
        or_temp_result_1731_65_0 = true;
    }
    or_event_1731_65_0_end: ;
    enemyfirespitter_1385_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1731_65_0) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1731_65
    bool or_temp_result_1731_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1731_65_1_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1731_65_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_8)) goto or_event_1731_65_1_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1731_65_1_end;
        or_result_1731_65 = true;
        or_temp_result_1731_65_1 = true;
    }
    or_event_1731_65_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1731_65_1) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1731_65
    bool or_temp_result_1731_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1731_65_2_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1731_65_2_end;
        or_result_1731_65 = true;
        or_temp_result_1731_65_2 = true;
        or_event_1731_65_2_end: ;
        if (or_temp_result_1731_65_2) {
            enemyfirespitter_1385_instances.save_selection();
        }
        if (!or_result_1731_65) goto or_final_or_event_1731_65_2_end;
        qualifier_8.empty_selection();
        enemyfirespitter_1385_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1731_65_0 || or_temp_result_1731_65_1 || or_temp_result_1731_65_2) {
            enemyfirespitter_1385_instances.restore_selection();
        }
        if (or_temp_result_1731_65_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1731_65_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1731_65_0; single_instance_1731_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1731_65_0 == NULL)
                    single_instance_1731_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1731_65_0))->set_direction(3);
        FrameObject * single_instance_1731_65_1; single_instance_1731_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_65_1 == NULL)
                    single_instance_1731_65_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1731_65_2_end: ;
}
void Frames::event_func_14036()
{
    // event 1745_65
    bool or_result_1745_65 = false;
    bool or_temp_result_1745_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_65_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1745_65_0_end;
        or_result_1745_65 = true;
        or_temp_result_1745_65_0 = true;
    }
    or_event_1745_65_0_end: ;
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1745_65_0) {
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1745_65
    bool or_temp_result_1745_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_65_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1745_65_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, qualifier_7)) goto or_event_1745_65_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1745_65_1_end;
        or_result_1745_65 = true;
        or_temp_result_1745_65_1 = true;
    }
    or_event_1745_65_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1745_65_1) {
        enemyhoppermkii_2200_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1745_65
    bool or_temp_result_1745_65_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_65_2_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1745_65_2_end;
        or_result_1745_65 = true;
        or_temp_result_1745_65_2 = true;
        or_event_1745_65_2_end: ;
        if (or_temp_result_1745_65_2) {
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1745_65) goto or_final_or_event_1745_65_2_end;
        enemyhoppermkii_2200_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1745_65_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1745_65_0 || or_temp_result_1745_65_1 || or_temp_result_1745_65_2) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        FrameObject * single_instance_1745_65_0; single_instance_1745_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1745_65_0 == NULL)
                    single_instance_1745_65_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->values.set(24, -4);
            ((Active*)*it)->alterables->values.add(21, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(6, 6);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1745_65_2_end: ;
}
void Frames::event_func_14037()
{
    // event 1759_65
    {
        if (!(group_main_engine_1)) goto event_1759_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1759_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1759_65_end: ;
}
void Frames::event_func_14038()
{
    // event 1760_65
    {
        if (!(group_main_engine_1)) goto event_1760_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1760_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1760_65_end: ;
}
void Frames::event_func_14039()
{
    // event 1762_65
    {
        if (!(group_main_engine_1)) goto event_1762_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1762_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1762_65_end: ;
}
void Frames::event_func_14040()
{
    // event 1763_65
    {
        if (!(group_main_engine_1)) goto event_1763_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-200))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1763_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1763_65_end: ;
}
void Frames::event_func_14041()
{
    // event 1764_65
    {
        if (!(group_main_engine_1)) goto event_1764_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1764_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1764_65_end: ;
}
void Frames::event_func_14042()
{
    // event 1765_65
    {
        if (!(group_main_engine_1)) goto event_1765_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1765_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_1765_65_end: ;
}
void Frames::event_func_14043()
{
    // event 1766_65
    {
        if (!(group_main_engine_1)) goto event_1766_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1766_65_end;
        {
            SavedSelection extra_enemypounder_3419_instances(enemypounder_3419_instances);
            for (SavedIterator it(extra_enemypounder_3419_instances); !it.end(); ++it) {
                foreach_instance_pound = ((Active*)*it);
                foreach_pound_65();
            }
        }
    }
    event_1766_65_end: ;
}
void Frames::event_func_14044()
{
    // event 1769_65
    {
        if (!(group_main_engine_1)) goto event_1769_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1769_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
        }
    }
    event_1769_65_end: ;
}
void Frames::event_func_14045()
{
    // event 1770_65
    {
        if (!(group_main_engine_1)) goto event_1770_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1770_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1770_65_end: ;
}
void Frames::event_func_14046()
{
    // event 1771_65
    {
        if (!(group_main_engine_1)) goto event_1771_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1771_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1771_65_end: ;
}
void Frames::event_func_14047()
{
    // event 1772_65
    {
        if (!(group_main_engine_1)) goto event_1772_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1772_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1772_65_end: ;
}
void Frames::event_func_14048()
{
    // event 1773_65
    {
        if (!(group_main_engine_1)) goto event_1773_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1773_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, -30);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1773_65_end: ;
}
void Frames::event_func_14049()
{
    // event 1774_65
    {
        if (!(group_main_engine_1)) goto event_1774_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1774_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1774_65_end: ;
}
void Frames::event_func_14050()
{
    // event 1775_65
    {
        if (!(group_main_engine_1)) goto event_1775_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1775_65_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1775_65_end;
        FrameObject * single_instance_1775_65_0; single_instance_1775_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1775_65_0 == NULL)
                    single_instance_1775_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1775_65_0))->set_x(((Active*)single_instance_1775_65_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1775_65_0))->set_y(((Active*)single_instance_1775_65_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1775_65_1_end;
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
        dynamic_1775_65_1_end: ;
    }
    event_1775_65_end: ;
}
void Frames::event_func_14051()
{
    // event 1776_65
    {
        if (!(group_main_engine_1)) goto event_1776_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (8))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1776_65_end;
        FrameObject * single_instance_1776_65_0; single_instance_1776_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1776_65_0 == NULL)
                    single_instance_1776_65_0 = new_obj;
            }
        }
        FrameObject * single_instance_1776_65_1; single_instance_1776_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1776_65_1 == NULL)
                    single_instance_1776_65_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1776_65_end: ;
}
void Frames::event_func_14052()
{
    // event 1778_65
    {
        if (!(group_main_engine_1)) goto event_1778_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1778_65_end;
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1778_65_end: ;
}
void Frames::event_func_14053()
{
    // event 1779_65
    {
        if (!(group_main_engine_1)) goto event_1779_65_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1779_65_end: ;
}
void Frames::event_func_14054()
{
    // event 1804_65
    bool or_result_1804_65 = false;
    bool or_temp_result_1804_65_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1804_65_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1804_65_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1804_65_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1804_65_0_end;
        or_result_1804_65 = true;
        or_temp_result_1804_65_0 = true;
    }
    or_event_1804_65_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1804_65_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1804_65
    bool or_temp_result_1804_65_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1804_65_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1804_65_1_end;
        or_result_1804_65 = true;
        or_temp_result_1804_65_1 = true;
        or_event_1804_65_1_end: ;
        if (or_temp_result_1804_65_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1804_65) goto or_final_or_event_1804_65_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1804_65_0 || or_temp_result_1804_65_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1804_65_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1804_65_0; single_instance_1804_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1804_65_0 == NULL)
                    single_instance_1804_65_0 = new_obj;
            }
        }
        FrameObject * single_instance_1804_65_1; single_instance_1804_65_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1804_65_1 == NULL)
                    single_instance_1804_65_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1804_65_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1804_65_1_end: ;
}
void Frames::event_func_14055()
{
    // event 1819_65
    {
        if (!(group_main_engine_1)) goto event_1819_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (0))) goto event_1819_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (800))) goto event_1819_65_end;
        if (!((global_values->get(4)) < (2))) goto event_1819_65_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_01_ogg_225, 29-1);
        media.lock(29-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
    }
    event_1819_65_end: ;
}
void Frames::event_func_14056()
{
    // event 1820_65
    {
        if (!(group_main_engine_1)) goto event_1820_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (1))) goto event_1820_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(1, 1);
    }
    event_1820_65_end: ;
}
void Frames::event_func_14057()
{
    // event 1821_65
    {
        if (!(group_main_engine_1)) goto event_1821_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (1))) goto event_1821_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (250))) goto event_1821_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
        media.unlock(29-1);
    }
    event_1821_65_end: ;
}
void Frames::event_func_14058()
{
    // event 1822_65
    {
        if (!(group_main_engine_1)) goto event_1822_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10680))) goto event_1822_65_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 2016);
    }
    event_1822_65_end: ;
}
void Frames::event_func_14059()
{
    // event 1823_65
    {
        if (!(group_main_engine_1)) goto event_1823_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) < (3))) goto event_1823_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11111))) goto event_1823_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1760))) goto event_1823_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(fdjumbotron2_3377_instances))->set_visible(true);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(1, 0);
    }
    event_1823_65_end: ;
}
void Frames::event_func_14060()
{
    // event 1824_65
    {
        if (!(group_main_engine_1)) goto event_1824_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1824_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(1, 1);
    }
    event_1824_65_end: ;
}
void Frames::event_func_14061()
{
    // event 1825_65
    {
        if (!(group_main_engine_1)) goto event_1825_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1825_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (20))) goto event_1825_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->force_animation(7);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_02_ogg_226, 29-1);
        media.lock(29-1);
    }
    event_1825_65_end: ;
}
void Frames::event_func_14062()
{
    // event 1826_65
    {
        if (!(group_main_engine_1)) goto event_1826_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1826_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (90))) goto event_1826_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->force_frame(1);
    }
    event_1826_65_end: ;
}
void Frames::event_func_14063()
{
    // event 1827_65
    {
        if (!(group_main_engine_1)) goto event_1827_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1827_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (100))) goto event_1827_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->force_frame(2);
    }
    event_1827_65_end: ;
}
void Frames::event_func_14064()
{
    // event 1828_65
    {
        if (!(group_main_engine_1)) goto event_1828_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1828_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (110))) goto event_1828_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->force_frame(3);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(1));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1828_65_end: ;
}
void Frames::event_func_14065()
{
    // event 1829_65
    {
        if (!(group_main_engine_1)) goto event_1829_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1829_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (140))) goto event_1829_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) < (240))) goto event_1829_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)%math_helper%2) == (0))) goto event_1829_65_end;
        FrameObject * single_instance_1829_65_0; single_instance_1829_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(fdjumbotron2_3377_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_backgroundspawner_3378(parent->x + 0, parent->y + 140), parent->layer);
                if (single_instance_1829_65_0 == NULL)
                    single_instance_1829_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1829_65_0))->alterables->values.set(0, -50+randrange(200));
    }
    event_1829_65_end: ;
}
void Frames::event_func_14066()
{
    // event 1830_65
    {
        if (!(group_main_engine_1)) goto event_1830_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1830_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (160))) goto event_1830_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(2, 1);
    }
    event_1830_65_end: ;
}
void Frames::event_func_14067()
{
    // event 1831_65
    {
        if (!(group_main_engine_1)) goto event_1831_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1831_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) == (250))) goto event_1831_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->restore_frame();
        ((Active*)get_instance(fdjumbotron2_3377_instances))->force_animation(0);
    }
    event_1831_65_end: ;
}
void Frames::event_func_14068()
{
    // event 1832_65
    {
        if (!(group_main_engine_1)) goto event_1832_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (3))) goto event_1832_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (270))) goto event_1832_65_end;
        ((Active*)get_instance(fdjumbotron2_3377_instances))->set_visible(false);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1832_65_end: ;
}
void Frames::event_func_14069()
{
    // event 1833_65
    {
        if (!(group_main_engine_1)) goto event_1833_65_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto event_1833_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(2)) > (0))) goto event_1833_65_end;
        enemyelitespawnerspawner_3430_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerspawner_3430_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!enemyelitespawnerspawner_3430_instances.has_selection()) goto event_1833_65_end;
        FrameObject * single_instance_1833_65_0; single_instance_1833_65_0 = pick_random(enemyelitespawnerspawner_3430_instances);
        if (single_instance_1833_65_0 == NULL) goto event_1833_65_end;
        ((Active*)((Active*)single_instance_1833_65_0))->destroy();
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        FrameObject * single_instance_1833_65_1; single_instance_1833_65_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyelitespawner_3345(((Active*)single_instance_1833_65_0)->x + 0, ((Active*)single_instance_1833_65_0)->y + 0), ((Active*)single_instance_1833_65_0)->layer);
            if (single_instance_1833_65_1 == NULL)
                single_instance_1833_65_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1833_65_1))->set_visible(true);
        ((Active*)((Active*)single_instance_1833_65_1))->alterables->values.add(1, 1);
        ((Active*)((Active*)single_instance_1833_65_1))->alterables->values.set(0, ((Active*)single_instance_1833_65_1)->get_y());
        ((Active*)((Active*)single_instance_1833_65_1))->set_y(((Active*)single_instance_1833_65_1)->alterables->values.get(0)-300);
    }
    event_1833_65_end: ;
}
void Frames::event_func_14070()
{
    // event 1834_65
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_taunt_1)) goto event_1834_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) > (3))) goto event_1834_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) < (5))) goto event_1834_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11600))) goto event_1834_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1184))) goto event_1834_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(2));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(0, 5);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_03_ogg_227, 29-1);
        media.lock(29-1);
    }
    event_1834_65_end: ;
}
void Frames::event_func_14071()
{
    // event 1835_65
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_taunt_1)) goto event_1835_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (5))) goto event_1835_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(1, 1);
    }
    event_1835_65_end: ;
}
void Frames::event_func_14072()
{
    // event 1836_65
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_taunt_1)) goto event_1836_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (5))) goto event_1836_65_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (250))) goto event_1836_65_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
        media.unlock(29-1);
    }
    event_1836_65_end: ;
}
void Frames::event_func_14073()
{
    // event 1837_65
    {
        if (!(group_main_engine_1)) goto event_1837_65_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (90))) goto event_1837_65_end;
        if (once_condition_1837_65) goto event_1837_65_end;
        once_condition_1837_65 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_0_228+number_to_string(7+randrange(3))+str_ogg_90, 29-1);
    }
    event_1837_65_end: ;
}
void Frames::event_func_14074()
{
    // event 1838_65
    {
        if (!(group_main_engine_1)) goto event_1838_65_end;
        if (!((global_values->get(4)) < (2))) goto event_1838_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4856))) goto event_1838_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4956))) goto event_1838_65_end;
        global_values->set(4, 2);
        global_values->set(5, 4856);
        global_values->set(6, 880);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1838_65_end: ;
}
void Frames::event_func_14075()
{
    // event 1839_65
    {
        if (!(group_main_engine_1)) goto event_1839_65_end;
        if (!((global_values->get(4)) < (3))) goto event_1839_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8728))) goto event_1839_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8928))) goto event_1839_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1380))) goto event_1839_65_end;
        global_values->set(4, 3);
        global_values->set(5, 8728);
        global_values->set(6, 1512);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1839_65_end: ;
}
void Frames::event_func_14076()
{
    // event 1840_65
    {
        if (!(group_main_engine_1)) goto event_1840_65_end;
        if (!((global_values->get(4)) < (4))) goto event_1840_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14112))) goto event_1840_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (14212))) goto event_1840_65_end;
        global_values->set(4, 4);
        global_values->set(5, 14112);
        global_values->set(6, 1616);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1840_65_end: ;
}
void Frames::event_func_14077()
{
    // event 1844_65
    {
        if (!(group_main_engine_1)) goto event_1844_65_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_rgb(3-1, make_color_int(255, get_min(350+sin_deg(global_values->get(3)*2)*200, 255), 255));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_rgb(4-1, make_color_int(255, get_min(350+sin_deg(global_values->get(3)*2)*200, 255), 255));
    }
    event_1844_65_end: ;
}
