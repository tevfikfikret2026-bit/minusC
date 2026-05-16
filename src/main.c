#include "minusc.h"

i32 main(v_d) {
    // 8-bitlik (1 byte) işaretsiz bir sayaç değişkeni
    u8 counter = 0;
    
    // 32-bitlik (4 byte) toplam değişkeni
    u32 total = 0;

    // whl = while döngüsü
    whl (counter < 10) {
        total += counter;
        counter++;
    }

    // _if = if kontrolü (Eğer toplam 45 ise başarılı bitir)
    _if (total == 45) {
        rtn 0; // rtn = return
    } _el {
        rtn 1; // Bir şeyler ters gittiyse 1 dön
    }
}
