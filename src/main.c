/*
 * src/main.c - Written completely in Minus-C syntax
 */

#include "minusc.h"

// Ana fonksiyon girişi
i32 main(v_d) {
    
    // Veri tipleri artık u8 ve u32
    u8 counter = 0;
    u32 total_sum = 0;

    // whl (while) döngüsü kullanımı
    whl (counter < 100) {
        
        // _if (if) kontrolü
        _if (counter == 50) {
            brk; // Döngüden çık (break)
        }
        _el {
            total_sum += counter;
        }
        
        counter++;
    }

    rtn 0; // Geri dönüş (return)
}
