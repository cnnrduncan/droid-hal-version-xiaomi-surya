%define rpm_vendor qualcomm

%define vendor_pretty Xiaomi

# See droid-hal-version/droid-hal-version.inc for similar macros:
%define have_vibrator_native 1 
%define have_led 1 

BuildRequires: droid-config-%{rpm_device}
BuildRequires: droid-config-%{rpm_device}-bluez5
BuildRequires: droid-config-%{rpm_device}-flashing
BuildRequires: droid-config-%{rpm_device}-preinit-plugin
BuildRequires: droid-config-%{rpm_device}-pulseaudio-settings
BuildRequires: droid-config-%{rpm_device}-sailfish
# Shared between the adaptations
BuildRequires: droid-hal-surya
BuildRequires: droid-hal-surya-img-boot
BuildRequires: droid-hal-surya-img-recovery
BuildRequires: droid-hal-surya-kernel
BuildRequires: droid-hal-surya-tools
