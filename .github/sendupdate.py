import json
import hashlib
import os
import sys
import zipfile
import urllib.request
import re

mod_url = os.getenv('LE_RELEASE') + "/" + os.getenv('THE_MOD_ID') + ".geode"
urllib.request.urlretrieve(mod_url.replace("/tag/","/download/"), 'le.geode')
archive = zipfile.ZipFile('le.geode', 'r')
e = archive.open('changelog.md')
file_list = archive.namelist()	



def send_webhook(eee):
	from urllib import request
	import json
	import os
	eeee = []
	for eeeee in eee:
		print(eeeee.decode('utf-8'))
		eeee.append(eeeee.decode('utf-8') + "\n")
	print(eeee)
	eeeeee = "".join(eeee)
	print(eeeeee)
  
	req = request.Request(os.getenv('DISCORD_WEBHOOK_URL'), method='POST')
	req.add_header('User-Agent', 'python urllib')
	req.add_header('Content-Type', 'application/json')
	data = {
		'content': "#" + eeeeee.split("##")[1],
	}
	request.urlopen(req, data=json.dumps(data).encode('utf-8'))

send_webhook(e)
