#!/bin/bash

# Minus-C Global Installer for Linux and macOS
echo "⚡ Installing Minus-C globally onto your system..."

# 1. Sözlük dosyasını sistemin ortak kütüphane klasörüne kopyala
sudo mkdir -p /usr/local/include/minusc
sudo cp include/minusc.h /usr/local/include/minusc/minusc.h

# 2. Küresel derleme komutunu (minusc) oluştur
sudo bash -c 'cat > /usr/local/bin/minusc << "EOF"
#!/bin/bash
if [ $# -eq 0 ]; then
    echo "Minus-C Compiler"
    echo "Usage: minusc <source.mnc> [gcc_flags]"
    exit 1
fi
# Gelen dosyayı otomatik olarak C dilinde (-x c) derler
gcc -x c -I/usr/local/include/minusc "$@"
EOF'

# 3. Komuta çalıştırma izni ver
sudo chmod +x /usr/local/bin/minusc

echo "🚀 Minus-C installed successfully! You can now use 'minusc' command anywhere."
