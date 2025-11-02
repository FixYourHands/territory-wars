#pragma once


namespace CharacterFrameConstants
{
	namespace FrameSpeeds
	{
		static constexpr float slowFrameSpeed{ .15f };
		static constexpr float fastFrameSpeed{ .05f };
		static constexpr float defaultDuration{ .2f };
	}

	namespace FrameLengths
	{
		static constexpr int walkingFrameLength{ 10 };
		static constexpr int idleFrameLength{ 3 };
		static constexpr int sittingFrameLength{ 3 };
		static constexpr int punchingFrameLength{ 4 };
		static constexpr int gettingHitFrameLength{ 1 };
		static constexpr int dyingFrameLength{ 4 };
	}

	static constexpr int frameWidth{ 32 };
	static constexpr int frameHeight{ 48 };
	static constexpr int totalColumns{ 25 };
	static constexpr int totalRows{ 16 };

	
}
