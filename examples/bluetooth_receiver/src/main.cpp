#include <Arduino.h>
#include "AudioTools.h"
#include "BluetoothA2DPSink.h"
#include "AudioLibs/AudioKit/AudioKit.h"

// AudioKit object controls the ES8388 codec on the ESP32 Audio Kit
AudioKitStream kit;
// Bluetooth sink will stream audio to the AudioKit
BluetoothA2DPSink a2dp_sink(kit);

void setup() {
    Serial.begin(115200);
    // Initialize the audio codec
    kit.begin();
    // Start Bluetooth A2DP sink with a device name
    a2dp_sink.start("ESP32_Audio_Kit");
}

void loop() {
    // Audio processing happens in the background
}
