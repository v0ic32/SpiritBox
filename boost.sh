#!/data/data/com.termux/files/usr/bin/bash
echo "[boost] Starting boost mode..."
termux-setup-storage
pkg update -y && pkg upgrade -y
pkg install -y tsu htop tree
echo "[boost] Boost mode ready."
