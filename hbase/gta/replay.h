#pragma once
#pragma pack(push, 4)

#include "../pch.h"
#include "fwddec.h"

namespace rage
{
	class fwEntity
	{
	public:
		char pad_0000[32]; //0x0000
		class CBaseModelInfo* m_model_info; //0x0020
		int8_t m_invisible; //0x0028
		char pad_0029[7]; //0x0029
		class CNavigation* m_navigation; //0x0030
		char pad_0038[1]; //0x0038
		int8_t m_entity_type; //0x0039
		char pad_003A[150]; //0x003A
		class netObject* m_net_object; //0x00D0
		char pad_00D8[176]; //0x00D8
		uint32_t m_damage_bits; //0x0188

		bool is_invincible() { return(m_damage_bits & (1 << 8)); }
		void enable_invincible() { m_damage_bits |= (1 << 8); }
		void disable_invincible() { m_damage_bits &= ~(1 << 8); }
	}; //Size: 0x018C
	static_assert(sizeof(fwEntity) == 0x18C, "fwEntity is not properly sized");

	class CVehicle : public fwEntity
	{
	public:
		char pad_018C[2716]; //0x018C
		//class CPed* m_driver; //0x0C28
		//class CPed* m_occupants[8]; //0x0C30
	}; //Size: 0x018C

	class CNavigation
	{
	public:
		char pad_0000[32]; //0x0000
		float m_heading; //0x0020
		float m_heading2; //0x0024
		char pad_0028[8]; //0x0028
		vector3 m_rotation; //0x0030
		char pad_003C[20]; //0x003C
		vector3 m_position; //0x0050
	}; //Size: 0x005C

	class CPed : public fwEntity
	{
	public:
		char pad_018C[2972]; //0x018C
		class CVehicle* m_last_vehicle; //0x0D28
		char pad_0D30[908]; //0x0D30
		int8_t m_decal_index; //0x10BC
		int8_t m_decal_info; //0x10BD
		char pad_10BE[10]; //0x10BE
		class CPlayerInfo* m_player_info; //0x10C8
	};

	class CObject : public fwEntity
	{
	public:
	}; //Size: 0x018C

	class CBaseModelInfo
	{
	public:
		char pad_0000[0x18]; //0x0000
		uint32_t m_model; //0x0018
		char pad_001C[0x81]; //0x001C
		BYTE m_model_type; //0x009D
		char pad_009D[0x2A2]; //0x009E
		int32_t m_handlingType; //0x0340
	}; //Size: 0x0344

	class CPedFactory
	{
	public:
		virtual ~CPedFactory() = default;
		class CPed* m_local_ped; //0x0008
	}; //Size: 0x0010

	class CObjectHandle
	{
	public:
		class CObject* m_object; //0x0000
		int32_t m_handle; //0x0008
		char pad_000C[4]; //0x000C
	}; //Size: 0x0010
	static_assert(sizeof(CObjectHandle) == 0x10, "CObjectHandle is not properly sized");

	class CObjectList
	{
	public:
		class CObjectHandle m_objects[2300]; //0x0000
	}; //Size: 0x8FC0

	class CObjectInterface
	{
	public:
		char pad_0000[344]; //0x0000
		class CObjectList* m_object_list; //0x0158
		int32_t m_max_objects; //0x0160
		char pad_0164[4]; //0x0164
		int32_t m_cur_objects; //0x0168

		rage::CObject* get_object(const int& index)
		{
			if (index < m_max_objects)
				return m_object_list->m_objects[index].m_object;
			return nullptr;
		}
	}; //Size: 0x016C

	class CPedHandle
	{
	public:
		class CPed* m_ped; //0x0000
		int32_t m_handle; //0x0008
		char pad_000C[4]; //0x000C
	}; //Size: 0x0010
	static_assert(sizeof(CPedHandle) == 0x10, "CPedHandle is not properly sized");

	class CPedList
	{
	public:
		class CPedHandle m_peds[256]; //0x0000
	}; //Size: 0x1000

	class CPedInterface
	{
	public:
		char pad_0000[256]; //0x0000
		class CPedList* m_ped_list; //0x0100
		int32_t m_max_peds; //0x0108
		char pad_010C[4]; //0x010C
		int32_t m_cur_peds; //0x0110

		CPed* get_ped(const int& index)
		{
			if (index < m_max_peds)
				return m_ped_list->m_peds[index].m_ped;
			return nullptr;
		}
	}; //Size: 0x0114

	class CVehicleHandle
	{
	public:
		class CVehicle* m_vehicle; //0x0000
		int32_t m_handle; //0x0008
		char pad_000C[4]; //0x000C
	}; //Size: 0x0010
	static_assert(sizeof(CVehicleHandle) == 0x10, "CVehicleHandle is not properly sized");

	class CVehicleList
	{
	public:
		class CVehicleHandle m_vehicles[300]; //0x0000
	}; //Size: 0x12C0

	class CVehicleInterface
	{
	public:
		char pad_0000[384]; //0x0000
		class CVehicleList* m_vehicle_list; //0x0180
		int32_t m_max_vehicles; //0x0188
		char pad_018C[4]; //0x018C
		int32_t m_cur_vehicles; //0x0190

		CVehicle* get_vehicle(const int& index)
		{
			if (index < m_max_vehicles)
				return m_vehicle_list->m_vehicles[index].m_vehicle;
			return nullptr;
		}
	}; //Size: 0x0194

	class CReplayInterface
	{
	public:
		char pad_0000[16]; //0x0000
		class CVehicleInterface* m_vehicle_interface; //0x0010
		class CPedInterface* m_ped_interface; //0x0018
		char pad_0020[8]; //0x0020
		class CObjectInterface* m_object_interface; //0x0028
	}; //Size: 0x0030
}
#pragma pack(pop)