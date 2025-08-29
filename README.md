# ESP32 Network Audio Transceiver

## Overview
This project aims to develop an **ESP32-based network audio transceiver** using the **ESP32 Audio Kit V2.2**. The goal is to enable two or more ESP32 devices to form a network where **one device acts as a transmitter** and **others act as receivers**.  

- The **transmitter** can receive audio from external inputs (Line In port or Bluetooth).  
- The audio is then transmitted across the network in near real-time.  
- **Receivers** play back the audio, either through their built-in speakers or connected outputs.  
- Synchronization across receivers ensures playback occurs at the same time, minimizing delay and buffering issues.  
- At any given time, **only one ESP32 on the network can transmit audio from a single source**.  

This project is a step towards building a distributed, synchronized network audio system based on low-cost ESP32 hardware.

---

## Hardware Used
- **ESP32 Audio Kit V2.2** (used as transmitter)
- **M5 Tough ESP32** (used as receiver)
- **MicroSD Cards** (4GB in both transmitter and receiver devices)
- **Line In / Line Out connections** (Audio Kit)
- **Bluetooth input/output**  
- **Built-in speakers** (M5 Tough)  
- **External Bluetooth speakers** (future playback option)

---

## Development Roadmap
The project will be developed in stages:

1. **Bluetooth Audio Receiver (Standalone Test)**  
   - Configure the ESP32 Audio Kit V2.2 to receive audio from a Bluetooth source.  
   - Output the audio to the Earphone/Line Out port for verification.  

2. **Network Audio Transmission**  
   - Transmit audio from the ESP32 Audio Kit over the network.  
   - Allow the M5 Tough ESP32 to receive and play back the audio on its built-in speaker.  

3. **Low-Latency Streaming**  
   - Optimize network transmission to minimize buffering and achieve near real-time audio.  

4. **Synchronization Across Devices**  
   - Synchronize playback between multiple ESP32 receivers.  
   - Ensure audio output remains aligned across devices.  

5. **Bluetooth Output from Receiver**  
   - Connect the M5 Tough to an external Bluetooth speaker.  
   - Output the received network audio to the paired Bluetooth speaker.  

6. **Final Synchronization for Bluetooth Output**  
   - Ensure synchronized playback across receivers, including Bluetooth outputs.  

---

## Instructions to Reproduce

1. **Setup Transmitter (ESP32 Audio Kit V2.2):**
   - Insert a 4GB microSD card.  
   - Connect an external Bluetooth source (phone, laptop, etc.).  
   - Configure the board to receive Bluetooth audio.  
   - Test playback via the Earphone/Line Out port.  

2. **Setup Receiver (M5 Tough ESP32):**
   - Insert a 4GB microSD card.  
   - Prepare the device to act as a network receiver.  
   - Initially test audio playback on its built-in speaker.  

3. **Network Transmission:**
   - Implement audio streaming over Wi-Fi from the transmitter to the receiver.  
   - Test playback consistency and audio quality.  

4. **Low-Latency Optimization:**
   - Adjust buffering strategies to minimize lag.  
   - Tune Wi-Fi transmission parameters for stability.  

5. **Synchronization:**
   - Implement time synchronization protocol (e.g., NTP, PTP, or custom sync).  
   - Align playback across multiple receivers.  

6. **Bluetooth Speaker Output:**
   - Pair the M5 Tough with a Bluetooth speaker.  
   - Forward received network audio to Bluetooth output.  
   - Verify synchronized playback across multiple devices.  

---

## Future Improvements
- Support for multiple simultaneous transmitters with handoff logic.  
- Multi-room audio distribution (similar to Sonos-style synchronization).  
- Integration with web or mobile app for control and device management.  
- Advanced codec support for higher quality and lower latency.  

---

## License
This project is currently under development. Licensing terms will be determined as the project matures.
