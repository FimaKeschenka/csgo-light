#pragma once

namespace variables {
	inline bool test_bool = false;
	inline float test_float = 0.f;
	inline bool antiaim = false;
	//add in variables.hpp
	//aimbot
	inline bool aimbot = false;
	inline float aimbot_fov = 0.f;

	inline float rcs_x;
	inline float rcs_y;
	inline float aimbot_smoothing = 2.f;

	inline int bone;

	inline bool aimbot_isvisiblecheck = true;
	inline bool simple_rcs = true;
	inline bool backtrack = true;

	//chams
	inline bool chams = false;
	//inline float chamsvisteamred = 0.f;
	//inline float chamsvisteamgreen = 0.f;
	//inline float chamsvisteamblue = 0.f;

	//inline float chamsvisenemyred = 0.f;
	//inline float chamsvisenemygreen = 0.f;
	//inline float chamsvisenemyblue = 0.f;

	inline bool xqz = false;

	//inline float chamsinvisteamred = 0.f;
	//inline float chamsinvisteamgreen = 0.f;
	//inline float chamsinvisteamblue = 0.f;

	//inline float chamsinvisenemyred = 0.f;
	//inline float chamsinvisenemygreen = 0.f;
	//inline float chamsinvisenemyblue = 0.f;
	inline bool esp = false;

	namespace menu {
		inline bool opened = false;
		inline int x = 140, y = 140;
		inline int w = 400, h = 300;
	}
}