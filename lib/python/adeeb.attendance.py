# -*- coding: utf-8 -*-
"""
Created on Wed 25 Aug 13:34:33 2021

@author: adeeb
"""
import re
import smtplib, ssl
import datetime, pytz

elemlist=[]
for line in iter(input,''):
    elemlist+=[elem for elem in line if elem.isnumeric()]
result = "".join(elemlist)

check= re.search("1604", result)
x=check.start()

branches={"737": "IT", "735": "ECE","733":"CSE","736":"MECH"}
branch=branches.get(result[(x+6):(x+9)])

if int(result[(x+9):(x+12)])<61:
    rollnos=[*range(1,61)]
    sec="Section A"
else:
    rollnos=[*range(61,121)]
    sec="Section B"

pattern=result[x:(x+9)]
allnums=[result[match.end():(match.end()+3)] for match in re.finditer(pattern, result)]
    
pres = list(set([int(n) for n in allnums]))
absn=set(pres)^set(rollnos)
pres.sort()
total=len(pres)

current_time = datetime.datetime.now(pytz.timezone('Asia/Kolkata'))

#EMAIL PART

smtp_server = "smtp.gmail.com"
port = 587
receiver_email = "*************@gmail.com"
sender_email = "**************@gmail.com"
password = input("Type your password and press enter: ")

message = f"Subject: Attendance for {branch} {sec}  \n\n Absentees- {absn}, \n\nPresent- {pres}, \n\nTotal present- {total}\n\n\n Regds;\n Adeeb \n\n\n this attendance was compiled at{current_time}"

context = ssl.create_default_context()

with smtplib.SMTP(smtp_server, port) as server:
    server.starttls(context=context)
    server.login(sender_email, password)
    server.sendmail(sender_email, receiver_email, message)
    server.quit()


Adeeb_is_awesome=input("Adeeb created me and I serve him with all my Heart :)")
