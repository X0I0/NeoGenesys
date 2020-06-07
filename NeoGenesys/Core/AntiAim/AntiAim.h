//=====================================================================================

#pragma once

#include "../Engine/Engine.hpp"

//=====================================================================================

namespace NeoGenesys
{
	class cAntiAim
	{
	public:

		typedef enum
		{
			ANTIAIM_OFF,
			ANTIAIM_SPINBOT,
			ANTIAIM_JITTERBOT,
			ANTIAIM_RANDOMIZED,
			ANTIAIM_REVERSED,
			ANTIAIM_INVERTED,
			ANTIAIM_MAX
		} eAntiAim;

		std::shared_ptr<sCvar> gAntiAim = std::make_shared<sCvar>("Anti-Aim", std::vector<std::string>({ "Off", "Spinbot", "Jitterbot", "Randomized", "Reversed", "Inverted" }), ANTIAIM_OFF, ANTIAIM_OFF, ANTIAIM_MAX);

		ImVec3 vAntiAimAngles;

		void AntiAim(sUserCmd* usercmd);
		bool IsAntiAiming();
	} extern _antiAim;
}

//=====================================================================================
