require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s-arm64;unpack=0;name=k3s;downloadfilename=k3s"
SRC_URI[k3s.sha256sum] = "01ed33ac8c50ffacd75f15001131a63660f0c715e16795f494e938f3e5337fce"