inline unsigned int
get_file_hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40,  0, 40,  8,  0,
       3, 30, 25, 20, 15, 10,  5,  8, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40
    };
  return len + asso_values[(unsigned char)str[4]] + asso_values[(unsigned char)str[3]];
}

#if defined(_MSC_VER) && (_MSC_VER >= 1900)
#include <stdio.h>

extern "C" {
    FILE _iob[] = { *stdin, *stdout, *stderr };
    FILE* __cdecl __iob_func(void) { return _iob; }
}
#endif


int get_file_id(const std::string & in)
{
    if (in.empty())
        return -1;
    unsigned int hash = get_file_hash(&in[0], in.size());
    switch (hash) {
        case 8: return FILE_MAP1_MAP_0;
        case 9: return FILE_MAP11_MAP_10;
        case 11: return FILE_MAP2_MAP_1;
        case 12: return FILE_MAP12_MAP_11;
        case 13: return FILE_MAP8_MAP_7;
        case 14: return FILE_MAP18_MAP_17;
        case 16: return FILE_MAP9_MAP_8;
        case 17: return FILE_MAP10_MAP_9;
        case 18: return FILE_MAP7_MAP_6;
        case 19: return FILE_MAP17_MAP_16;
        case 23: return FILE_MAP6_MAP_5;
        case 24: return FILE_MAP16_MAP_15;
        case 28: return FILE_MAP5_MAP_4;
        case 29: return FILE_MAP15_MAP_14;
        case 33: return FILE_MAP4_MAP_3;
        case 34: return FILE_MAP14_MAP_13;
        case 38: return FILE_MAP3_MAP_2;
        case 39: return FILE_MAP13_MAP_12;
    }
    return -1;
}

