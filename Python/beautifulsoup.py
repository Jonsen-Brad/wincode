from urllib.request import urlopen
from bs4 import BeautifulSoup
#访问网站时的异常处理
from urllib.error import HTTPError
#判断两种错误的方法（服务器不存在；获取界面发生错误/不存在）
def getTitle(url):
    try:
        html = urlopen(url)
    except HTTPError as e:
        return None
    try:
        bsObj = BeautifulSoup(html.read())
        title = bsObj.body.h1
    except AttributeError as e:
        return None
    return title
title = getTitle("http://www.pythonscraping.com/pages/page1.html")
if title == None:
    print("Title could not be found")
else:
    print(title)
html = urlopen("http://www.pythonscraping.com/pages/page1.html")
#html = urlopen("http://www.pythonscrap.com/")
#服务器不存在
"""
if html is None:
    print("URL is not found")
else:
    None

#获取界面发生错误 
try:
    html = urlopen("http://www.pythonscraping.com/pages/page1.html")
except HTTPError as e:
    print(e)
"""


    
bsObj = BeautifulSoup(html.read())
print(bsObj.h1)
print(bsObj.html.h1)
