#!/usr/bin/env python
from __future__ import print_function
import sys
import time
import random
import requests


def main():
    '''
    Main program. Hi Lewis!!!
    '''
    while True:
       try:
           data = requests.get("http://lestarch.duckdns.org/es65/gwc/secrets/secret-4")
           data = data.json()
           data = "Masked"
           print("[INFO] Received secret from server: {0}".format(data))
       except Exception as exc:
           print("[ERROR] Failed to connect with error: {0}".format(exc),
                 file=sys.stderr)
       time.sleep(random.randint(2, 6))
if __name__ == "__main__":
    main()
