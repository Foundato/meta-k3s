require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s-armhf;unpack=0;name=k3s;downloadfilename=k3s"
SRC_URI[k3s.sha256sum] = "35962fb417a089d8177f94c3ab6cab77884a83c3603399624d9dd532002b27f3"
