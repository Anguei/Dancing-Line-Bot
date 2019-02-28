import os
import time

taps = ''
with open('timeline.txt', 'r') as source:
    taps = source.readline()
taps = taps.split()

os.system('adb shell input tap 500 1000')
time.sleep(3)

for _ in taps:
    print(_, int(_) / 1000 / 2)
    os.system('adb shell input tap 500 1000')
    time.sleep(int(_) / 1000 / 2.5)