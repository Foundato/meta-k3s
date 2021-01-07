require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s;unpack=0;name=k3s;downloadfilename=k3s"
SRC_URI[k3s.sha256sum] = "8aed3abe7af30adbe44b70a6a774b205d1c403c3b35fcd4aa558b3cb413fcba5"
