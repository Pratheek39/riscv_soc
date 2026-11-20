#!/usr/bin/env python3
"""Make the input files for the big-matrix tests.

Writes A_<N>.txt and B_<N>.txt in the current folder: N lines of N
space-separated integers each. Values are random in -128..127 (int8 range),
so the PC programs can send them as 1 byte each, 4x less UART traffic.

usage:  python3 gen_matrices.py [N ...] [--seed S] [--max V]
        python3 gen_matrices.py               # 256, 512 and 1024
        python3 gen_matrices.py 512 --seed 7
        python3 gen_matrices.py 256 --max 100000   # bigger values, sent as int32
"""
import argparse

import numpy as np


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("sizes", nargs="*", type=int, default=[256, 512, 1024])
    parser.add_argument("--seed", type=int, default=1, help="random seed (default 1)")
    parser.add_argument("--max", type=int, default=127,
                        help="values are in -max-1..max (default 127 = int8)")
    args = parser.parse_args()

    rng = np.random.default_rng(args.seed)
    for size in args.sizes:
        for name in ("A", "B"):
            matrix = rng.integers(-args.max - 1, args.max + 1, size=(size, size), dtype=np.int64)
            path = f"{name}_{size}.txt"
            np.savetxt(path, matrix, fmt="%d")
            print(f"wrote {path} ({size}x{size}, values {matrix.min()}..{matrix.max()})")


if __name__ == "__main__":
    main()
