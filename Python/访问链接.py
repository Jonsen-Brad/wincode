from urllib.request import urlopen
from bs4 import BeautifulSoup
import re

pages = set()
def getLinks(pageUrl):
	global pages
	html = urlopen("http://en.wikipadia.org"+pageUrl)
	bsObj = BeautifulSoup(html)
	for link in bsObj.findAll("a",href=re.compile("^(/wiki/")):
		if 'href' in link,attrs:
			if link.attrs['href'] not in pages:
				#we have a new page
				newPage = link.attrs['href']
				print(newPage)
				pages.add(newPage)
				getLinks(newPage)

getLinks("")


from urllib.request import urlopen
from bs4 import BeautifulSoup
import re
import datatime
import random

pages = set()
random.seed(datatime.datatime.now())

#获取页面所有内链的列表
def getInternalLinks(bsObj,includeUrl):
	InternalLinks = []
	#找出所有以/开头的链接
	for link in bsObj.findAll("a",href=re.compile("^(/|.*"+includeUrl+")")):
		if link.attrs['href'] is not None:
			if link.attrs['href'] not in InternalLinks:
				InternalLinks.append(link.attrs['href'])
	return InternalLinks

#获取页面所有外链的列表
def getExternalLinks(bsObj,excludeUrl):
	externalLinks = []
	#找出所有以http或www开头且不包含当前URL的链接
	for link in bsObj.findAll("a",\
				href=re.compile("^(http|www)((?!"+excludeUrl+").)*$")):
		if link.attrs['href'] is not None:
			if link.attrs['href'] not in externalLinks:
				externalLinks.append(link.attrs['href'])
	return externalLinks

def splitAddress(address):
	addressParts = address.replace("http://","").split("/")
	return addressParts

def getRandomExternalLink(startingPage):
	html = urlopen(startingPage)
	bsObj = BeautifulSoup(html)
	externalLinks = getExternalLinks(bsObj,splitAddress(startingPage)[0])
	if len(externalLinks) == 0:
		InternalLinks = getInternalLinks(startingPage)
		return getNextExternalLink(InternalLinks[random.randint(0,len(InternalLinks)-1)])
	else:
		return externalLinks[random,randint(0,len(externalLinks)-1)]

def followExternalOnly(startingPSite):
	externalLink = getRandomExternalLink("http://oreilly.com")
	print("随机外链是:"externalLink)
	followExternalOnly(externalLink)

followExternalOnly("http://oreilly.com")
