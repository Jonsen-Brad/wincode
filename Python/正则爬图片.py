#正则找字符
from urllib.request import urlopen
from bs4 import BeautifulSoup
import re
html = urlopen("http://www.pythonscraping.com/pages/page3.html")
bsObj = BeautifulSoup(html)
images = bsObj.findAll("img",{"src":re.compile("\.\.\/img\/gifts/img.*\.jpg")})
for image in images:
    print(image["src"])
"""for child in bsObj.find("table",{"id":"giftList"}).children:
^\.\.\/img\/gifts
    print(child)"""
"""for sibling in bsObj.find("table",{"id":"giftList"}).tr.next_siblings:
    print(sibling)"""
