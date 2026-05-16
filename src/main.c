/*
 * src/main.c - Comprehensive evaluation of Minus-C syntax
 */

#include "minusc.h"

// Bir struct (str) yapısını Minus-C ile tanımlıyoruz
tdef str {
    u8  id;
    u16 score;
    bln active;
} player_t;

// Dosya kapsamlı (stc) sabit (cst) veri dizisi
stc cst u8 Max_Limit = 200;

i32 main(v_d) {
    // Değişkenler ultra kısa veri tipleriyle kuruluyor
    player_t p1;
    p1.id = 1;
    p1.score = 500;
    p1.active = 1;

    u32 total = 0;
    
    // _for döngüsü mimarisi
    _for (u8 i = 0; i < Max_Limit; i++) {
        
        // _if / _ei / _el mimarisi
        _if (i == 50) {
            cnt; // pas geç (continue)
        } 
        _ei (i == 150) {
            brk; // döngüyü kır (break)
        } 
        _el {
            total += i;
        }
    }

    // Swc (switch-case) mimarisi
    swc (p1.id) {
        cse 1:
            p1.score += 100;
            brk;
        dfl:
            p1.score = 0;
            brk;
    }

    rtn 0; // Geri dönüş (return)
}
