#pragma once

class CTimer
{
	static uint32 &m_snTimeInMilliseconds;
	static uint32 &m_snTimeInMillisecondsPauseMode;
	static uint32 &m_snTimeInMillisecondsNonClipped;
	static uint32 &m_snPreviousTimeInMilliseconds;
	static uint32 &m_FrameCounter;
	static float &ms_fTimeScale;
	static float &ms_fTimeStep;
	static float &ms_fTimeStepNonClipped;
	static bool  &m_UserPause;
	static bool  &m_CodePause;
public:
	static float GetTimeStep(void) { return ms_fTimeStep; }
	static float GetTimeStepNonClipped(void) { return ms_fTimeStepNonClipped; }
	static void SetTimeStep(float ts) { ms_fTimeStep = ts; }
	static uint32 GetFrameCounter(void) { return m_FrameCounter; }
	static uint32 GetTimeInMilliseconds(void) { return m_snTimeInMilliseconds; }
	
	static inline bool GetIsPaused() { return m_UserPause || m_CodePause; }
	static inline bool GetIsUserPaused() { return m_UserPause; }
	static inline void SetTimeScale(float ts) { ms_fTimeScale = ts; }
	
	static void Initialise(void);
	static void Shutdown(void);
	static void Update(void);
	static void Suspend(void);
	static void Resume(void);
	static uint32 GetCyclesPerMillisecond(void);
	static uint32 GetCurrentTimeInCycles(void);
	static bool GetIsSlowMotionActive(void);
	static void Stop(void);
	static void StartUserPause(void);
	static void EndUserPause(void);
};
