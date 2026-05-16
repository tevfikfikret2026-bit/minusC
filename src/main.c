/* 
 * Minimalist Standard C Entry Point
 * No bloated headers, no complex IO subsystems.
 */

// Sadece standart sabit genişlikli veri tipleri için (Hafiftir, yük getirmez)
#include <stdint.h> 

// Uygulamanın ana fonksiyonu
int main(void) {
    
    // Değişkenleri her zaman en küçük veri tipinde seçiyoruz (Memory Discipline)
    uint8_t counter = 0;
    uint32_t total_sum = 0;

    // Basit, temiz bir döngü
    while (counter < 100) {
        total_sum += counter;
        counter++;
    }

    // İşletim sistemine başarılı çıkış kodu döndürülür
    return 0; 
}
