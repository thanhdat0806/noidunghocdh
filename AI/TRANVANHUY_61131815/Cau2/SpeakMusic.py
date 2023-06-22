import speech_recognition as sr
import pyaudio
from gtts import gTTS
import playsound
from pygame import mixer


r = sr.Recognizer()

print("\nBot: \tĐang nghe \t --__-- \n")
r = sr.Recognizer()
with sr.Microphone() as source:
    print("Tôi: ", end='')
    audio = r.listen(source, phrase_time_limit=8)
    try:
        text = r.recognize_google(audio, language="vi-VN")
        print(text)
    except:
        print("...")

text = "Bạn muốn nghe ca sĩ nào hát ?" 
output = gTTS(text,lang="vi", slow=False)
output.save("output.mp3")
playsound.playsound('output.mp3', True)


print("\nBot: \tĐang nghe \t --__-- \n")
r = sr.Recognizer()
with sr.Microphone() as source:
    print("Tôi: ", end='')
    audio = r.listen(source, phrase_time_limit=8)
    try:
        text = r.recognize_google(audio, language="vi-VN")
        print(text)
    except:
        print("...")


text = "Bạn muốn nghe bài hát nào ?" 
output = gTTS(text,lang="vi", slow=False)
output.save("output.mp3")
playsound.playsound('output.mp3', True)


print("\nBot: \tĐang nghe \t --__-- \n")
r = sr.Recognizer()
with sr.Microphone() as source:
    print("Tôi: ", end='')
    audio = r.listen(source, phrase_time_limit=8)
    try:
        text = r.recognize_google(audio, language="vi-VN")
        print(text)
    except:
        print("...")

text = "bắt đầu phát" 
output = gTTS(text,lang="vi", slow=False)
output.save("output.mp3")
playsound.playsound('output.mp3', True)


mixer.init()
mixer.music.load('D:/KyHe/TRANVANHUY_61131815/Cau2/CaoOc20-BRayDatGMasewKICM-6008352.mp3')
mixer.music.play()