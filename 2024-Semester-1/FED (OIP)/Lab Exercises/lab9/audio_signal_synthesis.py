import numpy as np
from scipy.io import wavfile
import matplotlib.pyplot as plt

sampling_rate = 44100

def generate_sine_wave(frequency, duration, amplitude):
    num_samples = int(sampling_rate * duration)
    time = np.linspace(0, duration, num_samples, endpoint=False)
    audio_signal = amplitude * np.sin(2 * np.pi * frequency * time)
    return audio_signal

def generate_rectangular_wave(frequency, duration, amplitude):
    num_samples = int(sampling_rate * duration)
    time = np.linspace(0, duration, num_samples, endpoint=False)
    audio_signal = amplitude * np.sign(np.sin(2 * np.pi * frequency * time))
    return audio_signal

def generate_asymetric_triangular_wave(frequency, duration, amplitude):
    num_samples = int(sampling_rate * duration)
    time = np.linspace(0, duration, num_samples, endpoint=False)
    period = 1 / frequency
    audio_signal = amplitude * (2 * ((time % period) / period) - 1)
    return audio_signal

def generate_symetric_triangular_wave(frequency, duration, amplitude):
    num_samples = int(sampling_rate * duration)
    time = np.linspace(0, duration, num_samples, endpoint=False)
    period = 1 / frequency
    audio_signal = 2 * amplitude * (1 - np.abs(2 * (time % period) / period - 1)) - amplitude
    return audio_signal

def visualize_signal(audio_signal, duration, title="Audio signal"):
    time = np.linspace(0, duration, len(audio_signal), endpoint=False)
    plt.figure(figsize=(10, 6))
    plt.plot(time, audio_signal)
    plt.xlabel("Time [s]")
    plt.ylabel("Amplitude")
    plt.title(title)
    plt.grid()
    plt.show()

def plot_positive_spectrum(signal, title="Signal Spectrum (Positive Frequencies Only)"):
    signal_fft = np.fft.fft(signal)
    frequencies = np.fft.fftfreq(len(signal), 1 / sampling_rate)
    positive_frequencies = frequencies[:len(frequencies)//2]
    positive_signal_fft = 2.0 / len(signal) * np.abs(signal_fft[:len(signal)//2])
    plt.figure(figsize=(10, 6))
    plt.plot(positive_frequencies, positive_signal_fft)
    plt.xlabel("Frequency [Hz]")
    plt.ylabel("Amplitude")
    plt.title(title)
    plt.grid()
    plt.show()

    # Print main frequency and amplitude (Task 2.1.10)
    main_index = np.argmax(positive_signal_fft)
    main_frequency = positive_frequencies[main_index]
    main_amplitude = positive_signal_fft[main_index]
    print(f"Main Frequency: {main_frequency:.2f} Hz, Amplitude: {main_amplitude:.4f}")

    # Print first three harmonics if applicable
    harmonics = sorted(
        [(positive_frequencies[i], positive_signal_fft[i]) for i in range(len(positive_signal_fft))],
        key=lambda x: x[1],
        reverse=True
    )
    print("First three harmonics:")
    for i, (freq, amp) in enumerate(harmonics[:3], start=1):
        print(f"  Harmonic {i}: Frequency = {freq:.2f} Hz, Amplitude = {amp:.4f}")

def save_signal_to_wav(filename, signal):
    max_amplitude = np.max(np.abs(signal))
    normalized_signal = np.int16(signal / max_amplitude * 32767)
    wavfile.write(filename, sampling_rate, normalized_signal)

def calculate_period_and_print(frequency):
    # Print period and frequency (Task 2.1.9)
    period = 1 / frequency
    print(f"Frequency: {frequency} Hz")
    print(f"Period: {period:.4f} seconds")
    return period

def main():
    faculty_number_last_digit = 4  # Replace with your actual last faculty number digit
    frequency = 40 * faculty_number_last_digit if faculty_number_last_digit else 40
    duration = 1
    amplitude = 1

    # Sine wave
    print("Analyzing Sine Wave:")
    sine_wave = generate_sine_wave(frequency, duration, amplitude)
    calculate_period_and_print(frequency)
    visualize_signal(sine_wave, duration, title="Sine Wave")
    plot_positive_spectrum(sine_wave, title="Sine Wave Spectrum")
    save_signal_to_wav("sine_wave.wav", sine_wave)

    # Rectangular wave
    print("\nAnalyzing Rectangular Wave:")
    rectangular_wave = generate_rectangular_wave(frequency, duration, amplitude)
    calculate_period_and_print(frequency)
    visualize_signal(rectangular_wave, duration, title="Rectangular Wave")
    plot_positive_spectrum(rectangular_wave, title="Rectangular Wave Spectrum")
    save_signal_to_wav("rectangular_wave.wav", rectangular_wave)

    # Asymmetric triangular wave
    print("\nAnalyzing Asymmetric Triangular Wave:")
    asymmetric_wave = generate_asymetric_triangular_wave(frequency, duration, amplitude)
    calculate_period_and_print(frequency)
    visualize_signal(asymmetric_wave, duration, title="Asymmetric Triangular Wave")
    plot_positive_spectrum(asymmetric_wave, title="Asymmetric Triangular Wave Spectrum")
    save_signal_to_wav("asymmetric_wave.wav", asymmetric_wave)

    # Symmetric triangular wave
    print("\nAnalyzing Symmetric Triangular Wave:")
    symmetric_wave = generate_symetric_triangular_wave(frequency, duration, amplitude)
    calculate_period_and_print(frequency)
    visualize_signal(symmetric_wave, duration, title="Symmetric Triangular Wave")
    plot_positive_spectrum(symmetric_wave, title="Symmetric Triangular Wave Spectrum")
    save_signal_to_wav("symmetric_wave.wav", symmetric_wave)

if __name__ == "__main__":
    main()
