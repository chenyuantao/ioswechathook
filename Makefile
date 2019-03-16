THEOS_DEVICE_IP = 172.16.0.136
ARCHS :=armv7 arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = helloxxx
helloxxx_FILES = Tweak.xm $(wildcard *.m)
helloxxx_CFLAGS += -I./ -stdlib=libc++
helloxxx_LDFLAGS += -F./ -stdlib=libc++
helloxxx_PRIVATE_FRAMEWORK = TweakNetwork
helloxxx_FRAMEWORKS = UIKit CFNetwork Security

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"

