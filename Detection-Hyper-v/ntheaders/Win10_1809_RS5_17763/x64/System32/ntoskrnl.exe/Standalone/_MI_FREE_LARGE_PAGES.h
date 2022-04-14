typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned __int64 LargePageFreeCount[2];
  /* 0x0010 */ unsigned __int64 LargePagesCount[4][2][2];
  /* 0x0090 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[4][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0110 */

