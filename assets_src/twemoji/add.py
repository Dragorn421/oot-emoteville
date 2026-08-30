#!/usr/bin/env python3

import argparse
from pathlib import Path
import subprocess
import tempfile

import emoji_data_python


def add_emoji(name: str, emoji: str, width: int, height: int):
    emoji_unified = emoji_data_python.char_to_unified(emoji)
    with tempfile.TemporaryDirectory() as tmpdir:
        tmpdir_p = Path(tmpdir)
        subprocess.check_call(
            [
                "wget",
                f"https://cdn.jsdelivr.net/gh/twitter/twemoji@14.0.2/assets/svg/{emoji_unified.lower()}.svg",
                "-O",
                str(tmpdir_p / "emoji.svg"),
            ]
        )
        subprocess.check_call(
            [
                "ffmpeg",
                "-i",
                str(tmpdir_p / "emoji.svg"),
                "-update",
                "1",
                "-vf",
                f"scale={width}:{height}",
                f"assets_src/twemoji/{name}_{width}x{height}.png",
                "-y",
            ]
        )


parser = argparse.ArgumentParser()
parser.add_argument("name")
parser.add_argument("emoji")
parser.add_argument("width", type=int)
parser.add_argument("height", type=int)
args = parser.parse_args()

add_emoji(args.name, args.emoji, args.width, args.height)
