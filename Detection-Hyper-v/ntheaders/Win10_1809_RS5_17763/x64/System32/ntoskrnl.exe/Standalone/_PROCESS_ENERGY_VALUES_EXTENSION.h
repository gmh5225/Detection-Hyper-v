typedef union _TIMELINE_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long EndTime;
      /* 0x0004 */ unsigned long Bitmap;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} TIMELINE_BITMAP, *PTIMELINE_BITMAP; /* size: 0x0008 */

typedef union _ENERGY_STATE_DURATION
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long LastChangeTime;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long Duration : 31; /* bit position: 0 */
        /* 0x0004 */ unsigned long IsInState : 1; /* bit position: 31 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} ENERGY_STATE_DURATION, *PENERGY_STATE_DURATION; /* size: 0x0008 */

typedef struct _PROCESS_ENERGY_VALUES_EXTENSION
{
  union
  {
    /* 0x0000 */ union _TIMELINE_BITMAP Timelines[14];
    struct
    {
      /* 0x0000 */ union _TIMELINE_BITMAP CpuTimeline;
      /* 0x0008 */ union _TIMELINE_BITMAP DiskTimeline;
      /* 0x0010 */ union _TIMELINE_BITMAP NetworkTimeline;
      /* 0x0018 */ union _TIMELINE_BITMAP MBBTimeline;
      /* 0x0020 */ union _TIMELINE_BITMAP ForegroundTimeline;
      /* 0x0028 */ union _TIMELINE_BITMAP DesktopVisibleTimeline;
      /* 0x0030 */ union _TIMELINE_BITMAP CompositionRenderedTimeline;
      /* 0x0038 */ union _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;
      /* 0x0040 */ union _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;
      /* 0x0048 */ union _TIMELINE_BITMAP InputTimeline;
      /* 0x0050 */ union _TIMELINE_BITMAP AudioInTimeline;
      /* 0x0058 */ union _TIMELINE_BITMAP AudioOutTimeline;
      /* 0x0060 */ union _TIMELINE_BITMAP DisplayRequiredTimeline;
      /* 0x0068 */ union _TIMELINE_BITMAP KeyboardInputTimeline;
    }; /* size: 0x0070 */
  }; /* size: 0x0070 */
  union
  {
    /* 0x0070 */ union _ENERGY_STATE_DURATION Durations[5];
    struct
    {
      /* 0x0070 */ union _ENERGY_STATE_DURATION InputDuration;
      /* 0x0078 */ union _ENERGY_STATE_DURATION AudioInDuration;
      /* 0x0080 */ union _ENERGY_STATE_DURATION AudioOutDuration;
      /* 0x0088 */ union _ENERGY_STATE_DURATION DisplayRequiredDuration;
      /* 0x0090 */ union _ENERGY_STATE_DURATION PSMBackgroundDuration;
    }; /* size: 0x0028 */
  }; /* size: 0x0028 */
  /* 0x0098 */ unsigned long KeyboardInput;
  /* 0x009c */ unsigned long MouseInput;
} PROCESS_ENERGY_VALUES_EXTENSION, *PPROCESS_ENERGY_VALUES_EXTENSION; /* size: 0x00a0 */

