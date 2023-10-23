# Main Contributions
- Based on a single-stage design, we propose a novel pixel-wise face localisation method named RetinaFace,  which employs a multi-task learning strategy to simultaneously predict face score, face box, five facial landmarks, and 3D position and correspondence of each facial pixel.
- On the WIDER FACE hard subset, RetinaFace outperforms the AP of the state of the art two-stage method (ISRN [67]) by 1.1% (AP equal to 91.4%).
- On the IJB-C dataset, RetinaFace helps to improve verification accuracy (with TAR equal to 89.59% when FAR=1e-6). This indicates that better face localisation can significantly improve face recognition.
- By employing light-weight backbone networks, RetinaFace can run real-time on a single CPU core for a VGA-resolution image.
- Extra annotations and code have been released to facilitate future research.